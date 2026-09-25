class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seq(nums.begin(), nums.end());
        int longest=0;
        
        for(int i : seq){
            
            if(seq.find(i-1)== seq.end()){
                int currentNum=i;
                int currentStreak=1;
            
            while(seq.find(currentNum+1)!=seq.end()){
                currentNum++;
                currentStreak++;
            }
            
            longest=max(currentStreak,longest);
            }
        }
        return longest;
    }
};