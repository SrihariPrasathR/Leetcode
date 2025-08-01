class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26]={0};
        for(char a: magazine){
             arr[a-'a']++;
        }
        for(char a: ransomNote){
             if(arr[a-'a']==0)
             return false;
             else{
                arr[a-'a']--;
             }
        }
        return true;
    }
};
