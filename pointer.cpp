// 1.Task: Use the address-of operator to print the address of a variable.
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    cout<<(&a);
    return 0;
}


// 2.Task: Initialize a pointer with the address of a variable and print the value it points to.
#include<iostream>
using namespace std;
int main(){
    
    int a=10;
    int *ptr=&a;
    cout<<*ptr;
    return 0;
}



// 3. Print the address of a variable and its value
// Task: Print both the address and value of a variable using a pointer.
#include<iostream>
using namespace std;
int main(){
    
    int a=10;
    int *ptr=&a;
    cout<<ptr<<" "<<*ptr;
    return 0;
}

// 4. Change the value of a variable using a pointer

// Task: Modify the value of a variable using a pointer.
#include<iostream>
using namespace std;
int main(){ 
    int a=10;
    int *ptr=&a;
    *ptr=20;
    cout<<a;
    return 0;
}



// 5. Basic Pointer Increment :

// Declare an integer variable x and a pointer ptr pointing to x. Increment the pointer and print the values of ptr and x. What is the result?
#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr=&x;
    ptr++;
    cout<<ptr<<" "<<x;
    return 0;
}

// 6. Pointer Arithmetic with Simple Variables :

// Declare two integer variables a and b. Declare a pointer that points to a. Use pointer arithmetic to set the value of b to be the sum of a and b using ptr.
#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int *ptr=&a;
    cin>>a>>b;
    b=*ptr+b;
    cout<<b;
    return 0;
}