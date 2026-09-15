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

int sumofdigits(int n){
    if(n==0){
        return 0;
    }
    return n%10 + sumofdigits(n/10);
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
    cout<<endl;
    cout<<sumofdigits(n);
    return 0;
}



//bubble sort using recursion
#include <iostream>
using namespace std;
int bubblesort(int *arr , int n){
    if(n==1){
        return arr[n];
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    return bubblesort(arr,n-1);
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"After bubble sort: ";
    bubblesort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

