class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq(26,0);
        for(int n : words[0]){
            freq[n-'a']++;
        }

        for(int i = 1;i< words.size(); i++){
            vector<int> curr(26, 0);
            for(int n: words[i]){
                curr[n- 'a']++;
            }

            for(int j=0;j<26;j++){
                freq[j]= min(freq[j], curr[j]);
            }
        }

        vector<string> ans;
        for(int i=0;i<26;i++){
            while(freq[i]>0){
                ans.push_back(string(1, i + 'a'));
                freq[i]--;
            }
        }
        return ans;

    }
};