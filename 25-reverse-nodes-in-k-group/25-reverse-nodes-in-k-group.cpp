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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head ==NULL || k==1){
                return head;
        }
            
            ListNode *dummy =new ListNode();
            dummy->next=head;
            
            ListNode *cur=dummy,*pre=dummy,*nex=dummy;
            int count=0;
        
            //length of linked list
            while(cur->next!=NULL){
                    cur=cur->next;
                    count++;
            }
            while(count>=k){
                    cur=pre->next;
                    nex=cur->next;
                    for (int i=1;i<k;i++)
                    
                    {
                            //changing the links within the k group
                            cur->next=nex->next;
                            nex->next=pre->next;
                            pre->next=nex;
                            nex=cur->next;
                    }
                    pre=cur;
                    count-=k;//reducing the length by k
            }
            return dummy->next;
    }
};