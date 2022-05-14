#include <iostream>
#include <thread>
using namespace std;
  

void f1(){
        cout << "Hello World\n"; 
}
int main()
{
    thread daemon(f1);
    daemon.detach();
    
}




