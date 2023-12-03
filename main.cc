#include <iostream>
#include <thread>
#include <chrono>
#include "math/addition.hh"
#include "math/subtraction.hh"

void function(int& x, bool& isStopped)
{
    while(!isStopped)
    {
        std::cout << "Hello " << x << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
}

int main()
{
    std::cout << "Hello world! :)" << std::endl;

    bool isStopped = false;

    int param1 = 15;
    int param2 = 37;

    std::cout << "ADD: " << add(param1, param2) << std::endl;
    std::cout << "SUB: " << sub(param1, param2) << std::endl;

    std::thread myThread(function, std::ref(param1), std::ref(isStopped));

    std::this_thread::sleep_for(std::chrono::seconds(10));

    isStopped = true;
    if(myThread.joinable())
        myThread.join();

    return 0;
}