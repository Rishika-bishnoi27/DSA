// Alphabet Patterns

// Alphabet Right-Angled Triangle Pattern :

// A
// A B
// A B C
// A B C D
// A B C D E
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        char value=65;
        for(int j=1; j<=i; j++){
            cout<<value;
            value++;
        }
        cout<<endl;
    }

    return 0;
}



// Inverted Alphabet Right-Angled Triangle Pattern :

// A B C D E
// A B C D
// A B C
// A B
// A
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        char value=65;
        for(int j=1; j<=n-i+1; j++){
            cout<<value;
            value++;
        }
        cout<<endl;
    }

    return 0;
}



// Alphabet Pyramid Pattern :

//         A
//       A B A
//     A B C B A
//   A B C D C B A
// A B C D E D C B A
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        char value=65;
        for(int j=n-i; j>=1; j--){
            cout<<"  ";
        }
        for(int k=1; k<=i; k++){
            cout<<value<<" ";
            value++;
        }
        value=value-2;
        for(int k=1; k<i; k++){
            cout<<value<<" ";
            value--;
        }
        cout<<endl;
    }
    return 0;
}



// Alphabet Diamond Pattern :

//         A
//       A B A
//     A B C B A
//   A B C D C B A
// A B C D E D C B A
//   A B C D C B A
//     A B C B A
//       A B A
//         A
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        char value=65;
        for(int j=n-i; j>=1; j--){
            cout<<"  ";
        }
        for(int k=1; k<=i; k++){
            cout<<value<<" ";
            value++;
        }
        value=value-2;
        for(int k=1; k<i; k++){
            cout<<value<<" ";
            value--;
        }
        cout<<endl;
    }
    for(int i=n-1; i>=1; i--){
        char value=65;
        for(int j=n-i; j>=1; j--){
            cout<<"  ";
        }
        for(int k=1; k<=i; k++){
            cout<<value<<" ";
            value++;
        }
        value=value-2;
        for(int k=1; k<i; k++){
            cout<<value<<" ";
            value--;
        }
        cout<<endl;
    }
    return 0;
}



// Hollow Alphabet Right-Angled Triangle Pattern :

// A
// A B
// A   C
// A     D
// A B C D E
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        char value=65;

        for(int j=1; j<=i; j++){
            if(j==1 || j==i || i==n){
                cout<<value<<" ";
                value++;
            }else{
                cout<<"  ";
                value++;
            }
        }
        cout<<endl;
    }
    return 0;
}




// Alphabet Pyramid with Spaces : 

//     A
//    A B
//   A   C
//  A     D
// A B C D E
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        char value=65;
        for(int j=n-i; j>=1; j--){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            if(j==1 || j==i || i==n){
                cout<<value<<" ";
                value++;
            }else{
                cout<<"  ";
                value++;
            }
        }
        cout<<endl;
    }
    return 0;
}




// Alphabet Diamond with Middle Spaces :

//     A
//    A B
//   A   C
//  A     D
// A B C D E
//  A     D
//   A   C
//    A B
//     A
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        char value=65;
        for(int j=n-i; j>=1; j--){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            if(j==1 || j==i || i==n){
                cout<<value<<" ";
                value++;
            }else{
                cout<<"  ";
                value++;
            }
        }
        cout<<endl;
    }
    for(int i=n-1; i>=1; i--){
        char value=65;
        for(int j=n-i; j>=1; j--){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            if(j==1 || j==i || i==n){
                cout<<value<<" ";
                value++;
            }else{
                cout<<"  ";
                value++;
            }
        }
        cout<<endl;
    }
    return 0;
}




// Hollow Alphabet Square Pattern : 

// A A A A A
// A       A
// A       A
// A       A
// A A A A A
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        char value=65;
        for(int j=1; j<=n; j++){
            if(j==1 || j==n || i==n || i==1){
                cout<<value<<" ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}




// Alphabet Square Pattern : 

// A A A A A
// B B B B B
// C C C C C
// D D D D D
// E E E E E
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        char value=65+i;
        for(int j=0; j<n; j++){
            cout<<value<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}




// Alphabet Half Diamond :

// A
// A B
// A B C
// A B C D
// A B C D E
// A B C D
// A B C
// A B
// A
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        char value=65;
        for(int k=1; k<=i; k++){
            cout<<value<<" ";
            value++;
        }cout<<endl;
    }
    for(int i=n-1; i>=1; i--){
        char value=65;
        for(int k=1; k<=i; k++){
            cout<<value<<" ";
            value++;
        }
        cout<<endl;
    }
    return 0;
}