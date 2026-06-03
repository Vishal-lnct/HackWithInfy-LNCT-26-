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
    ListNode* rotateRight(ListNode* head, int k) {

        if(!head){
            return NULL;
        
        }
        int count=0;

        
     ListNode* temp=head;

     while(temp!=NULL){
        count++;
        temp=temp->next;
     }

     if(k%count==0){
            return head;
        }
     k=k%count;
     ListNode* x=head;
     for(int i=0;i<count-k-1;i++){
x=x->next;
     }
     ListNode* newhead=x->next;
     ListNode * p=x;
     while(p->next){
        p=p->next;
     }
     x->next=NULL;

     p->next=head;

return newhead;
        
    }
};