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
        //function to reverse the linked list
        ListNode *reverse(ListNode *head){
                ListNode *pre=NULL,*next=NULL;
                
                while(head!=NULL){
                        next=head->next;
                        head->next=pre;
                        pre=head;
                        head=next;
                }return pre;
                
        }
    bool isPalindrome(ListNode* head) {
        
            if(head==NULL || head->next==NULL) return true;
            
            ListNode *slow=head, *fast=head;
            //find the middle of linked list
            while(fast->next!=NULL && fast->next->next!=NULL){
                    slow=slow->next;
                    fast=fast->next->next;
                    
            }
            
            //reversing nodes after middle node 
            slow->next=reverse(slow->next);
            slow=slow->next;
            
            //check element from head to middle and middle+1 to end are equal or not 
            while(slow!=NULL){
                    if(head->val!=slow->val)return false;
                    head=head->next;
                    slow=slow->next;
            }
            return true;
    }
};