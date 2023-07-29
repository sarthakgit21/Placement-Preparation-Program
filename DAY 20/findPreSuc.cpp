class Solution
{
    public:
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    Node * temp=root;
    pre=NULL;
    suc=NULL;
    while(temp){
        if(temp->key<=key){
            temp=temp->right;
        }
        else{
            suc=temp;
            temp=temp->left;
        }
    }
    temp=root;
    while(temp){
        if(temp->key<key){
            pre=temp;
            temp=temp->right;
        }
        else{
            temp=temp->left;
        }
    }
}
