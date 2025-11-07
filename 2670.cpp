class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
       unordered_map<int,int>mp,mp1;
       for(auto it:nums){
        mp1[it]++;
       }
     for(int i=0;i<n;i++){
        mp[nums[i]]++;
        mp1[nums[i]]--;
        if(mp1[nums[i]]<=0){
            mp1.erase(nums[i]);
        }
            ans.push_back(mp.size()-mp1.size());
        
     }
     return ans;
    }
};