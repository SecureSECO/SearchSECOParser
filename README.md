# SearchSECOParser
![Testing](https://github.com/SecureSECO/SearchSECOParser/actions/workflows/testing.yml/badge.svg)

This is the Parser used by the SearchSECO project, it uses [srcML](https://www.srcml.org/#home) to structure C, C++, C#, and Java code into an xml format. It then extracts methods from code files which it then abstracts to find Type-1 and Type-2 code clones (abstracting comments, white spaces, variable names, and function calls). It also supports the parsing of Python and Javascript using a custom parser built using [ANTLR](https://www.antlr.org/), applying the same type of abstraction.
It has been tested on Windows 10 and Ubuntu 20.04/18.04, but should work on most UNIX systems.

# Installation

## Dependencies

* Windows 10+, Ubuntu 18.04+. Might work on older Windows versions or other UNIX systems but has not been tested.
* [SrcML.](https://www.srcml.org/#home)
Make sure srcML is installed and registered in your path.
* [ANTLR](https://www.antlr.org/), for Windows the files are included, on UNIX make sure to download libantlr4-runtime-dev (using apt/apt-get).


## Building

### Stand-alone
#### Visual-Studio
Open the solution and simply build the project, copy and past the ANTLR dll file in the external/(debug/release)/antlr folder to the appropriate location (where you build the executable).

#### CMake
The project can be build using CMake. To do this first make sure [CMake](https://cmake.org/download) is installed and you have cloned the git repository. After this you can run the following commands in the root folder of the project to build it:
```
mkdir build && cd build
cmake ..
cmake --build .
```
You can then run the tests using:
```
./tests/parser_tests
```

### Library
Use Cmake to include the libSearchSECOParser folder, link the libSearchSECOParser library, and reference the header files in the folder. Or use the cmake file in libSearchSECOParser folder to build the library.

# Usage

## Stand-alone
    C:\path\to\parser>SearchSECOParserStandalone.exe location\of\files\to\parse

Simply give the Parser either a directory, or compressed file containing the files you want parsed. 
It will return a list of found methods with for each method:
* A hash of the abstracted code
* The name of the found method
* Where the method was found (both file and line number)


## Library

Include _Parser.h_ in the file you want to use the parser.
Call the _parse_ method with the path to the files that you want to parse, and (optionally) the number of threads to use.
This will return a vector containing a [HashData](https://git.science.uu.nl/searchseco/parser/-/blob/master/Parser/HashData.h) for each found method.

# License

This project is licensed under the GNU Affero General Public License v3.0. See [LICENSE](LICENSE) for more info.

This program has been developed by students from the bachelor Computer Science at Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)

## Licenses for code from other projects
* [ANTLR](https://www.antlr.org/). The license for ANTLR can be found in [external/antlr/LICENSE](external/curl/LICENSE.txt) and is applicable to everything in the [external/antlr](external/antlr) directory.
* [GoogleTest](https://github.com/google/googletest). The license for GoogleTest can be found in the GoogleTest [GitHub repository](https://github.com/google/googletest/blob/355d57d90d9744c41ac7c99f1e960778f1c63040/LICENSE), and is applicable to the [pch.h and pch.cpp files](tests/) in the tests directory.
