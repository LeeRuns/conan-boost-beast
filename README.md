## Boost.Beast is a cross-platform header-only library for asynchronous HTTP.

[Conan.io](https://conan.io) package for [Boost.Process](https://github.com/Boostorg/Beast) project

The packages generated with this **conanfile** can be found in [Bintray](https://bintray.com/bincrafters/conan-public/Boost.Process%3Abincrafters).

## Build packages

Download conan client from [Conan.io](https://conan.io) and run:

    $ python build.py

If your are in Windows you should run it from a VisualStudio console in order to get "mc.exe" in path.

## Upload packages to server

    $ conan upload Boost.Beast/1.65.0@bincrafters/stable --all

## Reuse the packages

### Basic setup

    $ conan install Boost.Beast/1.65.0@bincrafters/stable

### Project setup

If you handle multiple dependencies in your project is better to add a *conanfile.txt*

    [requires]
    Boost.Beast/1.65.0@bincrafters/stable

    [generators]
    txt

Complete the installation of requirements for your project running:</small></span>

    conan install .

Project setup installs the library (and all his dependencies) and generates the files *conanbuildinfo.txt* with all the paths and variables that you need to link with your dependencies.

### License
[Boost](LICENSE)
