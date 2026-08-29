class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        int h[26]={0};
        for(int i=0;i<s.length();i++){
            h[s[i]-97]++;
            h[t[i]-97]--;
            
        }
        for(int i=0;i<26;i++){
            if(h[i]!=0){
                return false;
            }
        }
        return true;
    }
};