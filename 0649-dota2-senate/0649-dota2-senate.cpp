class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> r;
        queue<int> d;
        for(int i=0;i<senate.size();i++){
            if(senate[i]=='R'){
                r.push(i);
            }
            else{
                d.push(i);
            }
        }
        while(!r.empty() && !d.empty()){
            int fr=r.front();
            int fd=d.front();
            r.pop();
            d.pop();
            if(fr<fd){
                r.push(fr+senate.size());
            }
            else{
                d.push(fd+senate.size());
            }
        }
        if(!r.empty()){
            return "Radiant";
        }
        return "Dire";
    }
};