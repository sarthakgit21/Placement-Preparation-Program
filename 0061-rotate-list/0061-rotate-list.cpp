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
        if(k==0||!head) return head;
        int c=1;
        ListNode* temp=head;
        while(temp->next){
            c++;
            temp=temp->next;
        }
        if(k>=c){
            k=k%c;
        }
        int count=c-k-1;
        temp->next=head;
        while(count--){
            head=head->next;
        }
        ListNode* newhead=head->next;
        head->next=NULL;
        return newhead;
    }
};