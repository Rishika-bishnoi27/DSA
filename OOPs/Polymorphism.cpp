// Compile time polymorphism Definition: Compile-time polymorphism, also known as static polymorphism, is a type of polymorphism that is resolved during the compilation of the program. In C++, compile-time polymorphism is achieved through function overloading and operator overloading.
// Function overloading is a feature in C++ that allows you to have more than one function with the same name but different parameters. The compiler determines which function to call based on the number and types of arguments passed to the function.
// example1:
#include<bits/stdc++.h>
using namespace std;
 
class Add{
    public:
        int add(int a, int b){
            return (a+b);
        }
        int add(int a, int b, int c){
            return (a+b+c);
        }
};
 
int main(){
    Add obj;
    int res1, res2;
    res1 = obj.add(2, 3, 5);
    res2 = obj.add(2, 3, 4);
    cout<<"result of 1st: "<<res1<<endl;
    cout<<"result of 2nd: "<<res2<<endl;
 
    return 0;
}




// Example2:
#include<bits/stdc++.h>
using namespace std;
 
class Printer{
    public:
        void print(int i){
            cout<<"printing i: "<<i<<endl;
        }
 
        void print(double d){
            cout<<"printing double: "<<d<<endl;
        }
 
        void print(string s){
            cout<<"printing string: "<<s<<endl;
        }
};
 
int main(){
 
    Printer p;
    p.print(10);
 
    p.print(3.14);
 
    p.print("hello");
 
    return 0;
}
 




// Runtime polymorphism Definition: Runtime polymorphism, also known as dynamic polymorphism, is a type of polymorphism that is resolved during the execution of the program. In C++, runtime polymorphism is achieved through the use of virtual functions and inheritance. It allows a base class pointer or reference to call derived class methods at runtime, enabling flexibility and extensibility in object-oriented programming.
//Function overriding is a feature in object-oriented programming that allows a derived class to provide a specific implementation of a function that is already defined in its base class. In C++, function overriding is achieved by defining a function in the derived class with the same name, return type, and parameters as the function in the base class.

#include<bits/stdc++.h>
using namespace std;
class Employee{
    public:
        void work(){
            cout<<"Base class called \n";
        }
};
class Developer: public Employee{
    public:
       void work(){
            cout<<"Derived class called \n";
       }
};
int main(){
    Developer dev;
    dev.work();
    return 0;
}




// Virtual function Definition: A virtual function is a member function in a base class that you expect to override in derived classes. When you use a virtual function, you tell the compiler to support late binding on this function. The most common use of virtual functions is to achieve runtime polymorphism.
// With Virtual function: o/p of this code is "Derived class"
#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
        virtual void speak(){
            cout<<"Base class";
        }
};
class Dog: public Animal{
    public:
        void speak(){
            cout<<"Derived class";
        }
};
int main(){
    Animal *a = new Dog();
    a->speak();

    delete a;
    return 0;
}



// without virtual function: o/p of this code is "Base class"
#include<iostream>
using namespace std;
class Animal{
     public:

        void speak(){

            cout<<"Base class";

        }

};
class Dog: public Animal{
    public:
        void speak(){
            cout<<"Derived class";

        }
};
int main(){
    Animal *a = new Dog();
    a->speak();
    delete a;
    return 0;

}


