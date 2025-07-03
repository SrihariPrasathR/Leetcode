class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) 
        return "";
        sort(strs.begin(), strs.end());
        string start = strs[0], end = strs.back(), result = "";
        for (int i=0;i<start.size();i++)
        if(i<end.size()&&start[i]==end[i])
        result+=start[i];
        else
        break;
    return result;
    }
};
