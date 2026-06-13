1class Solution {
2public:
3    int hIndex(vector<int>& citations) {
4        sort(citations.begin(),citations.end(),greater<int>());
5        int i=0;
6        while(i < citations.size() && citations[i] >= i + 1)
7        {
8            i++;
9        }
10        return i;
11    }
12};