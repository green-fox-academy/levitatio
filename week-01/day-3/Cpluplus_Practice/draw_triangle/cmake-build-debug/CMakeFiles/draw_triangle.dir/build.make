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
CMAKE_SOURCE_DIR = D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\draw_triangle

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\draw_triangle\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/draw_triangle.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/draw_triangle.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/draw_triangle.dir/flags.make

CMakeFiles/draw_triangle.dir/main.cpp.obj: CMakeFiles/draw_triangle.dir/flags.make
CMakeFiles/draw_triangle.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\draw_triangle\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/draw_triangle.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\draw_triangle.dir\main.cpp.obj -c D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\draw_triangle\main.cpp

CMakeFiles/draw_triangle.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/draw_triangle.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\draw_triangle\main.cpp > CMakeFiles\draw_triangle.dir\main.cpp.i

CMakeFiles/draw_triangle.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/draw_triangle.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\draw_triangle\main.cpp -o CMakeFiles\draw_triangle.dir\main.cpp.s

# Object files for target draw_triangle
draw_triangle_OBJECTS = \
"CMakeFiles/draw_triangle.dir/main.cpp.obj"

# External object files for target draw_triangle
draw_triangle_EXTERNAL_OBJECTS =

draw_triangle.exe: CMakeFiles/draw_triangle.dir/main.cpp.obj
draw_triangle.exe: CMakeFiles/draw_triangle.dir/build.make
draw_triangle.exe: CMakeFiles/draw_triangle.dir/linklibs.rsp
draw_triangle.exe: CMakeFiles/draw_triangle.dir/objects1.rsp
draw_triangle.exe: CMakeFiles/draw_triangle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\draw_triangle\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable draw_triangle.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\draw_triangle.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/draw_triangle.dir/build: draw_triangle.exe

.PHONY : CMakeFiles/draw_triangle.dir/build

CMakeFiles/draw_triangle.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\draw_triangle.dir\cmake_clean.cmake
.PHONY : CMakeFiles/draw_triangle.dir/clean

CMakeFiles/draw_triangle.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\draw_triangle D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\draw_triangle D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\draw_triangle\cmake-build-debug D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\draw_triangle\cmake-build-debug D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\draw_triangle\cmake-build-debug\CMakeFiles\draw_triangle.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/draw_triangle.dir/depend

