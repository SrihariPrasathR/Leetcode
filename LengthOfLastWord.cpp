class Solution {
public:
    int lengthOfLastWord(string s) {
     int i=s.size()-1,l=0;
     while(s[i]==' '&&i>=0)
     i--;
while (i >= 0 && s[i]!= ' ') {
            l++;
            i--;
        }
        return l;
    }
};
