class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n=nums.size();
        int total=accumulate(nums.begin(),nums.end(),0);
        int left=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            int right=total-left-nums[i];
            if(nums[i]==0){
                if(left==right){
                    cnt+=2;
                }
                else if(left-1==right || right-1==left){
                    cnt+=1;
                }
            }
            left+=nums[i];
        }
        return cnt;
    }
};