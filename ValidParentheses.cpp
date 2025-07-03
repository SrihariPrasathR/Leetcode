class Solution {
public:
    bool isValid(string s) {
        stack<int> stk;
        for(char ch:s){
            if(ch=='('||ch=='{'||ch=='[')
            stk.push(ch);
            else{
                if(stk.empty()) return false;
            if(ch==')'&&stk.top()!='('||ch=='}'&&stk.top()!='{'||ch==']'&&stk.top()!='[')
           return false;
            stk.pop();
            }
        }
       return stk.empty(); 
    }
};
