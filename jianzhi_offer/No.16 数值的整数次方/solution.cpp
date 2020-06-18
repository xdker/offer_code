class Solution {
public:
    double myPow(double x, int n) {
        if(n==0||x==1) return 1;
        long num=n;
        double res=1.0;
        if (num<0){
            num=-num;
            x=1/x;
        }
        while(num){
            if(num&1){
                res*=x;
            }
            x*=x;
            num>>=1;
        }
        return res;
    }