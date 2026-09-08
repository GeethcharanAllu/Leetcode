class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        map<int,int> m;
        vector<int> a;
        for(int i:nums2){
            if(st.empty()){
                st.push(i);
            }
            else{
                while(!st.empty() && i>st.top()){
                    m[st.top()]=i;
                    st.pop();
                }
                st.push(i);
            }
        }
        for(int i:nums1){
            if(m.find(i)==m.end()){
                a.push_back(-1);
            }
            else{
                a.push_back(m[i]);
            }
        }
        return a;

    }
};