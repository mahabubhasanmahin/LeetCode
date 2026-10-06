class Solution {
public:
    double myPow(double x, int n) {
        long double a = x;
        long long p = n;
        long double result =1;
       
        if(p<0){
            a = 1 / a;
            p = -p;
        }
        while(p > 0){
            if(p % 2 == 1){
                result *= a;
            }
            a *= a;
            p /= 2;
        }
        return result;
    }
};