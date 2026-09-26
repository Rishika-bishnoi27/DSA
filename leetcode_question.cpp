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
// Example 1:

// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.
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



//415. Add Strings
// Example 1:

// Input: num1 = "11", num2 = "123"
// Output: "134"
class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;

        string ans = "";

        while(i >= 0 || j >= 0 || carry) {

            int a = 0;
            int b = 0;

            if(i >= 0)
                a = num1[i] - '0';

            if(j >= 0)
                b = num2[j] - '0';

            int sum = a + b + carry;

            ans += (sum % 10) + '0';

            carry = sum / 10;

            i--;
            j--;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};


//836. Rectangle Overlap
//Example 1:

// Input: rec1 = [0,0,2,2], rec2 = [1,1,3,3]
// Output: true
class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if(rec1[0]< rec2[2] && rec2[0]< rec1[2] &&
               rec1[1] < rec2[3] && rec2[1] < rec1[3]){
                return true;
        }
        return false;
    }
};



//88. Merge Sorted Array
// Example 1:
// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int midx = m - 1;
        int nidx = n - 1;
        int right = m + n - 1;

        while (nidx >= 0) {
            if (midx >= 0 && nums1[midx] > nums2[nidx]) {
                nums1[right] = nums1[midx];
                midx--;
            } else {
                nums1[right] = nums2[nidx];
                nidx--;
            }
            right--;
        }        
    }
};



//747. Largest Number At Least Twice of Others
// Example 1:
// Input: nums = [3,6,1,0]
// Output: 1
// Explanation: 6 is the largest integer.
// For every other number in the array x, 6 is at least twice as big as x.
// The index of value 6 is 1, so we return 1.
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        for (int i=0 ; i<nums.size() ; i++){
            int count=0;
            for (int j=0 ; j<nums.size() ; j++){
                if(nums[i]>=2*nums[j] || i==j){
                    count++;
                    if(count==nums.size()){
                        return i;
                    }
                }
            }
        }
        return -1;
    }
};



//67. Add Binary
// Example 1:

// Input: a = "11", b = "1"
// Output: "100"
class Solution {
 public:
  string addBinary(string a, string b) {
    string ans;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
      if (i >= 0)
        carry += a[i--] - '0';
      if (j >= 0)
        carry += b[j--] - '0';
      ans += carry % 2 + '0';
      carry /= 2;
    }

    reverse(begin(ans), end(ans));
    return ans;
  }
};



//69. 69. Sqrt(x)
// Example 1:

// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        int left=0;
        int right=x;
        int ans=0;

        while(left<=right){
            int mid=left+(right-left)/2;
            if(mid<=x/mid){
                ans=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return ans;
    }
};



//367. Valid Perfect Square
// Example 1:
// Input: num = 16
// Output: true
// Explanation: We return true because 4 * 4 = 16 and 4 is an integer.
class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 0) return false;
        int left = 1, right = num;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (mid == num / mid && num % mid == 0) {
                return true;
            } else if (mid < num / mid) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return false;
    }
};



//51. N-Queens
// Example 1:
// Input: n = 4
// Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
// Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above
class Solution {
public:

    bool isSafe(vector<string>& board, int row, int col, int n) {

        // Check column
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }

        // Check left diagonal
        for (int i = row - 1, j = col - 1;
             i >= 0 && j >= 0;
             i--, j--) {

            if (board[i][j] == 'Q') {
                return false;
            }
        }

        // Check right diagonal
        for (int i = row - 1, j = col + 1;
             i >= 0 && j < n;
             i--, j++) {

            if (board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void solveNQueen(vector<string>& board, int row,
                     int n, vector<vector<string>>& ans) {

        // If all rows are completed
        if (row == n) {
            ans.push_back(board);
            return;
        }

        // Try every column
        for (int col = 0; col < n; col++) {

            if (isSafe(board, row, col, n)) {

                // Place queen
                board[row][col] = 'Q';

                // Move to next row
                solveNQueen(board, row + 1, n, ans);

                // Backtracking
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<vector<string>> ans;

        vector<string> board(n, string(n, '.'));

        solveNQueen(board, 0, n, ans);

        return ans;
    }
};




//83. Remove Duplicates from Sorted List
//Example 1:
// Input: head = [1,1,2]
// Output: [1,2]
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        vector<int> ans;
        ListNode *temp=head;
        while(temp){
            if(ans.empty() ||ans.back()!=temp->val) ans.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
        temp=head;
        ListNode *p=NULL;
        while(i<ans.size()){
            temp->val=ans[i];
            i++;
            p=temp;
            temp=temp->next;
        }
        p->next=NULL;
        return head;
    }
};






// 20. Valid Parentheses
// Example 1:
// Input: s = "([])"
// Output: true

// Example 2:
// Input: s = "([)]"
// Output: false
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char ch:s){
            if(ch=='(' || ch=='[' || ch=='{' ){
                st.push(ch);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else{
                char top=st.top();
                st.pop();
                if(ch==')' && top!='('){
                    return false;
                }
                if(ch==']' && top!='['){
                    return false;
                }
                if(ch=='}' && top!='{'){
                    return false;
                }
                }
            }
        }
        return st.empty();
    }
};



