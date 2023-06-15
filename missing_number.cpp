//question : Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.
//approach : sort the array and the check if the number is present

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& arr, int n) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int j=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==j)
            {
                j++;
            }
            else
            return j;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends
