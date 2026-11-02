class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector <int> pse(heights.size(),-1);
        vector<int> nse(heights.size(), heights.size());
        stack<int> s;
        
        //PREVIOUS SMALLER ELEEMENT
       for(int i=0;i<heights.size();i++){
            while(!s.empty() && heights[s.top()]>=heights[i])
            s.pop();

            if(!s.empty())
            pse[i]=s.top();

            s.push(i);
        }

        while(!s.empty())
        s.pop();


        //NEXT SMALLER ELEMENT
         
         for(int i=heights.size()-1;i>=0;i--){
            while(!s.empty() && heights[s.top()]>=heights[i])
            s.pop();

            if(!s.empty())
            nse[i]=s.top();

            s.push(i);
        }

        int maxArea=0, current;
        for(int i=0;i<heights.size();i++){
            current=heights[i]*(nse[i]-pse[i]-1);

            maxArea= max(maxArea, current);
        }
        return maxArea;
    }
};