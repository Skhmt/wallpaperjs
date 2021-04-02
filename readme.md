# wallpaperjs

Builds a native .node file to set a wallpaper with windows

## install and build

as admin: `npm install`

## just build

`npm install`

## deploy in prod

- build
- `npm run build-node` or `-nw` for nw.js or `-electron` for electron
- go to `/prebuilds`
- find the .tar.gz and get `wallpaper.node` from it
- move it to your project; you won't need the rest of this project

```
const wp = require('./wallpaper.node')
wp.set('full\\path\\to\\wallpaper.jpg')
```

DO NOT require this project as a whole - it's set up to build and test the .node file, not deploy it directly

## todo

MacOS and Linux
