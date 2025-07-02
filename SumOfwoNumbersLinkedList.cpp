class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a=new ListNode();
        ListNode* cur=a;
int carry=0,sum=0,digit;
        while(l1!=nullptr||l2!=nullptr||carry!=0)
        {
            sum=carry;
           if(l1!=nullptr){
            sum+=l1->val;
            l1=l1->next;
           }
           if(l2!=nullptr){
            sum+=l2->val;
            l2=l2->next;
           }
           carry=sum/10;
           cur->next = new ListNode(sum % 10);
           cur=cur->next;
        }
        return a->next;
    }
};
