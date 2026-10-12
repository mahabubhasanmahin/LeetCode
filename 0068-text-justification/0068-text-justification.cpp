class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>ans;
        int n = words.size();
        int i =0;

        while(i < n){
            int j = i,len=0;
            while(j < n && len + words[j].size() + (j - i) <= maxWidth){
                len += words[j].size();
                j++;
            }
            string line="";
            int gaps = j-i -1;
            if(j == n || gaps == 0){
                for(int k=i;k<j;k++){
                    if(k != i){
                        line += " ";
                    }
                    line +=  words[k];
                }
                line += string(maxWidth - line.size(), ' ');
            }else{
                int space = (maxWidth - len) / gaps;
                int extra = (maxWidth - len) % gaps;            

                for(int k = i;k<j-1;k++){
                    line +=  words[k];
                    line += string(space + (extra--> 0), ' ');
                }
                line += words[j - 1];
            }
            ans.push_back(line);
            i = j;
        }
        return ans;
    }
};