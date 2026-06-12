1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int maxjump=0;
5        for(int i=0;i<nums.size();i++){
6            if(i > maxjump){
7                return false;
8            }
9            maxjump = max(maxjump,i+nums[i]);
10        }
11        return true;
12    }
13};