# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\cpp\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpp.dir/flags.make

CMakeFiles/cpp.dir/main.cpp.obj: CMakeFiles/cpp.dir/flags.make
CMakeFiles/cpp.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\cpp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpp.dir/main.cpp.obj"
	"E:\Program Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cpp.dir\main.cpp.obj -c E:\cpp\main.cpp

CMakeFiles/cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp.dir/main.cpp.i"
	"E:\Program Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\cpp\main.cpp > CMakeFiles\cpp.dir\main.cpp.i

CMakeFiles/cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp.dir/main.cpp.s"
	"E:\Program Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\cpp\main.cpp -o CMakeFiles\cpp.dir\main.cpp.s

# Object files for target cpp
cpp_OBJECTS = \
"CMakeFiles/cpp.dir/main.cpp.obj"

# External object files for target cpp
cpp_EXTERNAL_OBJECTS =

cpp.exe: CMakeFiles/cpp.dir/main.cpp.obj
cpp.exe: CMakeFiles/cpp.dir/build.make
cpp.exe: CMakeFiles/cpp.dir/linklibs.rsp
cpp.exe: CMakeFiles/cpp.dir/objects1.rsp
cpp.exe: CMakeFiles/cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\cpp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cpp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cpp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpp.dir/build: cpp.exe

.PHONY : CMakeFiles/cpp.dir/build

CMakeFiles/cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cpp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cpp.dir/clean

CMakeFiles/cpp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\cpp E:\cpp E:\cpp\cmake-build-debug E:\cpp\cmake-build-debug E:\cpp\cmake-build-debug\CMakeFiles\cpp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpp.dir/depend

