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
        map<Node*,Node*>mp;
        Node*tempHead=head;
        while(tempHead){
            Node* nex=new Node(tempHead->val);
            mp[tempHead]=nex;
            tempHead=tempHead->next;
        }
        tempHead=head;
        while(tempHead){
            auto it=mp[tempHead];
            it->next=mp[tempHead->next];
            it->random=mp.count(tempHead->random)?mp[tempHead->random]:NULL;
            tempHead=tempHead->next;
        }
        return mp[head];
        
    }
};