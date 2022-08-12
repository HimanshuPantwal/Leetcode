class Solution {
public:
    int percentageLetter(string s, char letter) {
             int count=0;
    for(int i=0;i<s.size();i++)
        {
            if(letter==s[i])
                {
                    count++;
                }
        }
        double p=count*100;
     return floor(p/s.size());
    }
};