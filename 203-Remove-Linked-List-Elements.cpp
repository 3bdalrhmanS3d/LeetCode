/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next; 
            delete temp;
        }


        ListNode *ptr = head;
        while(ptr != NULL && ptr->next != NULL)
        {
            if(ptr->next->val == val)
            {
                ListNode *remove = ptr->next ;
                ptr->next = ptr->next->next;
                delete remove;
            }
            else
            {
                ptr = ptr->next ;
            }
        }

        return head;
    }
};