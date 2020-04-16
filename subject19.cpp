//迭代
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(1);
        ListNode* ret = head;
        while (l1 != NULL && l2 != NULL) {
            if (l1->val < l2->val) {
                head->next = l1;
                l1 = l1->next;
            } else {
                head->next = l2;
                l2 = l2->next;
            }
            head = head->next;
        }
        head->next = l1 == NULL ? l2 : l1;
        return ret->next;
    }
};
//递归
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
         if (l1 == NULL) {
            return l2;
        }
        if (l2 == NULL) {
            return l1;
        }
        if (l1->val <= l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
};

//遍历
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        vector<int> number;
        ListNode* head=new ListNode(0);
        ListNode* h=head;
        while(l1!=NULL)
        {
            int temp=l1->val;
            number.push_back(temp);
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            int temp=l2->val;
            number.push_back(temp);
            l2=l2->next;
        }
        sort(number.begin(),number.end());
        for(int i=0;i<number.size();i++)
        {
            h->next=new ListNode(number[i]);
            h=h->next;
        }
        return head->next;
    }
};
