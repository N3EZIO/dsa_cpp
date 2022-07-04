void printK(Node *root, k){
    if(root == NULL){
        return;
    }
    if(k == 0){
        cout<<root->val;
    }else{
        printK(root->left, k-1);
        printK(root->right, k-1);
    }
}