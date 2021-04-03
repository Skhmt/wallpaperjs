
#ifndef UNICODE
#define UNICODE
#endif

#include <napi.h>
#include <windows.h>

void set(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();

    // checking number of arguments
    if (info.Length() != 1) {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
        return;
    }
    
    // checking type
    if (!info[0].IsString()) {
        Napi::TypeError::New(env, "Argument should be a string").ThrowAsJavaScriptException();
        return;
    }

    SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, (PVOID*)((info[0].As<Napi::String>()).Utf8Value().c_str()), SPIF_UPDATEINIFILE);
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    exports.Set("set", Napi::Function::New(env, set));

    return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Init) // lack of semi-colon is intentional
