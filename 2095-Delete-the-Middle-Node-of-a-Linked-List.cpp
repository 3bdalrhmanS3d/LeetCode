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
    ListNode* deleteMiddle(ListNode* head) {
        // n == 0 
        if(head == NULL)
        {
            return head ;
        }
        // n = 1 ?
        if(head->next == NULL)
        {
            return NULL ;
        }

        ListNode *f = head, *s = head, *remove = NULL;

        while( f != NULL && f->next != NULL)
        {
            remove = s;
            s = s->next;
            f = f->next->next;
        }

        if(remove!= NULL)
        {
            remove->next = s->next ;
            delete s;
        }

        return head;
    }
};