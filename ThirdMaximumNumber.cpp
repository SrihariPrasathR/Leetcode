#include <algorithm>
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end(),greater<int>());
         int prev=nums[0];
        for(int i=0;i<nums.size();i++){
           if(nums[i]!=prev){
            count++;
            prev=nums[i];
           }
if(count==2)
return nums[i];
        }
        return nums[0];
    }
};
