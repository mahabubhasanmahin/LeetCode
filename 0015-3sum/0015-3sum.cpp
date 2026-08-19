class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>r;
        int n=nums.size();
        for(int i=0; i < n -2; i++){
            int left=i+1,right=n-1;
            while(left < right){
                int sum = nums[i]+nums[left]+nums[right];
                if(sum == 0){
                    r.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if(sum < 0) left++;
                else  right--;
            }
        }
        return vector<vector<int>>(r.begin(),r.end());
    }
};