//832. Flipping an Image
// Example 1:
// Input: image = [[1,1,0],[1,0,1],[0,0,0]]
// Output: [[1,0,0],[0,1,0],[1,1,1]]
// Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
// Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    for(auto &row:image){
        reverse(row.begin(),row.end());
        for(auto &x:row){
            x=1-x;
        }
    }
    return image;
    }
};



//1572. Matrix Diagonal Sum
// Example 1:
// Input: mat = [[1,2,3],[4,5,6],[7,8,9]]
// Output: 25
// Explanation: Diagonals sum: 1 + 5 + 9 + 3
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=mat[i][i];
            sum+=mat[i][n-1-i];
        }
        if(n%2==1){
            sum-=mat[n/2][n/2];
        }
        return sum;
    }
};




//1672. Richest Customer Wealth
// Example 1:
// Input: accounts = [[1,2,3],[3,2,1]]
// Output: 6
// Explanation:
// 1st customer has wealth = 1 + 2 + 3 = 6
// 2nd customer has wealth = 3 + 2 + 1 = 6
// Both customers are considered to have the richest wealth, which is 6.
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=0;
        for(auto &row:accounts){
            int sum=0;
            for(auto &x:row){
                sum+=x;
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};



//54. Spiral Matrix
// Example 1:
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int left=0;
        int right=n-1;
        int bottom=m-1;
        int top=0;
        vector<int>spiral;
        while(left<=right && top<=bottom){
            for(int i=left ; i<=right ; i++){
                spiral.push_back(matrix[top][i]);
            }
            top=top+1;

            for(int i=top ; i<=bottom ; i++){
                spiral.push_back(matrix[i][right]);
            }
            right=right-1;

            if(top<=bottom){
                for(int i=right ; i>=left ; i--){
                spiral.push_back(matrix[bottom][i]);
                }
                bottom=bottom-1;
            }

            if(left<=right){
                for(int i=bottom ; i>=top ; i--){
                spiral.push_back(matrix[i][left]);
                }
                left=left+1;
            }
        }
        return spiral;
    }
};



//724. Find Pivot Index
// Example 1:
// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation: The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int low=0;
            int high=0;
            for(int j=i-1; j>=0; j--){
                low += nums[j];
            }
            for(int k=i+1; k<nums.size(); k++){
                high += nums[k];
            }
            if(low==high){
                return i;
            }
        }
        return -1;
    }
};




//941. Valid Mountain Array
// Example 1:
// Input: arr = [2,1]
// Output: false
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int length=arr.size();
        int i=0;
        // strictly increasing
        while(i<length-1 && arr[i]<arr[i+1]){
            i++;
        }
        // peak sholud not be at first or last
        if(i==0 || i==length-1){
            return false;
        }
        // strictly decreasing
        while(i<length-1 && arr[i]>arr[i+1]){
            i++;
        }
        if(i==length-1){
            return true;
        }
        return false;
    }
};




//566. Reshape the Matrix
// Example 1:
// Input: mat = [[1,2],[3,4]], r = 1, c = 4
// Output: [[1,2,3,4]]
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c){
            return mat;
        }
        int row=0,col=0;
        vector<vector<int>> ans(r,vector<int>(c));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[row][col]=mat[i][j];
                col++;
                if(col==c){
                col=0;
                row++;
            }

            }
        }
        return ans;
    }
};




//1299. Replace Elements with Greatest Element on Right Side
// Example 1:
// Input: arr = [17,18,5,4,6,1]
// Output: [18,6,6,6,1,-1]
// Explanation: 
// - index 0 --> the greatest element to the right of index 0 is index 1 (18).
// - index 1 --> the greatest element to the right of index 1 is index 4 (6).
// - index 2 --> the greatest element to the right of index 2 is index 4 (6).
// - index 3 --> the greatest element to the right of index 3 is index 4 (6).
// - index 4 --> the greatest element to the right of index 4 is index 5 (1).
// - index 5 --> there are no elements to the right of index 5, so we put -1.
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>vec;
        for(int i=0;i<arr.size()-1;i++){
            int maxi=0;
            for(int j=i+1;j<arr.size();j++){
                maxi=max(maxi,arr[j]);
                
            }
            vec.push_back(maxi);
        }
        vec.push_back(-1);
        return vec;
    }
};




//122. Best Time to Buy and Sell Stock II
// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 7
// Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
// Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
// Total profit is 4 + 3 = 7.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        // Capture every increasing segment as profit.
        for (int i = 1; i < static_cast<int>(prices.size()); ++i) {
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }

        return profit;
    }
};





//844. Backspace String Compare
// Example 1:
// Input: s = "ab#c", t = "ad#c"
// Output: true
// Explanation: Both s and t become "ac".
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1,s2;
        for (char c : s){
            if(c!='#'){
                s1.push(c);
            }else if(!s1.empty()) {
                s1.pop();
            }
        }
        for (char c : t){
            if(c!='#'){
                s2.push(c);
            }else if(!s2.empty()) {
                s2.pop();
            }
        } 
        return s1==s2;
    }
};





//1832. Check if the Sentence Is Pangram
// Example 1:
// Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
// Output: true
// Explanation: sentence contains at least one of every letter of the English alphabet.
class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool seen[26] = {false};
        for(char ch : sentence){
            seen[ch - 'a'] = true;
        }
        for(int i=0 ; i<26; i++){
            if(!seen[i]){
                return false;
            }
        }
        return true;
    }
};