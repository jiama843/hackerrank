node *lca(node *root, int v1,int v2)
{
    node *lcanode = nullptr;
    if(root == nullptr){
        lcanode = nullptr;
    }
    else if(v1 < root->data && v2 < root->data){
        lcanode = lca(root->left, v1, v2);
    }
    else if(v1 > root->data && v2 > root->data){
        lcanode = lca(root->right, v1, v2);
    }
    else/* if((v1 < root->data && v2 > root->data) ||
        (v1 > root->data && v2 < root->data))*/{
        lcanode = root;
    }
    return lcanode; 
}
