class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> a(n);
        a[0]=nums[0];
        for(int i=1;i<n;i++){
            a[i]=nums[i]+a[i-1];
        }
        for(int i=0;i<n;i++){
            if(a[i]-nums[i]==a[n-1]-a[i]){
                return i;
            }
        }
        return -1;
    }
};