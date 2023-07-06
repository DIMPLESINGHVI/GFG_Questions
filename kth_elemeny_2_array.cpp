//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int f)
    {
        int k=0; int temp[1000000];
        
        for(int i=0;i<n;i++)
        {
            temp[i]=arr1[i];
        }
        
        for(int j=n;j<m+n;j++)
        {
            temp[j]=arr2[k];
            k++;
        }
        
        //for(int l=0;l<n+m;l++)
        //cout<<temp[l]<<" ";
        //cout<<"\n";
        sort(temp,temp+n+m);
        return temp[f-1];
    }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends


// using while loop

class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
       
         int temp[1000000];
    //      for(int i=0;i<n;i++)
    //      {
    //          temp[i]=arr1[i];
    //         //  temp[i+n]=arr2[i];
    //      }
    //      int s=0;
    //      for(int j=n;j<n+m;j++)
    //      {
    //         temp[j]=arr2[s];
    //         s++;
    //      }
    //     sort(temp,temp+n+m);
    //     return temp[k-1];  
    // }
   
    int i=0,j=0,d=0;
    while(i<n)
    {
        temp[d]=arr1[i];
        i++;
        d++;
    }
    while(j<m && d<m+n)
    {
        temp[d]=arr2[j];
        j++;
        d++;
    }
    sort(temp,temp+n+m);
    return temp[k-1];
    }
};
