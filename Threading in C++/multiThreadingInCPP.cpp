#include <iostream>
// #include <thread> // Include the <thread> header file
#define _WIN32_WINNT 0x0501
#include "./mingw.thread.h"






using namespace std;

void function1() {
    for(int i = 0; i < 100; i++) {
        std::cout << "+";
    }
}

void function2() {
    for(int i = 0; i < 100; i++) {
        std::cout << "-";
    }
}

int main() {
    // function1();
    // function2();

    thread t1(function1);
    thread t2(function2);

    // Optionally, you can wait for the threads to finish
    t1.join();
    t2.join();

    // You can remove the system("pause>nul") as it's not needed in this context
    // system("pause>nul");

    return 0;
}
