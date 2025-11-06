class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int k=-1;
        int m=0;
        map<int,int>frequency;
        for(auto it:nums){
            frequency[it]++;
        }
          for(auto it:frequency){
            if(it.second>k){
                k=it.second;
                m=it.first;
            }
          }
          return m;
        }
};