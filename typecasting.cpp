#include<iostream>
using namespace std;
int main(){
    signed char a = 5;
    unsigned char b = a;

    cout<<(int)b<<endl;
    return 0;
}

// range of n bits - 2^n-1 to (2^n-1)-1