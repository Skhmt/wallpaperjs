## install

as admin: `npm install`

## build

`npm install`

## notes

| TypeDef   | Definition        | Description   |
| ---       | ---               | ---           |
| LPSTR     | char *            | (long) pointer to string |
| LPCSTR    | const char *      | (long) pointer to constant string |
| LPWSTR    | wchar_t *         | (long) pointer to Unicode (wide) string |
| LPCWSTR   | const wchar_t *   | (long) pointer to constant Unicode (wide) string |
| LPTSTR    | TCHAR *           | (long) pointer to TCHAR (Unicode if UNICODE is defined, ANSI if not) string |
| LPCTSTR   | const TCHAR *     | (long) pointer to constant TCHAR string |

The L part of the TypeDefs can be ignored