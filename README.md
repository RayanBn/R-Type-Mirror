# R-Type

A project meant to reproduce a game called [R-Type](https://fr.wikipedia.org/wiki/R-Type).

In this project we're building our own game engine based on an [ECS](https://en.wikipedia.org/wiki/Entity_component_system). This will allow us to handle a large number of entities as weel as having a maintainable game.

Having a game engine also will allow us to make loads of other games in the future, so that's pretty cool!

## Installation

Make sure to clone the repo with the `--recursive` flag:
```
git clone [repo URL] --recursive
```
fi you didn't clone as such, don't worry just run the following command inside the repo:
```
git submodule update --init
```

### install the game with vcpkg on Linux or Windows:

First run the following command to configure your CMake build files:
```
cmake -B build
```
If you want to use your own version of vcpkg use the following command:
```
cmake -B build -DCMAKE_TOOLCHAIN_FILE=[path to vcpkg]/scripts/buildsystems/vcpkg.cmake
```
or if you don't want to use vcpkg at all and rather use your own installations of the requested libraries:
```
cmake -B build -DCMAKE_TOOLCHAIN_FILE=""
```
Finally to build the project run the following command:
```
cmake --build build
```
