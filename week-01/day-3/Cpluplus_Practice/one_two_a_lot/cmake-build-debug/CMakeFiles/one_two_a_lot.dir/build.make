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
CMAKE_SOURCE_DIR = D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\one_two_a_lot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\one_two_a_lot\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/one_two_a_lot.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/one_two_a_lot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/one_two_a_lot.dir/flags.make

CMakeFiles/one_two_a_lot.dir/main.cpp.obj: CMakeFiles/one_two_a_lot.dir/flags.make
CMakeFiles/one_two_a_lot.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\one_two_a_lot\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/one_two_a_lot.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\one_two_a_lot.dir\main.cpp.obj -c D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\one_two_a_lot\main.cpp

CMakeFiles/one_two_a_lot.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/one_two_a_lot.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\one_two_a_lot\main.cpp > CMakeFiles\one_two_a_lot.dir\main.cpp.i

CMakeFiles/one_two_a_lot.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/one_two_a_lot.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\one_two_a_lot\main.cpp -o CMakeFiles\one_two_a_lot.dir\main.cpp.s

# Object files for target one_two_a_lot
one_two_a_lot_OBJECTS = \
"CMakeFiles/one_two_a_lot.dir/main.cpp.obj"

# External object files for target one_two_a_lot
one_two_a_lot_EXTERNAL_OBJECTS =

one_two_a_lot.exe: CMakeFiles/one_two_a_lot.dir/main.cpp.obj
one_two_a_lot.exe: CMakeFiles/one_two_a_lot.dir/build.make
one_two_a_lot.exe: CMakeFiles/one_two_a_lot.dir/linklibs.rsp
one_two_a_lot.exe: CMakeFiles/one_two_a_lot.dir/objects1.rsp
one_two_a_lot.exe: CMakeFiles/one_two_a_lot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\one_two_a_lot\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable one_two_a_lot.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\one_two_a_lot.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/one_two_a_lot.dir/build: one_two_a_lot.exe

.PHONY : CMakeFiles/one_two_a_lot.dir/build

CMakeFiles/one_two_a_lot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\one_two_a_lot.dir\cmake_clean.cmake
.PHONY : CMakeFiles/one_two_a_lot.dir/clean

CMakeFiles/one_two_a_lot.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\one_two_a_lot D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\one_two_a_lot D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\one_two_a_lot\cmake-build-debug D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\one_two_a_lot\cmake-build-debug D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\one_two_a_lot\cmake-build-debug\CMakeFiles\one_two_a_lot.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/one_two_a_lot.dir/depend

