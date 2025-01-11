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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
        {
            return head ;
        }

        ListNode * dummy = new ListNode(0, head);
        ListNode * prev = dummy, *cur = head ;

        while(cur != NULL)
        {
            if(cur->next != NULL && cur->val == cur->next->val)
            {
                while (cur->next != NULL && cur->val == cur->next->val) {
                    cur = cur->next;
                }
                
                prev->next = cur->next;
            }
            else
            {
                prev = cur ;
            }

            cur = cur->next ;
     
        }

        return dummy->next;
    }
};