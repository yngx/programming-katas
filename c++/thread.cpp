#include <string>
#include <iostream>
#include <thread>

using namespace std;
// Note: need to compile as: clang++ -std=c++11 thread.cpp

// The function we want to execute on the new thread.
void task1(string msg)
{
    cout << "task1 says: " << msg << endl;
}

void task2(string msg)
{
    cout << "task2 says " << msg << endl;
}

int main()
{
    // Constructs the new thread and runs it. Does not block execution.
    thread t1(task1, "Hello");
    thread t2(task2, "World");

    // Do other things...

    // Makes the main thread wait for the new thread to finish execution, therefore blocks its own execution.
    t1.join();
    t2.join();

    return 0;
}