# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

add_definitions(-Wno-deprecated)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

add_library( # Sets the name of the library.
             luajit

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             src/main/cpp/lapi.c
             src/main/cpp/lauxlib.c
             src/main/cpp/lbaselib.c
             src/main/cpp/lbitlib.c
             src/main/cpp/lcode.c
             src/main/cpp/lcorolib.c
             src/main/cpp/lctype.c
             src/main/cpp/ldblib.c
             src/main/cpp/ldebug.c
             src/main/cpp/ldo.c
             src/main/cpp/ldump.c
             src/main/cpp/lfunc.c
             src/main/cpp/lgc.c
             src/main/cpp/linit.c
             src/main/cpp/liolib.c
             src/main/cpp/llex.c
             src/main/cpp/lmathlib.c
             src/main/cpp/lmem.c
             src/main/cpp/loadlib.c
             src/main/cpp/lobject.c
             src/main/cpp/lopcodes.c
             src/main/cpp/loslib.c
             src/main/cpp/lparser.c
             src/main/cpp/lstate.c
             src/main/cpp/lstate.h
             src/main/cpp/lstring.c
             src/main/cpp/lstrlib.c
             src/main/cpp/ltable.c
             src/main/cpp/ltablib.c
             src/main/cpp/ltm.c
             src/main/cpp/lua.c
             src/main/cpp/lua.hpp
             #src/main/cpp/luac.c
             src/main/cpp/lundump.c
             src/main/cpp/lutf8lib.c
             src/main/cpp/lvm.c
             src/main/cpp/lzio.c
             #luajit,your c files
             src/main/cpp/luajit.c )

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
                       luajit

                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )