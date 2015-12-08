find_package( GTest REQUIRED )
find_package( Qt5Widgets REQUIRED )

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set( external_includes ${Qt5Widgets_INCLUDE_DIRS} )

set( external_libs ${Qt5Widgets_LIBRARIES} "-lpthread")
