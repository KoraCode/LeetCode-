//迭代

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
