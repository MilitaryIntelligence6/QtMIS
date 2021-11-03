cmake_minimum_required(VERSION 3.5)

project(QtMIS LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(src/main/cpp)

# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check http://doc.qt.io/qt-5/deployment-android.html for more information.
# They need to be set before the find_package(Qt5 ...) call.

#if(ANDROID)
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    if (ANDROID_ABI STREQUAL "armeabi-v7a")
#        set(ANDROID_EXTRA_LIBS
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
#    endif()
#endif()

# QT 依赖;
set(CMAKE_PREFIX_PATH "/Users/javaman/ProgramFiles/develop/env/cpp/qt/Qt5.12.9/5.12.9/clang_64/lib/cmake")

find_package(Qt5 COMPONENTS Widgets LinguistTools REQUIRED)

set(TS_FILES QtMIS_zh_CN.ts)

if (ANDROID)
    add_library(QtMIS SHARED
            main.cpp

            src/main/cpp/EditStuMessBox.h
            src/main/cpp/EditStuMessBox.cpp
            src/main/cpp/MainWidget.h
            src/main/cpp/MainWidget.cpp
            src/main/cpp/Student.h
            src/main/cpp/Student.cpp
            src/main/cpp/Tool.h
            #            shit 要用那个在下面
            ${TS_FILES}
            )
else ()
    add_executable(QtMIS
            main.cpp

            src/main/cpp/EditStuMessBox.h
            src/main/cpp/EditStuMessBox.cpp
            src/main/cpp/MainWidget.h
            src/main/cpp/MainWidget.cpp
            src/main/cpp/Student.h
            src/main/cpp/Student.cpp
            src/main/cpp/Tool.h

            ${TS_FILES}
            )
endif ()

target_link_libraries(QtMIS PRIVATE Qt5::Widgets)

qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
