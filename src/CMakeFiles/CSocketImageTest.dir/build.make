# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /SD/csokcet-image-test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /SD/csokcet-image-test

# Include any dependencies generated for this target.
include src/CMakeFiles/CSocketImageTest.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/CSocketImageTest.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/CSocketImageTest.dir/flags.make

src/CMakeFiles/CSocketImageTest.dir/main.cpp.o: src/CMakeFiles/CSocketImageTest.dir/flags.make
src/CMakeFiles/CSocketImageTest.dir/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/SD/csokcet-image-test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/CSocketImageTest.dir/main.cpp.o"
	cd /SD/csokcet-image-test/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CSocketImageTest.dir/main.cpp.o -c /SD/csokcet-image-test/src/main.cpp

src/CMakeFiles/CSocketImageTest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSocketImageTest.dir/main.cpp.i"
	cd /SD/csokcet-image-test/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /SD/csokcet-image-test/src/main.cpp > CMakeFiles/CSocketImageTest.dir/main.cpp.i

src/CMakeFiles/CSocketImageTest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSocketImageTest.dir/main.cpp.s"
	cd /SD/csokcet-image-test/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /SD/csokcet-image-test/src/main.cpp -o CMakeFiles/CSocketImageTest.dir/main.cpp.s

src/CMakeFiles/CSocketImageTest.dir/main.cpp.o.requires:

.PHONY : src/CMakeFiles/CSocketImageTest.dir/main.cpp.o.requires

src/CMakeFiles/CSocketImageTest.dir/main.cpp.o.provides: src/CMakeFiles/CSocketImageTest.dir/main.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/CSocketImageTest.dir/build.make src/CMakeFiles/CSocketImageTest.dir/main.cpp.o.provides.build
.PHONY : src/CMakeFiles/CSocketImageTest.dir/main.cpp.o.provides

src/CMakeFiles/CSocketImageTest.dir/main.cpp.o.provides.build: src/CMakeFiles/CSocketImageTest.dir/main.cpp.o


src/CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.o: src/CMakeFiles/CSocketImageTest.dir/flags.make
src/CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.o: src/Socket/MySocket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/SD/csokcet-image-test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.o"
	cd /SD/csokcet-image-test/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.o -c /SD/csokcet-image-test/src/Socket/MySocket.cpp

src/CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.i"
	cd /SD/csokcet-image-test/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /SD/csokcet-image-test/src/Socket/MySocket.cpp > CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.i

src/CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.s"
	cd /SD/csokcet-image-test/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /SD/csokcet-image-test/src/Socket/MySocket.cpp -o CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.s

src/CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.o.requires:

.PHONY : src/CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.o.requires

src/CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.o.provides: src/CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/CSocketImageTest.dir/build.make src/CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.o.provides.build
.PHONY : src/CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.o.provides

src/CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.o.provides.build: src/CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.o


src/CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.o: src/CMakeFiles/CSocketImageTest.dir/flags.make
src/CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.o: src/Process/Process.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/SD/csokcet-image-test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.o"
	cd /SD/csokcet-image-test/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.o -c /SD/csokcet-image-test/src/Process/Process.cpp

src/CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.i"
	cd /SD/csokcet-image-test/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /SD/csokcet-image-test/src/Process/Process.cpp > CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.i

src/CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.s"
	cd /SD/csokcet-image-test/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /SD/csokcet-image-test/src/Process/Process.cpp -o CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.s

src/CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.o.requires:

.PHONY : src/CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.o.requires

src/CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.o.provides: src/CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/CSocketImageTest.dir/build.make src/CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.o.provides.build
.PHONY : src/CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.o.provides

src/CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.o.provides.build: src/CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.o


# Object files for target CSocketImageTest
CSocketImageTest_OBJECTS = \
"CMakeFiles/CSocketImageTest.dir/main.cpp.o" \
"CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.o" \
"CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.o"

# External object files for target CSocketImageTest
CSocketImageTest_EXTERNAL_OBJECTS =

bin/CSocketImageTest: src/CMakeFiles/CSocketImageTest.dir/main.cpp.o
bin/CSocketImageTest: src/CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.o
bin/CSocketImageTest: src/CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.o
bin/CSocketImageTest: src/CMakeFiles/CSocketImageTest.dir/build.make
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_shape.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_aruco.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_bgsegm.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_bioinspired.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_ccalib.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_datasets.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_dpm.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_face.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_freetype.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_fuzzy.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_hdf.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_line_descriptor.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_optflow.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_plot.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_reg.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_saliency.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_stereo.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_structured_light.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_surface_matching.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_text.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_ximgproc.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_xobjdetect.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_xphoto.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_video.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_viz.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_phase_unwrapping.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_rgbd.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_videoio.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_imgcodecs.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.3.2.0
bin/CSocketImageTest: /usr/lib/x86_64-linux-gnu/libopencv_core.so.3.2.0
bin/CSocketImageTest: src/CMakeFiles/CSocketImageTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/SD/csokcet-image-test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../bin/CSocketImageTest"
	cd /SD/csokcet-image-test/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CSocketImageTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/CSocketImageTest.dir/build: bin/CSocketImageTest

.PHONY : src/CMakeFiles/CSocketImageTest.dir/build

src/CMakeFiles/CSocketImageTest.dir/requires: src/CMakeFiles/CSocketImageTest.dir/main.cpp.o.requires
src/CMakeFiles/CSocketImageTest.dir/requires: src/CMakeFiles/CSocketImageTest.dir/Socket/MySocket.cpp.o.requires
src/CMakeFiles/CSocketImageTest.dir/requires: src/CMakeFiles/CSocketImageTest.dir/Process/Process.cpp.o.requires

.PHONY : src/CMakeFiles/CSocketImageTest.dir/requires

src/CMakeFiles/CSocketImageTest.dir/clean:
	cd /SD/csokcet-image-test/src && $(CMAKE_COMMAND) -P CMakeFiles/CSocketImageTest.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/CSocketImageTest.dir/clean

src/CMakeFiles/CSocketImageTest.dir/depend:
	cd /SD/csokcet-image-test && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /SD/csokcet-image-test /SD/csokcet-image-test/src /SD/csokcet-image-test /SD/csokcet-image-test/src /SD/csokcet-image-test/src/CMakeFiles/CSocketImageTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/CSocketImageTest.dir/depend

