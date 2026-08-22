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



// 7. Swap Two Variables Using Pointers :
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int *ptr1=&a;
    int *ptr2=&b;
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    cout<<a<<" "<<b;
    return 0;
}

//or

#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin>>a>>b;
    int *p1=&a;
    int *p2=&b;
    a=*p1+*p2;
    b=*p1-*p2;
    a=*p1-*p2;
    cout<<a<<" "<<b;
    return 0;
}




// 8. Pointer Arithmetic with Simple Variables :

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



// 9.  Pointer Subtraction :

// Create two integer variables, x and y. Declare two pointers, ptr1 and ptr2, pointing to x and y respectively. Use pointer arithmetic to calculate the difference between the two pointers.
#include<iostream>
using namespace std;
int main(){
    int x=10;
    int y=20;
    int *ptr1=&x;
    int *ptr2=&y;
    cout<<ptr2-ptr1;
    return 0;
}



// 10.  Pointer Decrement :

// Declare an integer variable x and a pointer ptr pointing to it. Perform a decrement on the pointer and then print the pointer's value and the variable's value.
#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr=&x;
    ptr--;
    cout<<ptr<<" "<<x;
    return 0;
}




// 11. Pointer Arithmetic with Multiple Variables :

// Create three integer variables a, b, and c. Declare a pointer ptr and use pointer arithmetic to set it first to point to a, then to b, and finally to c. Print the values pointed to by the pointer. 
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int c=30;
    int *ptr=&a;
    cout<<*ptr<<" ";
    ptr=&b;
    cout<<*ptr<<" ";
    ptr=&c;
    cout<<*ptr;
    return 0;
}




// 12. Pointer Arithmetic with Characters :

// Declare a character variable ch and a pointer ptr pointing to it. Increment the pointer by 1 and print the address and value of ch.
#include<iostream>
using namespace std;
int main(){
    char ch='A';
    char *ptr=&ch;
    ptr++;
    cout<<ptr<<" "<<ch;
    return 0;
}




// 13.  Manipulating Pointer Value : 

// Declare a pointer ptr that points to an integer variable num. Set num to 10, then use pointer arithmetic to change num to 20 by incrementing the pointer and modifying the value it points to.
#include<iostream>
using namespace std;
int main(){
    int num=10;
    int *ptr=&num;
    ptr++;
    *ptr=20;
    cout<<num;
    return 0;
}



// 14.  Pointer Comparison :

// Declare two integer variables a and b. Create pointers ptr1 and ptr2 pointing to these variables. Compare the two pointers and print whether they are equal or not.
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int *ptr1=&a;
    int *ptr2=&b;
    if(ptr1==ptr2){
        cout<<"Pointers are equal";
    }
    else{
        cout<<"Pointers are not equal";
    }
    return 0;
}




// 15. Add and subtract using pointer arithmetic : 

// Write a program to demonstrate addition and subtraction on pointers.
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int *ptr1=&a;
    int *ptr2=&b;
    cout<<ptr1+1<<" "<<ptr2-1;
    return 0;
}