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
    ListNode* reverse(ListNode* head){
        if(!head) return head;
        ListNode* dum=NULL;
        while(head){
            ListNode* nnew=head->next;
            head->next=dum;
            dum=head;
            head=nnew;
        }
        return dum;
    }
    bool isPalindrome(ListNode* head) {
        if(!head) return head;
        ListNode* ff=head;
        ListNode* ss=head;
        while(ff->next&&ff->next->next){
            ff=ff->next->next;
            ss=ss->next;
        }
        ListNode* newnode=reverse(ss->next);
        ss=newnode;
        while(ss){
            // cout<<ss->val<<endl;
            if(ss->val!=head->val) return false;
            ss=ss->next;
            head=head->next;
        }
        return true;
    }
};