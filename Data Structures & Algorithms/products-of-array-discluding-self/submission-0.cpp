class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        int product = 1;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if(i == j){
                    continue;
                }
                product *=nums[j];
            }
            ans[i] = product;
            product = 1;
        }
        return ans;
    }
};
