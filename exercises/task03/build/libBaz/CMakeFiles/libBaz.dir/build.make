# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = M:\Git\uibk_cpp_2021\exercises\task03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = M:\Git\uibk_cpp_2021\exercises\task03\build

# Include any dependencies generated for this target.
include libBaz/CMakeFiles/libBaz.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libBaz/CMakeFiles/libBaz.dir/compiler_depend.make

# Include the progress variables for this target.
include libBaz/CMakeFiles/libBaz.dir/progress.make

# Include the compile flags for this target's objects.
include libBaz/CMakeFiles/libBaz.dir/flags.make

libBaz/CMakeFiles/libBaz.dir/baz.cpp.obj: libBaz/CMakeFiles/libBaz.dir/flags.make
libBaz/CMakeFiles/libBaz.dir/baz.cpp.obj: libBaz/CMakeFiles/libBaz.dir/includes_CXX.rsp
libBaz/CMakeFiles/libBaz.dir/baz.cpp.obj: ../libBaz/baz.cpp
libBaz/CMakeFiles/libBaz.dir/baz.cpp.obj: libBaz/CMakeFiles/libBaz.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=M:\Git\uibk_cpp_2021\exercises\task03\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libBaz/CMakeFiles/libBaz.dir/baz.cpp.obj"
	cd /d M:\Git\uibk_cpp_2021\exercises\task03\build\libBaz && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libBaz/CMakeFiles/libBaz.dir/baz.cpp.obj -MF CMakeFiles\libBaz.dir\baz.cpp.obj.d -o CMakeFiles\libBaz.dir\baz.cpp.obj -c M:\Git\uibk_cpp_2021\exercises\task03\libBaz\baz.cpp

libBaz/CMakeFiles/libBaz.dir/baz.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libBaz.dir/baz.cpp.i"
	cd /d M:\Git\uibk_cpp_2021\exercises\task03\build\libBaz && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E M:\Git\uibk_cpp_2021\exercises\task03\libBaz\baz.cpp > CMakeFiles\libBaz.dir\baz.cpp.i

libBaz/CMakeFiles/libBaz.dir/baz.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libBaz.dir/baz.cpp.s"
	cd /d M:\Git\uibk_cpp_2021\exercises\task03\build\libBaz && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S M:\Git\uibk_cpp_2021\exercises\task03\libBaz\baz.cpp -o CMakeFiles\libBaz.dir\baz.cpp.s

# Object files for target libBaz
libBaz_OBJECTS = \
"CMakeFiles/libBaz.dir/baz.cpp.obj"

# External object files for target libBaz
libBaz_EXTERNAL_OBJECTS =

libBaz/liblibBaz.a: libBaz/CMakeFiles/libBaz.dir/baz.cpp.obj
libBaz/liblibBaz.a: libBaz/CMakeFiles/libBaz.dir/build.make
libBaz/liblibBaz.a: libBaz/CMakeFiles/libBaz.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=M:\Git\uibk_cpp_2021\exercises\task03\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblibBaz.a"
	cd /d M:\Git\uibk_cpp_2021\exercises\task03\build\libBaz && $(CMAKE_COMMAND) -P CMakeFiles\libBaz.dir\cmake_clean_target.cmake
	cd /d M:\Git\uibk_cpp_2021\exercises\task03\build\libBaz && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\libBaz.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libBaz/CMakeFiles/libBaz.dir/build: libBaz/liblibBaz.a
.PHONY : libBaz/CMakeFiles/libBaz.dir/build

libBaz/CMakeFiles/libBaz.dir/clean:
	cd /d M:\Git\uibk_cpp_2021\exercises\task03\build\libBaz && $(CMAKE_COMMAND) -P CMakeFiles\libBaz.dir\cmake_clean.cmake
.PHONY : libBaz/CMakeFiles/libBaz.dir/clean

libBaz/CMakeFiles/libBaz.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" M:\Git\uibk_cpp_2021\exercises\task03 M:\Git\uibk_cpp_2021\exercises\task03\libBaz M:\Git\uibk_cpp_2021\exercises\task03\build M:\Git\uibk_cpp_2021\exercises\task03\build\libBaz M:\Git\uibk_cpp_2021\exercises\task03\build\libBaz\CMakeFiles\libBaz.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : libBaz/CMakeFiles/libBaz.dir/depend

