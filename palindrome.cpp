class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        long z=0;
        while(x>0){
            z=z*10+x%10;
            x=x/10;
        }
        return y==z;
    }
};
