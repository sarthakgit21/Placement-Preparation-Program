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
    ListNode* middleNode(ListNode* head) {
        ListNode*ss=head;
        ListNode*ff=head;
        while(ff!=NULL&&ff->next!=NULL){
            ss=ss->next;
            ff=ff->next->next;
        }
        return ss;
    }
};