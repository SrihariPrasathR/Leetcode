class Solution {
public:
    bool isPalindrome(int x) {
        long a=0,b=x;
        while(x!=0){
        a=(a*10)+x%10;
        x=x/10;  
        }
        if(a==b&&a>=0){
            return true;
        }
        else 
        return false;
    }
};
