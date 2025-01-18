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
    bool isPalindrome(ListNode* head) {

        if(head == NULL)
        {
            return false ;
        }

        vector<int> v;
        ListNode *ptr = head;
        
        while(ptr!=NULL)
        {
            v.push_back(ptr->val);
            ptr = ptr->next;
        }

        int sz = v.size();

        for(int i = 0 ; i < sz ; i++)
        {
            if(v[i] != v[sz - i - 1 ])
            {
                return false ;
            }

        }

        return true ;
    }


};