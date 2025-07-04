class Solution {
public:
    int strStr(string haystack, string needle) {
        int flag=-1;
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0]){
             for(int j=0;j<needle.size();j++){
                  if(needle[j]==haystack[i+j]){
                    if(j==needle.size()-1){
                    flag=i;
                    break;
                    }
                  }
                  else
                  break;

             }}
             if(flag!=-1)
             break;
        }
    if(flag!=-1)
    return flag;
    else
    return -1;
    }
};
