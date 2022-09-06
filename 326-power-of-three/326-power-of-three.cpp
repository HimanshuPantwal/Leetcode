class Solution {
public:
    bool POT(int n)
    {
        if(n==1)
        {
            return true;
        }
        
        if(n%3!=0||n==0)
        {
            return false;
        }
        return POT(n/3);
    }
    bool isPowerOfThree(int n) {

         return POT(n);
    }
};