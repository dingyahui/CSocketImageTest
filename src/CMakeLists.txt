#@ main.cpp
aux_source_directory(. SRC_LIST)

#@ ImageTest
aux_source_directory(ImageTest IMAGETEST)
include_directories(ImageTest)

#@ Socket
aux_source_directory(Socket SOCKET)
include_directories(Socket)

#@ Peocess
aux_source_directory(Process PROCESS)
include_directories(Process)


find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})


# seting out file dir
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# impl
add_executable(${PROJECT_NAME} ${SRC_LIST} ${IMAGETEST} ${SOCKET} ${PROCESS})
link_directories(${OpenCV_LIBRARY_DIRS})

# pthread
set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS} pthread)

