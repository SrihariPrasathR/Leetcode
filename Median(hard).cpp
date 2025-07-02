#include<algorithm>
using namespace std;
class Solution {
public:
    float findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1,size2,s;
        float ans;
        size1=nums1.size();
        size2=nums2.size();
       
        s=size1+size2;
         int arr[s];
        for(int i=0;i<size1;i++)
        arr[i]=nums1[i];
       for (int i = 0; i < size2; i++)
    arr[size1 + i] = nums2[i];
       sort(arr, arr + s);

        if(s%2==0){
            ans = (arr[(s/2)-1] + arr[(s/2)]) / 2.0f;
        }
        else
        ans=arr[(s/2)];

  return ans;
    }
  
};
