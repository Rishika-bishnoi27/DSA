//Q14 longest common prefix
// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string first = strs[0] , last = strs[n-1];
        for(int i=0 ; i< min(first.size(),last.size()) ; i++){
            if(first[i]==last[i]){
                ans += first[i];
            }else{
                return ans;
            }
        }
        return ans;
    }
};



//1480. Running Sum of 1d Array
// Example 1:

// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1 ; i<nums.size() ; i++){
            nums[i]+=nums[i-1];
        }
        return nums;
    }
};


//26. Remove Duplicates from Sorted Array
// Example 1:

// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        if (nums.empty()){
            return 0;
        }

        for(int i=0 ; i<nums.size() ; i++){
            if (nums[i] != nums[k-1]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};



//344. Reverse String
// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size()-1;

        while(left<=right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
        
    }
};


//709. To Lower Case
// Example 1:

// Input: s = "Hello"
// Output: "hello"
class Solution {
public:
    string toLowerCase(string s) {
        string result = "";
        for(char ch : s){
            if(ch>=65 && ch<=90){
                result += char(ch+32);
            }else{
                result += ch;
            }
        }
        return result;
    }
};



//1108. Defanging an IP Address
// Example 1:

// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"
class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for(char c : address){
            if (c== '.'){
                result += "[.]";
            }else{
                result += c;
            }
        }
        return result;
    }
};




//58. Length of last word
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int len = 0;

        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        while (i >= 0 && s[i] != ' ') {
            len++;
            i--;
        }

        return len;
    }
};
