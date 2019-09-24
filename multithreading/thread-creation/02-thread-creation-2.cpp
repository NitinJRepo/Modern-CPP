// Thread creation using function object

#include <iostream>
#include <thread>
using namespace std;


class DisplayThread
{
public:
    void operator()()     
    {
        for(int i = 0; i < 10; i++)
            cout<<"Display Thread Executing"<<endl;
    }
};
 
int main()  
{
    thread threadObj( (DisplayThread()) );
    
    for(int i = 0; i < 10; i++)
        cout<<"Display From Main Thread "<<endl;
    
    cout<<"Waiting For Thread to complete"<<endl;
    threadObj.join();
    
    cout<<"Exiting from Main Thread"<<endl;
    
    return 0;
}