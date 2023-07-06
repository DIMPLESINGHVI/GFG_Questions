//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

//approach - 1. counting method 2.pointer method
// couting -- simply count the occurances of 0,1,2 using switch case and print the count in the array in ascending order
// pointer -- use 3 pointers: low,mid,high.
//            assume mid, low to be 0 and high to be n-1
//            check for base condition : mid<=high
//            check if arr[mid]==0 -->yes-->swap(arr[low],arr[mid]) and low++, mid++
//            check if arr[mid]==1 --> yes--> mid++
//            check if arr[mid]==2 or else condition --> yes--> swap(arr[mid],arr[hi]) and hi--

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // code here 
        // int start=0,end=n-1;
        // while(start<end)
        // {
        //     if(arr[start]==arr[end])
        //     {
        //         start++;
        //     }
        //     if(arr[start]>arr[end])
        //     {
        //         swap(arr[start],arr[end]);
        //     }
        //     end--;
        // }
        
        int cnt0=0,cnt1=0,cnt2=0,i=0;
        for(i=0;i<n;i++)
        {
            switch(arr[i])
            {
                case 0:
                    cnt0++;
                    break;
                case 1:
                    cnt1++;
                    break;
                case 2:
                    cnt2++;
            }
        }
        i=0;
        for(i=0;i<n;i++)
        {
            while(cnt0>0)
            {
                arr[i++]=0;
                cnt0--;
            }
            while(cnt1>0)
            {
                arr[i++]=1;
                cnt1--;
            }
            while(cnt2>0)
            {
                arr[i++]=2;
                cnt2--;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends
