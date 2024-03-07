#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// Function 1
void fn1() {
    while(true) {
        cout << "Function 1" << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
}

// Function 2
void fn2() {
    while(true) {
        cout << "Function 2" << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
}

int main() {
    // Create two threads
    thread t1(fn1);
    thread t2(fn2);

    // Join the threads (never reached in this example)
    t1.join();
    t2.join();

    return 0;
}
