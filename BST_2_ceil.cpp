
int findCeil(BinaryTreeNode<int> *node, int x){
    int ans=-1;
    int a{};
    while(node)
    {
        if(x==node->data)
        {
            ans=node->data;
            a= ans;
           
        }
        else if(x>node->data)
        {
            node=node->right;
        }
        else
        {
            a=node->data;
            node=node->left;
        }
        
    }
    return a;
    
    // Write your code here.
}
