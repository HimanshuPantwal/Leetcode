//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        string temp;
        string ans;
        for(int i=0;i<str.size();i++)
        {
            temp+=str[i];
            if(str[i]==' ')
            {
                reverse(temp.begin(),temp.end());
                ans+=temp;
                temp.clear();
            }
        }
        reverse(temp.begin(),temp.end());
        ans+=temp;
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends