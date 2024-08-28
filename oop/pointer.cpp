#include <iostream>
using namespace std;

// single pointer
int main(){
    int* ptr = NULL; // initialising the pointer
    int num = 10;
    // cout<<ptr;
    // ptr = new int;
    // *ptr = num;
    // the above creates a new memory address 
    
    ptr = &num; // directly points it to the current memory address
    // &num is the memory address of num 
    // num++;
    cout <<num<<" and "<<ptr<<" and "<<&num; // verifies
    // delete ptr;
    return 0;
}

// two pointers
// int main(){
//     int* x = NULL;
//     int* y = NULL;

//     int num = 34;
//     int num2 = 54;

//     x = &num;
//     y = &num2;

//     cout << &num<<" and "<<x<<endl;
//     cout << &num2 << " and "<<y;
//     return 0;
// }

