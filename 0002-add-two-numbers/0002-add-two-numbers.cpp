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
    ListNode* reverse(ListNode* &head)
    {
        ListNode* prev=NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        while(curr!=NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;

        }

        return prev;

    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    { 
        ListNode* head1 = l1;
        ListNode* head2 = l2;

        ListNode* head = NULL;
        ListNode* tail = NULL;

        int carry=0;

        while(head1!=NULL && head2!=NULL)
        {
                int sum = carry + head1->val + head2->val;
                int digit = sum % 10;
                carry = sum/10;
                ListNode* newnode = new ListNode(digit);
                {
                    if(head==NULL)
                    {
                        head = newnode;
                        tail = newnode;
                    }
                    else
                    {
                        tail->next = newnode;
                        tail = tail->next;
                    }
                }
                
                head1=head1->next;
                head2=head2->next;
        }

        while(head1!=NULL)
        {
            int sum = head1->val + carry;
            int digit = sum % 10;
            carry = sum/10;
            ListNode* newnode = new ListNode(digit);
          
                    tail->next = newnode;
                    tail = tail->next;
            
                    
                    head1=head1->next;

        }

        
        while(head2!=NULL)
        {
            int sum = head2->val + carry;
            int digit = sum % 10;
            ListNode* newnode = new ListNode(digit);
        
                    tail->next = newnode;
                    tail = tail->next;
           
                    carry = sum/10;
                    head2=head2->next;

        }

        while(carry!=0)
        {
            int sum= carry;
            int digit = sum%10;
            carry = sum /10;
            ListNode* newnode = new ListNode(digit);
                    tail->next = newnode;
                    tail = tail->next;

            
        }





        
        return head;

        
        
        
    }
};