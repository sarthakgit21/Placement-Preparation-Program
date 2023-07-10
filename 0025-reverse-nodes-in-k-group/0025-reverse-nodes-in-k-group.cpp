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
        if(!head||k==1) return  head;
        int c=0;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* pre=dummy ;
        ListNode* cur=dummy ;
        ListNode* nex=dummy ;
        while(cur->next){
            c++;
            cur=cur->next;
        }
        while(c>=k){
            cur=pre->next;
            nex=cur->next;
            int temp=k-1;
            while(temp--){
                cur->next=nex->next;
                nex->next=pre->next;
                pre->next=nex;
                nex=cur->next;
            }
            pre=cur;
            c-=k;
        }
        return dummy->next;
        
    }
};