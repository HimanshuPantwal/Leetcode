class Solution {
public:
    int xorOperation(int n, int start) {
       vector<int> nums(n);
        nums[0]=start;
        int xr=start;
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=start+2*i;
            xr=(xr^nums[i]);
        }
        return xr;
    }
};