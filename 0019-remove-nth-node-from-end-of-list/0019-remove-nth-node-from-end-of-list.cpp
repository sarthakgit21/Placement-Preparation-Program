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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tempHead=head;
        ListNode* ans=head;
        int temp=n;
        while(temp--){
            tempHead=tempHead->next;
        }
        if(tempHead==NULL) return ans->next;
        while(tempHead->next!=NULL){
            head=head->next;
            tempHead=tempHead->next;
        }
        head->next=head->next->next;
        return ans;
    }
};