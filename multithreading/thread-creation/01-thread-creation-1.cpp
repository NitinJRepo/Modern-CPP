// thread creation using Function Pointer

#include <iostream>
#include <thread>
using namespace std;
 
void thread_function()
{
    for(int i = 0; i < 10; i++)
        cout<<"Display From thread function"<<endl;
}
 
int main()  
{
    
    thread threadObj(thread_function);
    
    for(int i = 0; i < 10; i++)
        cout<<"Display From MainThread"<<endl;
    
    threadObj.join();    
    cout<<"Exit of Main function"<<endl;
    return 0;
}