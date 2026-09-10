class Solution {
public:
    int maxDepth(string s) {
        int c=0,m=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                c++;
            }
            if(s[i]==')'){
                m=max(m,c);
                c--;
            }
        }
        return m;
    }
};