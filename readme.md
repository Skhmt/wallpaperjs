# wallpaperjs

builds a native .node file to set a wallpaper in windows

made this in a few minutes, use at your own peril

## install and build

as admin: `npm install`

## just build

`npm install`

## deploy in prod

- install
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
