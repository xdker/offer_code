//
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        while(n>0){
            cnt+=n%2;
            n>>=1;
        }
        return cnt;
    }
};
//
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ret = 0;
        while (n != 0) {
            n &= n-1;
            ret ++;
        }
        return ret;
    }
};