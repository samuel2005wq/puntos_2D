# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/samuel/ejercicios/puntos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/samuel/ejercicios/puntos/build

# Include any dependencies generated for this target.
include CMakeFiles/programa.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/programa.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/programa.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/programa.dir/flags.make

CMakeFiles/programa.dir/main.cpp.o: CMakeFiles/programa.dir/flags.make
CMakeFiles/programa.dir/main.cpp.o: /home/samuel/ejercicios/puntos/main.cpp
CMakeFiles/programa.dir/main.cpp.o: CMakeFiles/programa.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/samuel/ejercicios/puntos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/programa.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/programa.dir/main.cpp.o -MF CMakeFiles/programa.dir/main.cpp.o.d -o CMakeFiles/programa.dir/main.cpp.o -c /home/samuel/ejercicios/puntos/main.cpp

CMakeFiles/programa.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/programa.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/samuel/ejercicios/puntos/main.cpp > CMakeFiles/programa.dir/main.cpp.i

CMakeFiles/programa.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/programa.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/samuel/ejercicios/puntos/main.cpp -o CMakeFiles/programa.dir/main.cpp.s

CMakeFiles/programa.dir/point2d.cpp.o: CMakeFiles/programa.dir/flags.make
CMakeFiles/programa.dir/point2d.cpp.o: /home/samuel/ejercicios/puntos/point2d.cpp
CMakeFiles/programa.dir/point2d.cpp.o: CMakeFiles/programa.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/samuel/ejercicios/puntos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/programa.dir/point2d.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/programa.dir/point2d.cpp.o -MF CMakeFiles/programa.dir/point2d.cpp.o.d -o CMakeFiles/programa.dir/point2d.cpp.o -c /home/samuel/ejercicios/puntos/point2d.cpp

CMakeFiles/programa.dir/point2d.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/programa.dir/point2d.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/samuel/ejercicios/puntos/point2d.cpp > CMakeFiles/programa.dir/point2d.cpp.i

CMakeFiles/programa.dir/point2d.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/programa.dir/point2d.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/samuel/ejercicios/puntos/point2d.cpp -o CMakeFiles/programa.dir/point2d.cpp.s

# Object files for target programa
programa_OBJECTS = \
"CMakeFiles/programa.dir/main.cpp.o" \
"CMakeFiles/programa.dir/point2d.cpp.o"

# External object files for target programa
programa_EXTERNAL_OBJECTS =

programa: CMakeFiles/programa.dir/main.cpp.o
programa: CMakeFiles/programa.dir/point2d.cpp.o
programa: CMakeFiles/programa.dir/build.make
programa: CMakeFiles/programa.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/samuel/ejercicios/puntos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable programa"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/programa.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/programa.dir/build: programa
.PHONY : CMakeFiles/programa.dir/build

CMakeFiles/programa.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/programa.dir/cmake_clean.cmake
.PHONY : CMakeFiles/programa.dir/clean

CMakeFiles/programa.dir/depend:
	cd /home/samuel/ejercicios/puntos/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/samuel/ejercicios/puntos /home/samuel/ejercicios/puntos /home/samuel/ejercicios/puntos/build /home/samuel/ejercicios/puntos/build /home/samuel/ejercicios/puntos/build/CMakeFiles/programa.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/programa.dir/depend

