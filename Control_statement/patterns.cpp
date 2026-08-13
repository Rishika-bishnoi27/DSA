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


