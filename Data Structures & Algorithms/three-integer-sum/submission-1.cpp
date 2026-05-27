class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
    
        for(int i=0; i<n-2; i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            int low = i+1;
            int high = n-1;
            int target = -1*(nums[i]);
            while(low<high){
                int sum = nums[low]+nums[high];
                if(sum == target){
                    ans.push_back({nums[i],nums[low],nums[high]});
                    low++;
                    high--;

                    //skipping duplicate
                    while(low<high && nums[low] == nums[low-1]){
                     low++;
                }
                   
                while(high>low && nums[high] == nums[high+1]){
                     high--;
                }
                }else if(sum > target){
                    high--;
                }else{
                    low++;
                }
                
                   
            }
        }
        return ans;
    }
};
