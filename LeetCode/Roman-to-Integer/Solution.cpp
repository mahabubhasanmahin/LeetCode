1class Solution {
2public:
3    int romanToInt(string s) {
4      unordered_map<char,int>mp={
5        {'I',1},
6        {'V',5},
7        {'X',10},
8        {'L',50},
9        {'C',100},
10        {'D',500},
11        {'M',1000}
12      };
13      int ans=0;
14      for(int i=0;i<s.size();i++){
15        if(i+1 < s.size() && mp[s[i]] < mp[s[i+1]]){
16            ans-=mp[s[i]];
17        }else{
18            ans+=mp[s[i]];
19        }
20      }
21      return ans;
22    }
23};