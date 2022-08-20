class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> result;
        int c=-1;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="+")
            {
                result.push_back(result[c]+result[c-1]);
                c++;
            }
            else
            if(ops[i]=="D")
            {
                result.push_back(2*result[c]);
                c++;
            }
            else
            if(ops[i]=="C")
            {
                result.pop_back();
                c--;
            }
            else
            {
                result.push_back(stoi(ops[i]));
                c++;
            }
        }
        
        int sum=0;
        for(int i=0;i<result.size();i++)
        {
            sum+=result[i];
        }
        return sum;
    }
};