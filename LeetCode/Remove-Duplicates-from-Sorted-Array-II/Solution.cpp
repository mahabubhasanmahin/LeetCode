1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if(nums.size() <= 2)
5           return nums.size();
6        int k = 2;
7        for(int i =2;i<nums.size();i++){
8            if(nums[i] != nums[k-2] ){
9                nums[k]=nums[i];
10                k++;
11            }
12        }
13        return k;
14    }
15};