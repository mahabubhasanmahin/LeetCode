1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int candidate=0,count=0;
5        for (int num : nums){
6            if(count==0){
7                candidate=num;
8            }
9            if(num == candidate){
10                count++;
11            }else{
12                count--;
13            }
14        }
15        return candidate;
16    }
17};