    vector<int> topView(Node *root)
    {
        //Your code here
           // Your code here
   vector<int> topview;
   queue<pair<Node*,int>>q;
   map<int,int> mp;
   
   q.push({root,0});
   
   while(!q.empty())
   {
       auto it=q.front();
       q.pop();
       Node* node=it.first;
       int ind=it.second;
    //   cout<<node->data;
       if(mp.find(ind)==mp.end()) mp[ind]=node->data;
       if(node->left) q.push({node->left,ind-1});
       if(node->right) q.push({node->right,ind+1});
   }
   
   for(auto it:mp)
   {
       topview.push_back(it.second);
   }
   return topview;
    }

};
