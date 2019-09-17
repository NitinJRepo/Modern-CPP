// Thread creation using lambda function

#include <iostream>
#include <thread>
using namespace std;

int main()  
{
    int x = 9;
    
    thread threadObj([]{
            for(int i = 0; i < 10; i++)
                cout<<"Display thread executing -- from lambda function"<<endl;
            });
            
    for(int i = 0; i < 10; i++)
        cout<<"Display From Main Thread"<<endl;
        
    threadObj.join();
    cout<<"Exiting from Main Thread"<<endl;
    
    return 0;
}