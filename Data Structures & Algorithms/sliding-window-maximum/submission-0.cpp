class Solution {
public:
    int maxOfArr(vector<int>& arr,int l,int h){
        int max = INT_MIN;
        for(int i=l; i<=h; i++){
            if(arr[i] > max)
                max = arr[i];
        }
        return max;
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size()-1;
        int low = 0;
        int high = k-1;
        while(high<=n){
            ans.push_back(maxOfArr(nums,low,high));
            low++;high++;
            if(high > n){
                break;
            }
        }
        return ans;
    }
};
