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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> cp;
        ListNode* prev = NULL;
        ListNode* curr = head;

        int pos = 0;
        while(curr->next!= NULL)
        {
            if(prev!= NULL)
            {
                if ((curr->val > prev->val && curr->val > curr->next->val) || (curr->val < prev->val && curr->val < curr->next->val))
                {
                    cp.push_back(pos);
                }
            }

            prev = curr;
            curr = curr->next;
            pos++;
        }

        if (cp.size() < 2) {
            return {-1, -1};
        }

        int minDist = INT_MAX;
        int maxDist = cp.back() - cp.front();
        for (int i = 1; i < cp.size(); i++) {
            minDist = min(minDist, cp[i] - cp[i - 1]);
        }


        return {minDist, maxDist};

    }
};