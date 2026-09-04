class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            pos=s.find(part);
            if(pos!= string::npos)
            s.erase(pos,(part.length()));
        }
        return s;
    }
};