class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        map< int,int > mpp1,mpp2,mpp3;
        set< int > st;
        for(auto n:nums1)mpp1[n]+=1;
        for(auto n:nums2)mpp2[n]+=1;
        for(auto n:nums3)mpp3[n]+=1;
        for(auto m:mpp1){
            if(mpp2.find(m.first)!=mpp2.end()) st.emplace(m.first);
            if(mpp3.find(m.first)!=mpp3.end()) st.emplace(m.first);
        }
        for(auto m:mpp2){
            if(mpp3.find(m.first)!=mpp3.end()) st.emplace(m.first);
        }
        vector< int > res;
        for(auto s:st)res.push_back(s);
        return res;
    }
};