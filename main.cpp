#include <iostream>
#include <thread>


using namespace std;

void myprint() {
    cout << "print me";
}

int main() {
    cout << "Hello, World!" << endl;
    thread myjob(myprint);
    myjob.join();
    return 0;
}

