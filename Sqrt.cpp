class Solution {
public:
    int mySqrt(int x) {
        long a=0,i=1;
        while(1){
           if(i*i<x)
           a=i;
           else if(i*i==x)
           return i;
           else if(i*i>x){
            a=i-1;
            return a;
           }
           i++;
        }
        return a;
    }
};
