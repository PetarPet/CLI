cmake_minimum_required(VERSION 3.28)
project(CLI)

set(CMAKE_CXX_STANDARD 17)

add_executable(CLI src/main.cpp
        h/InputParser.h
        src/InputParser.cpp
        h/AbstractCommand.h
        h/CommandEcho.h
        h/FactoryCommand.h
        h/CommandPrompt.h
        src/FactoryCommand.cpp
        src/CommandEcho.cpp
        src/CommandPrompt.cpp
        h/CommandTime.h
        src/CommandTime.cpp)
