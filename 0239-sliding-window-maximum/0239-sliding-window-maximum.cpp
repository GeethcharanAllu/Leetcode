class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> d;
        int left=0;
        vector<int> a;
        for(int i=0;i<k;i++){
            while(!d.empty() && nums[i]>d.back()){
                d.pop_back();
            }
            d.push_back(nums[i]);
        }
        a.push_back(d.front());
        for(int i=k;i<nums.size();i++){
            if(d.front()==nums[i-k]){
                d.pop_front();
            }
            while(!d.empty() && nums[i]>d.back()){
                 d.pop_back();
            }
            d.push_back(nums[i]);
            a.push_back(d.front());
        }
        return a;
    }
};