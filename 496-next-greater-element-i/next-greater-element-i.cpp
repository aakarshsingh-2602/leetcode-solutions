class Solution {
public:
   
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> ans;
        stack <int> st;

        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i])
                st.pop();
        

        ans[nums2[i]]=!st.empty()? st.top():-1;

        st.push(nums2[i]);
        }

        vector<int> result;
        for(int i:nums1){
            result.push_back(ans[i]);
        }
        return result;
    }
};