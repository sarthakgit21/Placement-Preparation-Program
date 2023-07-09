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
    ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
        if(!A) return NULL;
        if(!B) return NULL;
        ListNode* a=A;
        ListNode* b=B;
        while(a!=b){
            a=a==NULL?B:a=a->next;
            b=b==NULL?A:b=b->next;
        }
        return a;
    }
};