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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head == NULL)
        {
            return head ;
        }

        int LengthOfList = 0;
        ListNode *ptr = head, *cur = head;
        while(ptr!=NULL)
        {
            LengthOfList++;
            ptr= ptr->next;
        }
        // 1 2 3 4 5 
        // L = 5 , n = 2 ---> 3 ? + 1 
        // L =2 , n = 1 ---> 2 - 1 + 1 ! 
        LengthOfList = LengthOfList - n ;
        
        if(LengthOfList == 0)
        {
            ListNode *newH = head->next ;
            delete head;
            return newH ;

        }
        
        for(int i = 1 ; i < LengthOfList ; i++)
        {
            // e = 0 cur = 1 
            // e = 1 cur = 2 
            // e = 2 cur = 3 
            // e = 3 cur = nTh remove ! 

            cur = cur->next ;
        }
        ListNode* nodeToRemove = cur->next;
        cur->next = nodeToRemove->next;
        delete nodeToRemove;

        return head ;
    }
};