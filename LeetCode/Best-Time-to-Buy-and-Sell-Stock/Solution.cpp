1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int miniprice=INT_MAX;
5        int maxpofit=0;
6        for(int price:prices){
7            miniprice=min(miniprice,price);
8            maxpofit=max(maxpofit,price-miniprice);
9        }
10        return maxpofit;
11    }
12
13};