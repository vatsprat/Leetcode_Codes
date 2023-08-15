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
    ListNode* partition(ListNode* head, int x) 
    {

        vector<int> val;
        ListNode* p = head;
        while(p)
        {
            val.push_back(p->val);
            p=p->next;
        }

        p = head;

        for(int i=0;i<val.size();i++)
        {
            if(val[i]<x)
            {
                p->val = val[i];
                p=p->next;
                val[i] = -101;
            }
        }
        for(int i=0;i<val.size();i++)
        {
            if(val[i]!=-101)
            {
                p->val = val[i];
                p=p->next;
                val[i] = -101;
            }
        }

        




        return head;
    }
};