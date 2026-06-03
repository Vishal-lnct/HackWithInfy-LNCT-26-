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

if(head==NULL){
    return NULL;
}

        int count=0;

        vector<int>nums;

        ListNode* temp=head;
        while(temp!=NULL){
            nums.push_back(temp->val);
            count++;
            temp=temp->next;
        }
        k=k%count;

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());

        ListNode* x=new ListNode(nums[0]);
ListNode* curr=x;
        int i=1;
        int n=nums.size();
        while(i<n){
            ListNode* p=new ListNode(nums[i]);
     curr->next=p;
     curr=curr->next;
        //   curr=curr->next;
            i++;
        }
        return x;
    }
};