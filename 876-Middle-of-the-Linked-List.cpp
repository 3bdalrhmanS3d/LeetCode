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
    ListNode* middleNode(ListNode* head) {
        int cnt =0 ;
        ListNode* current = head;
        while( current != nullptr )
        {
            cnt++ ;
            current = current->next ;
        }

        cnt/=2;
        current = head ;
        while(cnt--)
        {
            current = current->next ;
        }

        return current ;
        
    }
};