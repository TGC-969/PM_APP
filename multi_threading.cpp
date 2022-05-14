#include <iostream>
#include <thread>
using namespace std;
  

void f1(){
        cout << "Hello World\n"; 
}
void f2(){
    cout<<"Hello World\n";
} 
int main()
{
    thread th1(f1);
    th1.join();
    thread th2(f2);
    th2.join();
    return 0;
}
