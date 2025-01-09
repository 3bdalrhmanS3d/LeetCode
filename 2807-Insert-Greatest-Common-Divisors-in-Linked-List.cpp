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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        if(head->next == nullptr)
        {
            return head ;
        }

        ListNode* cur = head ;
        while(cur->next && cur )
        {
            int a = cur->val ;
            int b = cur->next->val;  
            int x = gcd(a,b);

            ListNode * newNode = new ListNode(x) ;
            newNode->next = cur->next ;

            cur->next = newNode;

            cur = newNode->next;

        }

        return head ;
    }

    long long gcd(long long a, long long b){ 
        
        return a ? gcd(b % a, a) : b;
    }
};