1class Solution {
2public:
3    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
4        int total =0;
5        int curr =0;
6        int start =0;
7        for(int i=0;i<gas.size();i++){
8            int diff = gas[i] - cost[i];
9            total += diff;
10            curr += diff;
11            if(curr < 0){
12                start = i + 1;
13                curr = 0;
14            }
15        }
16        return ( total >= 0) ? start : -1;
17    }
18};