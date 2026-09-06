class Solution {
public:
    string reverseWords(string s) {
       reverse(s.begin(),s.end());
       string ans="";
       for(int i=0;i<s.length();i++){
           string word="";
           while(i<s.length() && s[i]!=' ')
           {
                word+=s[i];
                i++;
           }
           if (word.empty()) continue;
           reverse(word.begin(),word.end());
          if (!ans.empty()) {
                ans += ' '; 
            }
            ans += word;
        }
       
       return ans;
    }
};