cmake_minimum_required(VERSION 3.28)
project(CLI)

set(CMAKE_CXX_STANDARD 17)

add_executable(CLI src/main.cpp
        h/InputParser.h
        src/InputParser.cpp
        h/AbstractCommand.h
        h/EchoCommand.h
        h/Factory.h
        h/PromptCommand.h
        src/Factory.cpp
        src/EchoCommand.cpp
        src/PromptCommand.cpp
        h/TimeCommand.h
        src/TimeCommand.cpp
        h/DateCommand.h
        src/DateCommand.cpp
        h/TouchCommand.h
        src/TouchCommand.cpp
        h/TruncateCommand.h
        src/TruncateCommand.cpp
        h/RemoveCommand.h
        src/RemoveCommand.cpp
)
