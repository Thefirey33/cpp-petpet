# petpet++

petpet++ is a petpet image generator for C++ using [wxWidgets!](https://wxwidgets.org)

This is a small program that takes whatever image you give it and gives you a *petpet* version of that image!

## Requirements

- CMake 3.10.0 (Minimum)
- C++ 11 (CXX 11 Standard)
- git

After you have used `git clone` to clone the repository to your hard drive, open a terminal in that directory, type and confirm:

```shell
git submodule update --init --recursive
```

This will initialize the wxWidgets library, along with it's nested submodules.

## Building

Use the CMake command to build this project:

```shell
cmake --build .
```

After it has been built, you will see "cpp-petpet" in the directory of the `build` folder.
