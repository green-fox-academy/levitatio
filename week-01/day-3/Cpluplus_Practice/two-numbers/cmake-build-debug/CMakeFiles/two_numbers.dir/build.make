# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = C:\Users\CFY\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.6262.62\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\CFY\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.6262.62\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\two-numbers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\two-numbers\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/two_numbers.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/two_numbers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/two_numbers.dir/flags.make

CMakeFiles/two_numbers.dir/main.cpp.obj: CMakeFiles/two_numbers.dir/flags.make
CMakeFiles/two_numbers.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\two-numbers\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/two_numbers.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\two_numbers.dir\main.cpp.obj -c D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\two-numbers\main.cpp

CMakeFiles/two_numbers.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/two_numbers.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\two-numbers\main.cpp > CMakeFiles\two_numbers.dir\main.cpp.i

CMakeFiles/two_numbers.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/two_numbers.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\two-numbers\main.cpp -o CMakeFiles\two_numbers.dir\main.cpp.s

# Object files for target two_numbers
two_numbers_OBJECTS = \
"CMakeFiles/two_numbers.dir/main.cpp.obj"

# External object files for target two_numbers
two_numbers_EXTERNAL_OBJECTS =

two_numbers.exe: CMakeFiles/two_numbers.dir/main.cpp.obj
two_numbers.exe: CMakeFiles/two_numbers.dir/build.make
two_numbers.exe: CMakeFiles/two_numbers.dir/linklibs.rsp
two_numbers.exe: CMakeFiles/two_numbers.dir/objects1.rsp
two_numbers.exe: CMakeFiles/two_numbers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\two-numbers\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable two_numbers.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\two_numbers.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/two_numbers.dir/build: two_numbers.exe

.PHONY : CMakeFiles/two_numbers.dir/build

CMakeFiles/two_numbers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\two_numbers.dir\cmake_clean.cmake
.PHONY : CMakeFiles/two_numbers.dir/clean

CMakeFiles/two_numbers.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\two-numbers D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\two-numbers D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\two-numbers\cmake-build-debug D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\two-numbers\cmake-build-debug D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\two-numbers\cmake-build-debug\CMakeFiles\two_numbers.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/two_numbers.dir/depend

