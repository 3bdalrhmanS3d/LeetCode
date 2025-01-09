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
    ListNode* mergeNodes(ListNode* head) {
        int sum = 0 ;
        ListNode * cur = head->next ;
        ListNode* result = head;
        while(cur != NULL)
        {
            if(cur->val != 0 )
            {
                sum += cur->val ;
            }
            else
            {
                result->val = sum ;
                sum = 0 ;

                if (cur->next != NULL) 
                {
                    result->next = cur;
                    result = result->next;
                } 
                else 
                {
                    result->next = nullptr;
                }
            }

            cur = cur->next;
        }

        return head ;
    }
};