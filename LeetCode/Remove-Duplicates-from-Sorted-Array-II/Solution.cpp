1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if(nums.size() == 0)
5           return 0;
6        int k = 1,c=1;
7        for(int i =1;i<nums.size();i++){
8            if(nums[i] != nums[i-1] ){
9                c=1;
10                nums[k]=nums[i];
11                k++;
12            }else if (nums[i] == nums[i-1] && c < 2){
13                c++;
14                nums[k]=nums[i];
15                k++;
16            }
17        }
18        return k;
19    }
20};