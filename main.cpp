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
    for (auto &i : a) {
        cout<< i <<endl;
    }
    cout << a<<endl;
    int * p = new int[1];
    if (p != NULL) {
       *p = 8;
       cout<< *p<<endl;
       delete p;
    }
    return 0;
}

