class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int l=nums.size();
        int ans=INT_MAX;
        for(int i=0;i<l;i++){
            int temp=nums[i];
            for(int j=i;j<l;j++){
                temp=temp|nums[j];
                if(temp>=k){
                ans=min(ans,j-i+1);
                }
            }
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};
