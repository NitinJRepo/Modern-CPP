//How to pass outer scope elements inside lambda functions

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int mul = 5;

    //passing outer scope element: pass by reference
    for_each(arr, arr + sizeof(arr) / sizeof(int), [&](int x) {
        cout<< x <<" ";
        // Can modify the mul inside this lambda function because
        // all outer scope elements has write access here.
        mul = 3;
        });

    cout <<"mul = " << mul << endl;

    //passing outer scope element: pass by value
    for_each(arr, arr + sizeof(arr) / sizeof(int), [=](int x) {
        x = x * mul;
        cout<< x <<" ";
        // Can not modify the mul inside this lambda function because
        // all outer scope elements has read only access here.
        //mul = 9;
        });

    cout << endl;

    for_each(arr, arr + sizeof(arr) / sizeof(int), [](int x) {
        // No access to mul inside this lambda function because
        // all outer scope elements are not visible here.
        //std::cout<<mul<<" ";
        });

    cout << endl;
}