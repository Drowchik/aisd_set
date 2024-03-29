cmake_minimum_required(VERSION 3.11)

project(aisd_set CXX)

set(CMAKE_CXX_STANDARD 23)

if(MSVC)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS true)

    if(CMAKE_CXX_FLAGS MATCHES "/W[0-4]")
        string(REGEX REPLACE "/W[0-4]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
    else()
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
    endif()
endif()

# Îáúÿâëÿåì áèáëèîòåêó
add_library(aisd_set SHARED "include/aisd_set/aisd_set.h" "src/aisd_set.cpp")
target_include_directories(aisd_set PUBLIC "include")


include(FetchContent)
FetchContent_Declare(googletest URL https://github.com/google/googletest/archive/6b63c98ac43efc992122f1da12aaf0a0e0658206.zip)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(sort_tests "tests/aisd_set.cpp")
target_link_libraries(sort_tests aisd_set GTest::gtest_main)


#Ïîäêëþ÷åíèå êîíñîëüíîãî ïðèëîæåíèÿ
add_executable(console "console/console.cpp")
target_link_libraries(console aisd_set)