//call by value 
//example of call by value
#include <iostream>
using namespace std;

void square(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    
    square(n);

    return 0;
}



//meaning of call by value
//call by value means passing the value of the variable to the function.
#include <iostream>
using namespace std;

void value(int n){
    n=8;
    cout<<n<<endl;
}

int main()
{
    int n;
    cin>>n;
    
    value(n);
    cout<<n<<endl;
    return 0;
}



//call by reference
//example of call by reference
//meaning of call by reference
//call by reference means passing the address of the variable to the function.
#include <iostream>
using namespace std;

void reference(int &n){
    n=8;
    cout<<n<<endl;
}

int main()
{
    int n;
    cin>>n;
    
    reference(n);
    cout<<n<<endl;
    return 0;
}



//call by address
//example of call by address
//meaning of call by address
//call by address means passing the address of the variable to the function.
#include <iostream>
using namespace std;

void address(int *p, int *q){
    *p=8;
    *q=9;
    cout<<*p<<" "<<*q<<endl;
}

int main()
{
    int a=5;
    int b=7;
    
    address(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}



//vowel and consonant
//by call by value
#include <iostream>
using namespace std;

void alpha(char n){
    if (n=='a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' || n=='U'){
        cout<<"Vowel";
    }else{
        cout<<"Consonent";
    }
}

int main()
{
    char n;
    cin>>n;
    
    alpha(n);

    return 0;
}


//by call by reference
#include <iostream>
using namespace std;

void alpha1(char &n){
    if (n=='a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' || n=='U'){
        cout<<"Vowel";
    }else{
        cout<<"Consonent";
    }
}

int main()
{
    char n;
    cin>>n;
    
    alpha1(n);

    return 0;
}


//by call by address
#include <iostream>
using namespace std;

void alpha2(char *n){
    if (*n=='a' || *n=='e' || *n=='i' || *n=='o' || *n=='u' || *n=='A' || *n=='E' || *n=='I' || *n=='O' || *n=='U'){
        cout<<"Vowel";
    }else{
        cout<<"Consonent";
    }
}

int main()
{
    char n;
    cin>>n;
    
    alpha2(&n);

    return 0;
}




//positive,negative and zero
//by call by value
#include <iostream>
using namespace std;
void check(int n){
    if(n>0){
        cout<<"Positive";
    }else if(n<0){
        cout<<"Negative";
    }else{
        cout<<"Zero";
    }
}
int main()
{
    int n;
    cin>>n;
    check(n);
    return 0;
}


//by call by reference
#include <iostream>
using namespace std;
void check1(int &n){
    if(n>0){
        cout<<"Positive";
    }else if(n<0){
        cout<<"Negative";
    }else{  
        cout<<"Zero";
    }
}
int main()
{
    int n;
    cin>>n;
    check1(n);
    return 0;
}




//by call by address
#include <iostream>
using namespace std;
void check2(int *n){
    if(*n>0){
        cout<<"Positive";
    }else if(*n<0){
        cout<<"Negative";
    }else{
        cout<<"Zero";
    }
}
int main()
{
    int n;
    cin>>n;
    check2(&n);
    return 0;
}

