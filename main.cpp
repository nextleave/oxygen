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
    for (int i{0}; i < 5; i++) {
        cout << i<<endl;
    }
    int a[]{3, 5, 8};
    cout << a;
    return 0;
}

