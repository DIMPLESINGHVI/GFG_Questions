// ques: Given a string S consisting of lowercase Latin Letters. 
// Return the first non-repeating character in S. If there is no non-repeating character, return '$'.


// approach : make 2 arrays of int type to store the ascii value of the characters of the string.
// one arr will be of length 123 to cover all char and one arr of the size of the string.
// we use the array with length 123 to track the frequency and another array to keep track of the order of occurance of char
// finally we checkk if the count is one for a particular char and then print it.

// T.C: O(N)


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
        int i=0;
        int ar[S.size()]={0};
        int arr[123]={0};
        
        while(S[i]!='\0')
        {
            int a = S[i];
            arr[a]++;
            ar[i] = a;
            i++;
        }
        
        for(int i=0;i<S.size();i++)
        {
            if(arr[ar[i]]==1)
            {
                char ch = ar[i];
                return ch;
            }
        }
        
       return '$';
       
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends
