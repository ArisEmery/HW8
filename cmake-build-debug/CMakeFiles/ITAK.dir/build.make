# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/arisemery/CLionProjects/ITAK

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/arisemery/CLionProjects/ITAK/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ITAK.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ITAK.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ITAK.dir/flags.make

CMakeFiles/ITAK.dir/main.cpp.o: CMakeFiles/ITAK.dir/flags.make
CMakeFiles/ITAK.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/arisemery/CLionProjects/ITAK/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ITAK.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ITAK.dir/main.cpp.o -c /Users/arisemery/CLionProjects/ITAK/main.cpp

CMakeFiles/ITAK.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ITAK.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/arisemery/CLionProjects/ITAK/main.cpp > CMakeFiles/ITAK.dir/main.cpp.i

CMakeFiles/ITAK.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ITAK.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/arisemery/CLionProjects/ITAK/main.cpp -o CMakeFiles/ITAK.dir/main.cpp.s

CMakeFiles/ITAK.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ITAK.dir/main.cpp.o.requires

CMakeFiles/ITAK.dir/main.cpp.o.provides: CMakeFiles/ITAK.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ITAK.dir/build.make CMakeFiles/ITAK.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ITAK.dir/main.cpp.o.provides

CMakeFiles/ITAK.dir/main.cpp.o.provides.build: CMakeFiles/ITAK.dir/main.cpp.o


CMakeFiles/ITAK.dir/Analyzer.cpp.o: CMakeFiles/ITAK.dir/flags.make
CMakeFiles/ITAK.dir/Analyzer.cpp.o: ../Analyzer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/arisemery/CLionProjects/ITAK/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ITAK.dir/Analyzer.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ITAK.dir/Analyzer.cpp.o -c /Users/arisemery/CLionProjects/ITAK/Analyzer.cpp

CMakeFiles/ITAK.dir/Analyzer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ITAK.dir/Analyzer.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/arisemery/CLionProjects/ITAK/Analyzer.cpp > CMakeFiles/ITAK.dir/Analyzer.cpp.i

CMakeFiles/ITAK.dir/Analyzer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ITAK.dir/Analyzer.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/arisemery/CLionProjects/ITAK/Analyzer.cpp -o CMakeFiles/ITAK.dir/Analyzer.cpp.s

CMakeFiles/ITAK.dir/Analyzer.cpp.o.requires:

.PHONY : CMakeFiles/ITAK.dir/Analyzer.cpp.o.requires

CMakeFiles/ITAK.dir/Analyzer.cpp.o.provides: CMakeFiles/ITAK.dir/Analyzer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ITAK.dir/build.make CMakeFiles/ITAK.dir/Analyzer.cpp.o.provides.build
.PHONY : CMakeFiles/ITAK.dir/Analyzer.cpp.o.provides

CMakeFiles/ITAK.dir/Analyzer.cpp.o.provides.build: CMakeFiles/ITAK.dir/Analyzer.cpp.o


CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.o: CMakeFiles/ITAK.dir/flags.make
CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.o: ../DenialOfServiceAnalyzer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/arisemery/CLionProjects/ITAK/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.o -c /Users/arisemery/CLionProjects/ITAK/DenialOfServiceAnalyzer.cpp

CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/arisemery/CLionProjects/ITAK/DenialOfServiceAnalyzer.cpp > CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.i

CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/arisemery/CLionProjects/ITAK/DenialOfServiceAnalyzer.cpp -o CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.s

CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.o.requires:

.PHONY : CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.o.requires

CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.o.provides: CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ITAK.dir/build.make CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.o.provides.build
.PHONY : CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.o.provides

CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.o.provides.build: CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.o


CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.o: CMakeFiles/ITAK.dir/flags.make
CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.o: ../PortScanAnalyzer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/arisemery/CLionProjects/ITAK/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.o -c /Users/arisemery/CLionProjects/ITAK/PortScanAnalyzer.cpp

CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/arisemery/CLionProjects/ITAK/PortScanAnalyzer.cpp > CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.i

CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/arisemery/CLionProjects/ITAK/PortScanAnalyzer.cpp -o CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.s

CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.o.requires:

.PHONY : CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.o.requires

CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.o.provides: CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ITAK.dir/build.make CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.o.provides.build
.PHONY : CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.o.provides

CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.o.provides.build: CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.o


CMakeFiles/ITAK.dir/Configuration.cpp.o: CMakeFiles/ITAK.dir/flags.make
CMakeFiles/ITAK.dir/Configuration.cpp.o: ../Configuration.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/arisemery/CLionProjects/ITAK/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ITAK.dir/Configuration.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ITAK.dir/Configuration.cpp.o -c /Users/arisemery/CLionProjects/ITAK/Configuration.cpp

CMakeFiles/ITAK.dir/Configuration.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ITAK.dir/Configuration.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/arisemery/CLionProjects/ITAK/Configuration.cpp > CMakeFiles/ITAK.dir/Configuration.cpp.i

CMakeFiles/ITAK.dir/Configuration.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ITAK.dir/Configuration.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/arisemery/CLionProjects/ITAK/Configuration.cpp -o CMakeFiles/ITAK.dir/Configuration.cpp.s

CMakeFiles/ITAK.dir/Configuration.cpp.o.requires:

.PHONY : CMakeFiles/ITAK.dir/Configuration.cpp.o.requires

CMakeFiles/ITAK.dir/Configuration.cpp.o.provides: CMakeFiles/ITAK.dir/Configuration.cpp.o.requires
	$(MAKE) -f CMakeFiles/ITAK.dir/build.make CMakeFiles/ITAK.dir/Configuration.cpp.o.provides.build
.PHONY : CMakeFiles/ITAK.dir/Configuration.cpp.o.provides

CMakeFiles/ITAK.dir/Configuration.cpp.o.provides.build: CMakeFiles/ITAK.dir/Configuration.cpp.o


CMakeFiles/ITAK.dir/ResultSet.cpp.o: CMakeFiles/ITAK.dir/flags.make
CMakeFiles/ITAK.dir/ResultSet.cpp.o: ../ResultSet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/arisemery/CLionProjects/ITAK/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ITAK.dir/ResultSet.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ITAK.dir/ResultSet.cpp.o -c /Users/arisemery/CLionProjects/ITAK/ResultSet.cpp

CMakeFiles/ITAK.dir/ResultSet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ITAK.dir/ResultSet.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/arisemery/CLionProjects/ITAK/ResultSet.cpp > CMakeFiles/ITAK.dir/ResultSet.cpp.i

CMakeFiles/ITAK.dir/ResultSet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ITAK.dir/ResultSet.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/arisemery/CLionProjects/ITAK/ResultSet.cpp -o CMakeFiles/ITAK.dir/ResultSet.cpp.s

CMakeFiles/ITAK.dir/ResultSet.cpp.o.requires:

.PHONY : CMakeFiles/ITAK.dir/ResultSet.cpp.o.requires

CMakeFiles/ITAK.dir/ResultSet.cpp.o.provides: CMakeFiles/ITAK.dir/ResultSet.cpp.o.requires
	$(MAKE) -f CMakeFiles/ITAK.dir/build.make CMakeFiles/ITAK.dir/ResultSet.cpp.o.provides.build
.PHONY : CMakeFiles/ITAK.dir/ResultSet.cpp.o.provides

CMakeFiles/ITAK.dir/ResultSet.cpp.o.provides.build: CMakeFiles/ITAK.dir/ResultSet.cpp.o


CMakeFiles/ITAK.dir/utils.cpp.o: CMakeFiles/ITAK.dir/flags.make
CMakeFiles/ITAK.dir/utils.cpp.o: ../utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/arisemery/CLionProjects/ITAK/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ITAK.dir/utils.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ITAK.dir/utils.cpp.o -c /Users/arisemery/CLionProjects/ITAK/utils.cpp

