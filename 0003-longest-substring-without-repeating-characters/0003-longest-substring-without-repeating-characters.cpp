class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int left=0,right,ma=0;
        for(right=0;right<s.size();right++){
            m[s[right]]++;
            while(m[s[right]]>1){
                
                m[s[left]]--;
                left++;
            }
            ma=max(ma,right-left+1);
        }
        return ma;
    }
};