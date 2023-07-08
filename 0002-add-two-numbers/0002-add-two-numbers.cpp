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
    ListNode* addTwoNumbers(ListNode* A, ListNode* B) {
        ListNode* ans=new ListNode();
        ListNode* temp=ans;
        int cry=0;
        while(A||B||cry){
            int sum=cry;
            if(A) sum+=A->val,A=A->next;
            if(B) sum+=B->val,B=B->next;
            cry=sum/10;
            // cout<<cry<<endl;
            ListNode* nex=new ListNode(sum%10);
            temp->next=nex;
            temp=temp->next;
        }
        return ans->next;
        
    }
};