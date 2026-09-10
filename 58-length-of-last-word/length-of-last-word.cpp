class Solution {
public:
    int lengthOfLastWord(string s) {
        int left=0;
        int right=s.length()-1;
        while(right>=0 && s[right]==' ')
        right--;

        

        left=right;
        while(left>=0 && s[left]!=' ')
        left--;

        
        return (right-left);
    }
};