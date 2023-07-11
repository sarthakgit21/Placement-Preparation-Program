/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return head;
        Node* temp=head;
        Node* temp2=head->next;
        while(temp){
            Node * nexnew=new Node(temp->val);
            // cout<<temp->val<<" "<<nexnew->val;
            temp->next=nexnew;
            nexnew->next=temp2;
            temp=temp2;
            if(temp2==NULL) break;
            temp2=temp2->next;
        }
        
        temp=head;
        while(temp){
            temp->next->random=temp->random==NULL?NULL:temp->random->next;
            temp=temp->next->next;
        }
        

        temp=head;
        
        temp2=head->next->next;
        Node* newHead=new Node(0);
        Node* ans=newHead;
        while(temp2){
            newHead->next=temp->next;
            temp->next=temp2;
            temp=temp2;
            newHead=newHead->next;
            temp2=temp2->next->next;
        }
        newHead->next=temp->next;
        temp->next=temp2;
        temp=temp2;
        newHead->next->next=temp2;
 
        return ans->next;
    }
};