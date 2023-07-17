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
    ListNode* reverseList(ListNode* list){
        if(list==NULL) return list;
        ListNode* temp=NULL;
        while(list){
            ListNode*nex=list->next;
            list->next=temp;
            temp=list;
            list=nex;
        }
        return temp;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverseList(l1);
        l2=reverseList(l2);
        ListNode* l3=new ListNode(0);
        ListNode* ans=l3;
        
        int crry=0;
        
        while(l1||l2||crry){
            int sum=0;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            
            sum+=crry;
            crry=sum/10;
            ListNode* newnext=new ListNode(sum%10);
            l3->next=newnext;
            l3=l3->next;
            
        }
        ans=reverseList(ans->next);
        
        return ans;
    }
    
    
};