class Solution {
public:
    int reverse(int x) {
        long long rev=0;
        for(int i=x;i!=0;i/=10){
            rev=(rev*10)+i%10;
        }
        if(rev>INT_MAX || rev<INT_MIN)return 0;
        return rev;
    }
};