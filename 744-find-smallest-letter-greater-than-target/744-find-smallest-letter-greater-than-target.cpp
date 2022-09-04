class Solution {
public:
    char binary(vector<char> letters,int target,int low,int high)
    {
        char ans=' ';
        if(target>=letters[letters.size()-1])
        {
            return letters[0];
        }
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(letters[mid]>target)
            {
                ans=letters[mid];
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return ans;
    }
    char nextGreatestLetter(vector<char>& letters, char target) {
        return binary(letters,target,0,letters.size());
    }
};