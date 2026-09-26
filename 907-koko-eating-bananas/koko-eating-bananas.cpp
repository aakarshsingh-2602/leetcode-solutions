class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        long long k=0,total_hours=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            total_hours=0;
            for(int p:piles){
                total_hours+=(p+mid-1)/mid;
            }
            if(total_hours<=h){
                k=mid;
                high=mid-1;

            }
            else
            low=mid+1;
        }
        return k;
    }
};