//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        int mid=0,low=0,high=n-1;
        while(mid>=low && mid<=high)
        {
            if(arr[mid]==0)
            {
                swap(arr[low],arr[mid]);
                mid=mid+1;
                low=low+1;
            }
            else
            if(arr[mid]==1)
            {
                mid=mid+1;
            }
            else
            if(arr[mid]==2)
            {
                swap(arr[high],arr[mid]);
                high=high-1;
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