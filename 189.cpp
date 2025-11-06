
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>h1;
        vector<int>h2;
        k=k%nums.size();
        if(nums.size()==1){
            return;
        }
        for(int i=0;i<(nums.size()-k);i++){
            h1.push_back(nums[i]);
        }
        for(int i=nums.size()-k;i<nums.size();i++){
            h2.push_back(nums[i]);
        }
        //  sort(h1.rbegin(),h1.rend());
        //  sort(h2.rbegin(),h2.rend());
         nums.clear();
         nums.insert(nums.begin(),h2.begin(),h2.end());
         nums.insert(nums.end(),h1.begin(),h1.end());
    }
};