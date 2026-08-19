class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int last[256];
        for(int i=0;i<256;i++){
            last[i]=-1;
        }
        int maxlen = 0 ,start = -1;
        for(int i=0;i<s.length();i++){
            if(last[s[i]] > start){
                start = last[s[i]];
            }
            last[s[i]] = i;
            maxlen = max(maxlen , i - start);
        }
         return maxlen;
    }
   
};