//leap year program

#include <iostream>
using namespace std;
int main() {
    int year;
    cout<<"Enter year: ";
    cin>>year;
    if (year%4==0){
        if (year%100==0){
            if (year%400==0){
                cout<<"Yes, it is a leap year.";
            }else{
                cout<<"No, its not a leap year.";
            }
        }else{
            cout<<"Yes, it is a leap year.";
        }
        
    }else{
        cout<<"No, its not a leap year.";
    }
    return 0;
}




//Checking character is digit/uppercase/lowercase/special character
#include <iostream>
using namespace std;
int main() {
    char a;
    cout<<"Enter any character: ";
    cin>>a;
    if(a>=97 && a<=122){
        cout<<"Lowecase letter";
    }
    else if(a>=65 && a<=90){
        cout<<"Uppercase letter";
    }
    else if(a>=48 && a<=57){
        cout<<"Digit";
    }
    else{
        cout<<"Special Character";
    }
    return 0;
}




// Electriicity bill program
#include <iostream>
using namespace std;
int main() {
    int unit;
    cout<<"Enter units: ";
    cin>>unit;
    if(unit<=100){
        cout<<(unit*5);
    }
    else if(unit>=101 && unit<=200){
        cout<<(unit*6);
    }
    else{
        cout<<(unit*8);
    }
    return 0;
}




// Types of triangle program
#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter sides of triangle: ";
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"Equilateral triangle";
    }
    else if(a==b || a==c || b==c){
        cout<<"Isosceles triangle";
    }
    else if(a!=b && b!=c && a!=c){
        cout<<"Scalene triangle";
    }
    else{
        cout<<"other type of triangle based on angles";
    }
    return 0;
}

