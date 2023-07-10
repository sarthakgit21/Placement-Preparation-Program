/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* a=head;
        ListNode* b=head;
        while(b&&b->next){
            a=a->next;
            b=b->next->next;
            if(a==b){
                ListNode* e=head;
                while(e!=a){
                    a=a->next;
                    e=e->next;
                }
                return e;
            }
        }
        return NULL;
    }
};