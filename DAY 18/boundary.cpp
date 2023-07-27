class Solution {

public:

void leftpart(Node* root,vector<int>&ans)

{

    if(!root || !root->left && !root->right)

    {

        return;

    }

    ans.push_back(root->data);

    if(root->left!=NULL)

    {

        leftpart(root->left,ans);

    }

    else{

        leftpart(root->right,ans);

    }

    return;

}

 

void child(Node* root,vector<int>&ans)

{

    if(!root)

    {

        return;

    }

    if(!root->left && !root->right)

    {

        ans.push_back(root->data);

        return;

    }

    child(root->left,ans);

    child(root->right,ans);

    return;

}

void rightpart(Node* root,vector<int> &ans)

{

    if(!root || !root->left && !root->right)

    {

        return;

    }

    if(root->right!=NULL)

    {

        rightpart(root->right,ans);

    }

    else{

        rightpart(root->left,ans);

    }

    ans.push_back(root->data);

}

    vector <int> boundary(Node *root)

    {

        //Your code here

        vector<int>ans;

        if(!root)

        {

            return ans;

        }

        ans.push_back(root->data);

        leftpart(root->left,ans);

        child(root->left,ans);

        child(root->right,ans);

        rightpart(root->right,ans);

        return ans;

    }

};
