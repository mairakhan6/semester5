#include <iostream>
using namespace std;

void swap(int* a , int* b);

int main(){
    int n1 = 2; int n2 =5;
    cout <<n1<<" "<<n2<<endl;

    swap(&n1,&n2);
    cout <<n1<<" "<<n2<<endl;
    return 0;
}


void swap (int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp; 
}
