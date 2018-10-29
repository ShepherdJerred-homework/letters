#include <thread>
#include <iostream>

using std::thread;
using std::cout;
using std::endl;
using std::chrono::seconds;
using std::this_thread::sleep_for;

void printWithDelay(char c, int delay) {
    while (true) {
        cout << c << endl;
        sleep_for(seconds(delay));
    }
}

int main() {
    thread a (printWithDelay, 'A', 1);
    thread b (printWithDelay, 'B', 2);
    thread c (printWithDelay, 'C', 5);
    a.join();
    b.join();
    c.join();
}
