class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(-1);
        ListNode* h=head;
        int sum=0;
        bool carry=false;
        while(l1!=NULL||l2!=NULL)
        {
            sum=0;                      //每次循环初始化sum，用于记录每次的累加
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            if(carry)                   //判断是否有进位，sum+1
            {
                ++sum;
            }
            h->next=new ListNode(sum%10);   //存储数据
            h=h->next;
            carry=sum>=10?true:false;       //判断是否有进位
        }
        if(carry)                           //运算结束后看是否需要进位
        {
            h->next=new ListNode(1);
        }
        return head->next;
    }
};
