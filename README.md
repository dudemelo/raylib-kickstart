# Raylib Kickstart

## 1. Install Conan dependencies

```sh
conan install . -of build/
```

## 2. Configure Meson project

```sh
meson setup --native-file build/conan_meson_native.ini . build/
```

## 3. Compile the project

```sh
meson compile -C build
```

## 4. Run the project

```sh
./build/raylib-kickstart
```
