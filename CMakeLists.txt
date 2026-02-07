cmake_minimum_required(VERSION 3.16)

project(car VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS MultimediaWidgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Multimedia)#加入Multimeida
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Network)#加入Network

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(car
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
	weather.h weather.cpp weather.ui
        map.h map.cpp map.ui
        music.h music.cpp music.ui
        video.h video.cpp video.ui
        myweatherwidget.h myweatherwidget.cpp myweatherwidget.ui
        myplayer.h myplayer.cpp myplayer.ui
        img/res.qrc
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET car APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(car SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(car
            ${PROJECT_SOURCES}
        )
    endif()
endif()

#项目根目录 = e:\qt_study\car\ = /home/yun/桌面/car/ = ${CMAKE_CURRENT_SOURCE_DIR}
#include目录 = 编译器搜索头文件的目录（可以有多个）
# 添加项目根目录到include路径!!!否则提升的控件找不到myweatherwidget.h myplayer.h
target_include_directories(car PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(car PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(car PRIVATE Qt${QT_VERSION_MAJOR}::MultimediaWidgets)
target_link_libraries(car PRIVATE Qt${QT_VERSION_MAJOR}::Multimedia)
target_link_libraries(car PRIVATE Qt${QT_VERSION_MAJOR}::Network)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.car)
endif()
set_target_properties(car PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS car
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(car)
endif()

