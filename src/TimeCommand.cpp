//
// Created by Petar on 7.11.2024..
//

#include "../h/TimeCommand.h"
#include <chrono>
#include <iomanip>
#include <iostream>

void TimeCommand::execute() {
    auto now = std::chrono::system_clock::now();

    //change time now to seconds from 1.1.1970
    std::time_t current_time = std::chrono::system_clock::to_time_t(now);

    //change to local time
    std::tm* local_time = std::localtime(&current_time);

    //format and write current local time
    std::cout<<"Current local time: "<<std::put_time(local_time,"%H:%M:%S")<<std::endl;
}
