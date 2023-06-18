//approach : use stack to reverse the string word by word. use if condition to check for the "." and save the string before it in a string variable
// push this saved string once you reach a ".", now pop out the elements and store it in another string variable, this reverses the string
// word by word.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#include<stack>
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    {   
        string str="",ans=""; stack<string>st;
        // code here 
        for(int i=0;i<S.length();i++)
        {
            if(S[i]!='.')
            {
                str += S[i];
            }
            else
            {
                st.push(str);
                st.push(".");
                str="";
            }
        }
        st.push(str);
        
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
