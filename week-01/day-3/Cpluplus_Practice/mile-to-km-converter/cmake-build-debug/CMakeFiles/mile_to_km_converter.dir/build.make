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
CMAKE_SOURCE_DIR = D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\mile-to-km-converter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\mile-to-km-converter\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mile_to_km_converter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mile_to_km_converter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mile_to_km_converter.dir/flags.make

CMakeFiles/mile_to_km_converter.dir/main.cpp.obj: CMakeFiles/mile_to_km_converter.dir/flags.make
CMakeFiles/mile_to_km_converter.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\mile-to-km-converter\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mile_to_km_converter.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mile_to_km_converter.dir\main.cpp.obj -c D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\mile-to-km-converter\main.cpp

CMakeFiles/mile_to_km_converter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mile_to_km_converter.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\mile-to-km-converter\main.cpp > CMakeFiles\mile_to_km_converter.dir\main.cpp.i

CMakeFiles/mile_to_km_converter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mile_to_km_converter.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\mile-to-km-converter\main.cpp -o CMakeFiles\mile_to_km_converter.dir\main.cpp.s

# Object files for target mile_to_km_converter
mile_to_km_converter_OBJECTS = \
"CMakeFiles/mile_to_km_converter.dir/main.cpp.obj"

# External object files for target mile_to_km_converter
mile_to_km_converter_EXTERNAL_OBJECTS =

mile_to_km_converter.exe: CMakeFiles/mile_to_km_converter.dir/main.cpp.obj
mile_to_km_converter.exe: CMakeFiles/mile_to_km_converter.dir/build.make
mile_to_km_converter.exe: CMakeFiles/mile_to_km_converter.dir/linklibs.rsp
mile_to_km_converter.exe: CMakeFiles/mile_to_km_converter.dir/objects1.rsp
mile_to_km_converter.exe: CMakeFiles/mile_to_km_converter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\mile-to-km-converter\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mile_to_km_converter.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mile_to_km_converter.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mile_to_km_converter.dir/build: mile_to_km_converter.exe

.PHONY : CMakeFiles/mile_to_km_converter.dir/build

CMakeFiles/mile_to_km_converter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mile_to_km_converter.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mile_to_km_converter.dir/clean

CMakeFiles/mile_to_km_converter.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\mile-to-km-converter D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\mile-to-km-converter D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\mile-to-km-converter\cmake-build-debug D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\mile-to-km-converter\cmake-build-debug D:\programozas\Github\repos\greenfox\levitatio\week-01\day-3\mile-to-km-converter\cmake-build-debug\CMakeFiles\mile_to_km_converter.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mile_to_km_converter.dir/depend

