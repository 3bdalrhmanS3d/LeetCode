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
    ListNode* swapNodes(ListNode* head, int k) {
        
        if(head == NULL || head->next == NULL )
        {
            return head;
        }

        int sz = 0;
        ListNode *temp= head;
        while(temp != NULL)
        {
            sz++;
            temp=temp->next;
        }

        ListNode *f = head ;
        for(int i = 1 ; i < k ; i++)
        {
            f = f->next;
        }

        ListNode *l = head ;
        for(int i = 1 ; i < sz - k + 1  ; i++)
        {
            l = l->next;
        }

        int tempval = f->val;
        f->val = l->val;
        l->val = tempval;

        
        return head;

        delete f, l, temp;
    }
};