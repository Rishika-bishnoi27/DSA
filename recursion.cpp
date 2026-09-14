#include<iostream>
using namespace std;

void printNumber1(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printNumber1(n-1);
}

void printNumber2(int n){
    if(n==0){
        return;
    }
    printNumber2(n-1);
    cout<<n<<" ";
}

int recurionAdd(int n){
    if(n == 0){
        return 0;
    }
    return n + recurionAdd(n-1);
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    
    return n*factorial(n-1);
}


int fibo(int n){
    if(n<=1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}



int main(){
    int n;
    cin>>n;
    printNumber1(n);
    cout<<endl;
    printNumber2(n);
    cout<<endl;
    cout<<recurionAdd(n);
    cout<<endl;
    cout<<factorial(n);
    cout<<endl;
    for(int i=0;i<n ; i++){
        cout<<fibo(i)<<" ";
    }
    return 0;
}

