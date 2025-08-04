class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum,total=0;
        maximum=nums[0];
        for(int n:nums){
            if(total<0)
            total=0;
            
                total+=n;
                maximum=max(maximum,total);
            
        }
        return maximum;
    }
};
