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
include CMakeFiles/change.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/change.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/change.dir/flags.make

CMakeFiles/change.dir/change_calc.c.o: CMakeFiles/change.dir/flags.make
CMakeFiles/change.dir/change_calc.c.o: ../change_calc.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/max/Code/eng_comp/workshops/week2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/change.dir/change_calc.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/change.dir/change_calc.c.o   -c /home/max/Code/eng_comp/workshops/week2/change_calc.c

CMakeFiles/change.dir/change_calc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/change.dir/change_calc.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/max/Code/eng_comp/workshops/week2/change_calc.c > CMakeFiles/change.dir/change_calc.c.i

CMakeFiles/change.dir/change_calc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/change.dir/change_calc.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/max/Code/eng_comp/workshops/week2/change_calc.c -o CMakeFiles/change.dir/change_calc.c.s

# Object files for target change
change_OBJECTS = \
"CMakeFiles/change.dir/change_calc.c.o"

# External object files for target change
change_EXTERNAL_OBJECTS =

change: CMakeFiles/change.dir/change_calc.c.o
change: CMakeFiles/change.dir/build.make
change: CMakeFiles/change.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/max/Code/eng_comp/workshops/week2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable change"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/change.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/change.dir/build: change

.PHONY : CMakeFiles/change.dir/build

CMakeFiles/change.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/change.dir/cmake_clean.cmake
.PHONY : CMakeFiles/change.dir/clean

CMakeFiles/change.dir/depend:
	cd /home/max/Code/eng_comp/workshops/week2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/max/Code/eng_comp/workshops/week2 /home/max/Code/eng_comp/workshops/week2 /home/max/Code/eng_comp/workshops/week2/cmake-build-debug /home/max/Code/eng_comp/workshops/week2/cmake-build-debug /home/max/Code/eng_comp/workshops/week2/cmake-build-debug/CMakeFiles/change.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/change.dir/depend
