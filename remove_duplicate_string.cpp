//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    unordered_map<char,bool>mp;
	    string st;
	    for(int i=0;str[i]!='\0';i++)
	    {
	        if(mp[str[i]]==true)
	        {
	            continue;
	        }
	        else
	        {
	            mp[str[i]]=1;
	            st +=str[i];
	        }
	    }
	    return st;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
