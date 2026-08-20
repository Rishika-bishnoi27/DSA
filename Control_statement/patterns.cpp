//inverted triangle pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}



//inverted left triangle pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i-1;j>0;j--){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}



//pyramid pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}



//inverted pyramid pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int j=2*n-1;j>=2*i-1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


//or


#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*n-1)-(2*i-2);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}



//diamond pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}




//hollow pyramid pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            if(j==1 || j==(2*i-1) || i==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}



//hollow triangle pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1 || j==i || i==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}



//hollow square pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}




//butterfly pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){ 
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){   
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}





//simple number pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){ 
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}




//reversed number pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=i;
        for(int j=1;j<=i;j++){ 
            cout<<a;
            a--;
        }
        cout<<endl;
    }
    
    return 0;
}




//inverted number triangle pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){ 
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}   



//floyd's triangle pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){ 
            cout<<a;
            a++;
        }
        cout<<endl;
    }
    
    return 0;
}




//pascal's triangle pattern
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int value=1;
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int k=0; k<=i; k++){
            cout<<value<<" ";
            value=value*(i-k)/(k+1);
            
        }
        cout<<endl;
    }

    return 0;
}



//        1 
//       1 1 
//      1 2 1 
//     1 2 2 1 
//    1 2 3 2 1 
//   1 2 3 3 2 1 
//  1 2 3 4 3 2 1 
// 1 2 3 4 4 3 2 1 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int mid=(i+1)/2;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=mid;k++){
            cout<<k<<" ";
        }
        if(i%2==0){
            for(int k=mid;k>=1;k--){
                cout<<k<<" ";
            }
        }
        else{
            for(int k=mid-1;k>=1;k--){
                cout<<k<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}



//        1
//      1 2 1
//    1 2 3 2 1
//  1 2 3 4 3 2 1
//    1 2 3 2 1
//      1 2 1
//        1
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int mid=i;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int k=mid-1;k>=1;k--){
            cout<<k;
        }
    
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        int mid=i;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int k=mid-1;k>=1;k--){
            cout<<k;
        }
    
        cout<<endl;
    }

    return 0;
}



//     1
//    1 2  
//   1 2 3
//  1 2 3 4
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
    
        cout<<endl;
    }
 

    return 0;
}




//  Hollow number pyramid:

//     1
//    1 2
//   1   3
//  1 2 3 4
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            if(k==1||k==i||i==n)
            cout<<k<<" ";
            else
            cout<<"  ";
        }
    
        cout<<endl;
    }
 

    return 0;
}




// Zigzag pattern:

//  1
//  1 2
//  1 2 3
//  1 2
//  1
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
    
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
    
        cout<<endl;
    }

    return 0;
}




// Hourglass number pattern:


//  1 2 3 4 5
//   1 2 3 4
//    1 2 3
//     1 2
//      1
//     1 2
//    1 2 3
//   1 2 3 4
//  1 2 3 4 5
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
    
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
    
        cout<<endl;
    }

    return 0;
}


// Sequence pattern:

//  1
//  2 3
//  3 4 5
//  4 5 6 7 
//  5 6 7 8 9
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
        }
    
        cout<<endl;
    }

    return 0;
}




// Checkerboard numbers:

//  1 0 1 0 1
//  0 1 0 1 0
//  1 0 1 0 1
//  0 1 0 1 0
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1;j++){
            if(j%2!=0){
                if(i%2!=0){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
            else{
                if(i%2!=0){
                    cout<<0;
                }
                else{
                    cout<<1;
                }
            }
        }
    
        cout<<endl;
    }

    return 0;
}