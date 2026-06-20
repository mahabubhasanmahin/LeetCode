1class Solution {
2public:
3    string intToRoman(int num) {
4        vector<int>value={1000,900,500,400,100,90,50,40,10,9,5,4,1};
5        vector<string>symbol={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
6        string ans="";
7        for(int i=0;i<value.size();i++){
8            while(num >= value[i]){
9                ans += symbol[i];
10                num -= value[i];
11            }
12        }
13        return ans;
14    }
15};