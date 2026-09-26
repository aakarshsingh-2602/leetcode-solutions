class Solution {
public:
    int capacity(int cap,vector<int>& weights, int days){
        int load=0;
        int total_days=1;
        for(int w: weights){
            if(load+w>cap){
                total_days++;
                load=0;
            }
            load+=w;
        }
        return total_days<=days;

    }
    int shipWithinDays(vector<int>& weights, int days) {
     int low=*max_element(weights.begin(),weights.end());
     int high=accumulate(weights.begin(),weights.end(),0);
     int ans;

     while(low<=high){
        int mid=low+(high-low)/2;

        if(capacity(mid,weights,days)){
            ans=mid;
            high=mid-1;
        }
        else
            low=mid+1;

     }
     return ans;
        
    }
};