Node* BST(Node* root,int d)
{
    if(root==NULL)
    root=new Node(d);
    else if(root->data >d)
    root->left=BST(root->left,d);
    else
    root->right=BST(root->right,d);
    return root;
}


Node *constructTree (int post[], int size)
{
    if(size==0)
    return NULL;
    Node* root=NULL;
    for(int i=size-1;i>=0;i--)
    root=BST(root,post[i]);
    return root;
}
