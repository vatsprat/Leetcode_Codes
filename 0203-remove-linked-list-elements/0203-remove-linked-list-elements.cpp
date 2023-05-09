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
    ListNode* removeElements(ListNode* head, int val) 
    {
        if(head == NULL)
        {
            return head;
        }
        ListNode* p = head;
        ListNode* q = NULL;
        {
           
           while(p!=NULL)
           {
               if( q!=NULL && (p->val == val))
               {
                     q->next = p->next;
                     p = q->next;
                     
               }
               else if(q==NULL && (p->val==val))
               {
                  

                   while(p->val==val)
                   {
                       p=p->next;
                       if(p==NULL)
                       {
                           return NULL;
                       }
                   }
                   head = p;
                
               } 

                if( p!=NULL && (q!=NULL && (p->val == val)) )
               {
                     q->next = p->next;
                     p = q->next;
                     
               }
               else
               {
               if(p!=NULL)
               {
               q=p;
               p=p->next;
               }
               

               }





           }






        }
        return head;
    }
};