# wallpaperjs

Builds a native .node file to set a wallpaper with windows

## install

as admin: `npm install`

## build

`npm install`

## deploy in prod

- build
- grab wallpaper.node from `build\Release\wallpaper.node`
- use in a real application with:

```
const wp = require('./wallpaper.node')
wp.set('full\\path\\to\\wallpaper.jpg')
```

don't require this project as a whole - it's set up to build and test the .node file, not deploy it directly

## todo

MacOS and Linux
