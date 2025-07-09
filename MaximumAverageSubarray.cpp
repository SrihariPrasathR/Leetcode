class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max1=0,w=0;
        for(int i=0;i<k;i++){
            w+=nums[i];
        }
        max1=w;
         for(int i=k;i<nums.size();i++){
            w+=nums[i]-nums[i-k];
            max1=max(w,max1);
        }
        return max1/k;
    }
};
