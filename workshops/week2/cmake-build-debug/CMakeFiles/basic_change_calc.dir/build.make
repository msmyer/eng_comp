# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/max/Tools/clion-2018.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/max/Tools/clion-2018.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/max/Code/eng_comp/workshops/week2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/max/Code/eng_comp/workshops/week2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/basic_change_calc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/basic_change_calc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/basic_change_calc.dir/flags.make

CMakeFiles/basic_change_calc.dir/basic_change_calc.c.o: CMakeFiles/basic_change_calc.dir/flags.make
CMakeFiles/basic_change_calc.dir/basic_change_calc.c.o: ../basic_change_calc.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/max/Code/eng_comp/workshops/week2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/basic_change_calc.dir/basic_change_calc.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/basic_change_calc.dir/basic_change_calc.c.o   -c /home/max/Code/eng_comp/workshops/week2/basic_change_calc.c

CMakeFiles/basic_change_calc.dir/basic_change_calc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/basic_change_calc.dir/basic_change_calc.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/max/Code/eng_comp/workshops/week2/basic_change_calc.c > CMakeFiles/basic_change_calc.dir/basic_change_calc.c.i

CMakeFiles/basic_change_calc.dir/basic_change_calc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/basic_change_calc.dir/basic_change_calc.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/max/Code/eng_comp/workshops/week2/basic_change_calc.c -o CMakeFiles/basic_change_calc.dir/basic_change_calc.c.s

# Object files for target basic_change_calc
basic_change_calc_OBJECTS = \
"CMakeFiles/basic_change_calc.dir/basic_change_calc.c.o"

# External object files for target basic_change_calc
basic_change_calc_EXTERNAL_OBJECTS =

basic_change_calc: CMakeFiles/basic_change_calc.dir/basic_change_calc.c.o
basic_change_calc: CMakeFiles/basic_change_calc.dir/build.make
basic_change_calc: CMakeFiles/basic_change_calc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/max/Code/eng_comp/workshops/week2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable basic_change_calc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/basic_change_calc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/basic_change_calc.dir/build: basic_change_calc

.PHONY : CMakeFiles/basic_change_calc.dir/build

CMakeFiles/basic_change_calc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/basic_change_calc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/basic_change_calc.dir/clean

CMakeFiles/basic_change_calc.dir/depend:
	cd /home/max/Code/eng_comp/workshops/week2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/max/Code/eng_comp/workshops/week2 /home/max/Code/eng_comp/workshops/week2 /home/max/Code/eng_comp/workshops/week2/cmake-build-debug /home/max/Code/eng_comp/workshops/week2/cmake-build-debug /home/max/Code/eng_comp/workshops/week2/cmake-build-debug/CMakeFiles/basic_change_calc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/basic_change_calc.dir/depend

