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
    int pairSum(ListNode* head) {
        int mx = -100 ;
        ListNode * cur =  head;
        vector<int> v;
        while(cur!= NULL )
        {
            v.push_back(cur->val);
            cur = cur->next;
        }
        int sz = v.size() ;
        for(int i =0 ; i < sz / 2 ; i++)
        {
            mx = max(mx, v[i] + v[ sz - i - 1]);
        }

        return mx ;
    }
};