1class Solution {
2public:
3    int jump(vector<int>& nums) {
4        int j=0;
5        int c=0;
6        int f=0;
7        for(int i=0;i<nums.size()-1;i++){
8            f=max(f,i+nums[i]);
9            if(i==c){
10                j++;
11                c=f;
12            }
13        }
14        return j;
15    }
16};