//递归

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)  return head; //终止条件
        ListNode* node = head->next; 
        head->next = swapPairs(head->next->next);
        node->next = head;
        return node;
    }
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
         if ((head == NULL) || (head->next == NULL)) {
            return head;
        }

        // Nodes to be swapped
        ListNode *firstNode = head;
        ListNode *secondNode = head->next;

        // Swapping
        firstNode->next  = swapPairs(secondNode->next);
        secondNode->next = firstNode;

        // Now the head is the second node
        return secondNode;
    }
};

//迭代
/*
举例说明：1->2->3->4
通过创建虚拟节点dummy，链表为 0->1->2->3->4

初始： pre = dummy(值为0)，cur = head(值为1)， next = cur->next(值为2）：pre(0)->cur(1)->next(2)

交换过程：

pre ->next = next; : 0 -> 2
cur ->next = next->next; : 1 -> 3
next->next = cur; : 2 -> 1
更新后的链表为 0->2->1->3->4
更新指针：pre = cur(值为1)，cur = cur->next(值为3)，next = cur->next(值为4)

重复交换过程。。。

终止条件：

cur == NULL
要判断的条件：
cur 不为空时才进行 next = cur->next
交换过程中当next 不为空时才进行 cur ->next = next->next
*/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* pre = dummy;
        dummy->next = head;
        
        ListNode* cur = head;
        
        while( cur != NULL) 
        {
            ListNode* next = cur->next;  
            if(next == NULL)
                break;
            
            pre -> next = next;
            cur -> next = next -> next;
            next-> next = cur;
    
            pre = cur;
            cur = cur -> next; 
        }
        
        return dummy->next;
        
    }
};
