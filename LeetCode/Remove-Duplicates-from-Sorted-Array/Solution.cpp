1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if(nums.size() == 0){
5            return 0;
6        }
7        int k = 1;
8        for(int i=1;i<nums.size();i++){
9            if(nums[i] != nums[i-1]){
10                nums[k]=nums[i];
11                k++;
12            }
13        }
14        return k;
15    }
16};