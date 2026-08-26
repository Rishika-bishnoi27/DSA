// 1. Print the elements of an array :

// Explanation: Simply traverse the array and print each element. This teaches students how to iterate through an array using loops.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter length of array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements in array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}





// 2. Find the sum of all elements in an array :

// Explanation: Add all the elements of the array and return the total. Helps students understand loop traversal and addition.
#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum=0;
    cout<<"Enter length of array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sum of array:";
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}





// 3. Find the largest element in an array :

// Explanation: Compare each element of the array to track the maximum value. Teaches comparison logic.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter length of array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Largest element in array:"<<max;
    return 0;
}