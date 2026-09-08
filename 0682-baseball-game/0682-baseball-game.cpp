class Solution {
public:
    int calPoints(vector<string>& operations) {
    stack<int> st;
    int sum=0;
    for(string s:operations){
        if(s!="C" && s!="D" && s!="+"){
            st.push(stoi(s));
            sum=sum+st.top();
        }
        else if(s=="+"){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.push(a);
            st.push(a+b);
            sum=sum+st.top();
        }
        else if(s=="D"){
            int b=2*st.top();
            st.push(b);
            sum=sum+st.top();
        }
        else{
            sum=sum-st.top();
            st.pop();
        }

    }
    return sum;
    }
};