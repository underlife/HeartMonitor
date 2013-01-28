project(HeartMonitor)
cmake_minimum_required(VERSION 2.6)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})
set(qttest_SRCS plot.cpp trayiconmanager.cpp HeartMonitor.cpp main.cpp)
set(CMAKE_CXX_FLAGS                "-Wall -std=c++11")
set (MOC  HeartMonitor.h)
qt4_wrap_cpp (MOCS ${MOC})


add_executable(HeartMonitor ${qttest_SRCS} ${MOCS})
target_link_libraries(HeartMonitor ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY} qwt)
install(TARGETS HeartMonitor RUNTIME DESTINATION bin)
