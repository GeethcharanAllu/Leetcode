class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        for(int i=0;i<tickets.size();i++){
            q.push(i);
        }
        int c=0;
        while(tickets[k]>0){
            int front=q.front();
            q.pop();
            tickets[front]-=1;
            if(tickets[front]>0){
                q.push(front);
            }
            c++;
        }
        return c;
    }
};