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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        vector<int>ans;
        ListNode* temp=list1;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        ListNode* temp1=list2;
        while(temp1!=NULL){
            ans.push_back(temp1->val);
            temp1=temp1->next;
        }
         if(ans.size() == 0) {
            return NULL;
        }

        sort(ans.begin(),ans.end());

      ListNode* x=new ListNode(ans[0]);
      ListNode* curr=x;
      int i=1;
      while(i<ans.size()){
        curr->next=new ListNode(ans[i]);
        curr=curr->next;
        i++;
      }
      return x;
    }
};