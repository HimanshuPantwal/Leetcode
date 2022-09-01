class Solution {
    // void merge(vector<int> v,int left,int mid,int right){
    //     int n1= mid-left+1;
    //     int n2=right-mid;
    //     int L[n1],R[n2];
    //     for(int i=0;i<n1;i++)
    //     {
    //         L[i]=v[left+i];
    //     }
    //     for(int j=0;j<n2;j++)
    //     {
    //         R[j]=v[mid+left+j];
    //     }
    //     int i=0,j=0,k=left;
    //     while(i<n1 && j<n2){
    //         if(L[i]<R[j])
    //         {
    //             v[k]=L[i];
    //             k++;
    //             i++;
    //         }
    //         else
    //             v[k]=R[j];
    //             k++;
    //             j++;   
    //     }
    //     while(i<n1){
    //         v[k]=L[i];
    //         k++;
    //         i++;
    //     }
    //     while(j<n2){
    //         v[k]=L[i];
    //         k++;
    //         j++;
    //     }
    // }
    // void mergesort(vector<int> v,int left,int right)
    // {
    //     if(left<right)
    //     {
    //         int mid=left-(right-left)/2;
    //         mergesort(v,left,mid);
    //         mergesort(v,mid+1,right);
    //         merge(v,left,mid,right);
    //     }
    // }
    int foccurance(vector<int> arr, int low, int high, int x)
     {
       if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return foccurance(arr, (mid + 1), high, x);
        else
            return foccurance(arr, low, (mid - 1), x);
    }
    return -1;
   }
    int loccurance(vector<int> v,int low,int high,int target,int n)
    {
        int mid=low+(high-low)/2;
        if(low>high)
        {
            return -1;
        }
        else
        if((mid==n-1||v[mid+1]>target)&&v[mid]==target)
        {
            return mid;
        }
        else
        if(v[mid]>target)
        {
            return loccurance(v,low,mid-1,target,n);
        }
        else
            return loccurance(v,mid+1,high,target,n);
    }
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        // mergesort(nums,0,nums.size()-1);
        sort(nums.begin(),nums.end());
        
        int first=foccurance(nums,0,nums.size()-1,target);
        int last=loccurance(nums,0,nums.size()-1,target,nums.size());
        if(first!=-1 && last!=-1)
        {
         for(int i=first;i<=last;i++)
         {
            ans.push_back(i);
         }
        }
        return ans;
    }
};