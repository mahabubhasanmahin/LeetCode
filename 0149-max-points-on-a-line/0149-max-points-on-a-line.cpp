class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        int ans= min(n,2);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int count = 2;
                for(int k=j+1;k<n;k++){
                    long long x1=points[j][0] - points[i][0];
                    long long y1=points[j][1] - points[i][1];
                    long long x2=points[k][0] - points[i][0];
                    long long y2=points[k][1] - points[i][1];

                    if( x1 * y2 == y1 * x2){
                        count++;
                    } 
                }
                ans = max(ans,count);
            }
        }
        return ans;
    }
};