CMakeFiles/ITAK.dir/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ITAK.dir/utils.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/arisemery/CLionProjects/ITAK/utils.cpp > CMakeFiles/ITAK.dir/utils.cpp.i

CMakeFiles/ITAK.dir/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ITAK.dir/utils.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/arisemery/CLionProjects/ITAK/utils.cpp -o CMakeFiles/ITAK.dir/utils.cpp.s

CMakeFiles/ITAK.dir/utils.cpp.o.requires:

.PHONY : CMakeFiles/ITAK.dir/utils.cpp.o.requires

CMakeFiles/ITAK.dir/utils.cpp.o.provides: CMakeFiles/ITAK.dir/utils.cpp.o.requires
	$(MAKE) -f CMakeFiles/ITAK.dir/build.make CMakeFiles/ITAK.dir/utils.cpp.o.provides.build
.PHONY : CMakeFiles/ITAK.dir/utils.cpp.o.provides

CMakeFiles/ITAK.dir/utils.cpp.o.provides.build: CMakeFiles/ITAK.dir/utils.cpp.o


# Object files for target ITAK
ITAK_OBJECTS = \
"CMakeFiles/ITAK.dir/main.cpp.o" \
"CMakeFiles/ITAK.dir/Analyzer.cpp.o" \
"CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.o" \
"CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.o" \
"CMakeFiles/ITAK.dir/Configuration.cpp.o" \
"CMakeFiles/ITAK.dir/ResultSet.cpp.o" \
"CMakeFiles/ITAK.dir/utils.cpp.o"

# External object files for target ITAK
ITAK_EXTERNAL_OBJECTS =

ITAK: CMakeFiles/ITAK.dir/main.cpp.o
ITAK: CMakeFiles/ITAK.dir/Analyzer.cpp.o
ITAK: CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.o
ITAK: CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.o
ITAK: CMakeFiles/ITAK.dir/Configuration.cpp.o
ITAK: CMakeFiles/ITAK.dir/ResultSet.cpp.o
ITAK: CMakeFiles/ITAK.dir/utils.cpp.o
ITAK: CMakeFiles/ITAK.dir/build.make
ITAK: CMakeFiles/ITAK.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/arisemery/CLionProjects/ITAK/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable ITAK"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ITAK.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ITAK.dir/build: ITAK

.PHONY : CMakeFiles/ITAK.dir/build

CMakeFiles/ITAK.dir/requires: CMakeFiles/ITAK.dir/main.cpp.o.requires
CMakeFiles/ITAK.dir/requires: CMakeFiles/ITAK.dir/Analyzer.cpp.o.requires
CMakeFiles/ITAK.dir/requires: CMakeFiles/ITAK.dir/DenialOfServiceAnalyzer.cpp.o.requires
CMakeFiles/ITAK.dir/requires: CMakeFiles/ITAK.dir/PortScanAnalyzer.cpp.o.requires
CMakeFiles/ITAK.dir/requires: CMakeFiles/ITAK.dir/Configuration.cpp.o.requires
CMakeFiles/ITAK.dir/requires: CMakeFiles/ITAK.dir/ResultSet.cpp.o.requires
CMakeFiles/ITAK.dir/requires: CMakeFiles/ITAK.dir/utils.cpp.o.requires

.PHONY : CMakeFiles/ITAK.dir/requires

CMakeFiles/ITAK.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ITAK.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ITAK.dir/clean

CMakeFiles/ITAK.dir/depend:
	cd /Users/arisemery/CLionProjects/ITAK/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/arisemery/CLionProjects/ITAK /Users/arisemery/CLionProjects/ITAK /Users/arisemery/CLionProjects/ITAK/cmake-build-debug /Users/arisemery/CLionProjects/ITAK/cmake-build-debug /Users/arisemery/CLionProjects/ITAK/cmake-build-debug/CMakeFiles/ITAK.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ITAK.dir/depend

