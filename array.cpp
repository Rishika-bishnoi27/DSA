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





// 4. maximum subarray sum :
#include <iostream>
using namespace std;
 
int maxSumSubarray(vector<int> &arr, int k){
    int windowSum = 0;
 
    for(int i=0; i<k; i++){
        windowSum += arr[i];
    }
 
    int maxSum =  windowSum;
 
    for(int i=k; i<arr.size(); i++){
        windowSum += arr[i];
        windowSum -= arr[i-k];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}
 
int main(){
     vector<int> arr = {2, 1, 5, 1, 3, 2};
 
    cout<<maxSumSubarray(arr, 3);
 
    return 0;
}



// 5. minimum subarray sum :
#include <iostream>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = 0;
        int shortest = INT_MAX;
        int sum = 0;
       
        // variable size sliding window: 2-pointer
        while(right<n){
            sum += nums[right]; //add current element to window
            if(sum >= target){
                // skip all left elements til sum < target (to find the smallest window)
                while(sum >= target){
                    sum -= nums[left];
                    left++;
                }
                shortest = min(shortest, right-left+2); //update the smallest window size
            }
            right++;
        }
        return shortest==INT_MAX?0:shortest;
    }
   
};




// 6. smallest subarray with sum greater than a given value :
#include<iostream>
using namespace std;
 
int smallestSubarray(vector<int> &arr, int target){
    int n = arr.size();
    int i = 0;
    int sum = 0;
    int min_Len = INT_MAX;
   
    //expand the window using right pointer 'j'
 
    for(int j=0; j<n; j++){
        sum += arr[j];
        while(sum >= target){
            min_Len = min(min_Len, j-i+1);
            sum = sum - arr[i];
            i++;
        }
    }
    return min_Len;
}
 
int main(){
 
    vector<int> arr = {1, 2, 3, 4, 5, 5, 7, 8};
    int target = 15;
 
    cout<<smallestSubarray(arr, target);
 
    return 0;
}



//kadane's algorithm(brute force) : maximum subarray sum
#include<iostream>
using namespace std;
 
class Solution{
    public:
        int kadane(vector<int> &arr){
            int n = arr.size();
            int maxv = INT_MIN;
            for(int i=0; i<n; i++){
                int currSum = 0;
                for(int j=i; j<n; j++){
                    currSum += arr[j];
                    maxv = max(currSum, maxv);
                }
            }
            return maxv;
        }
};
 
int main(){
 
    Solution obj;
 
    vector<int> vec = {2, 3, 5, -2, 7, -4};
   
    cout<<obj.kadane(vec);
 
    return 0;
}