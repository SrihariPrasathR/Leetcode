#include<algorithm>
class Solution {
public:
    int singleNumber(vector<int>& a) {
        int s=a.size();
        int vr=0,flag=0;
        sort(a.begin(),a.end());
        for(int i=0;i<s;i+=2){
            if(i==s-1)
            return a[i];
            else if(a[i]==a[i+1])
            continue;
            else 
            return a[i];
           
           }
    return 0;
    }
};
