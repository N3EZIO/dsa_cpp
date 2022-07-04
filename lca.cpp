/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
vector<int> s1;
vector<int> s2; 


// int findSubtree(TreeNode* root, int a){
//     if(search(root->left))
// }


int search1(TreeNode* root, int a){
    
    if(root == NULL) return false;
    
    s1.push_back(root->val);
    
    if(root->val == a) return true;
    
    if(search1(root->left, a) || search1(root->right, a) == true){
        return true;
    }
    
    s1.pop_back();
    
    return false;
}



int search2(TreeNode* root, int a){
    
    if(root == NULL) return false;
    
    s2.push_back(root->val);
    
    if(root->val == a) return true;
    
    if(search2(root->left,a) || search2(root->right,a) == true){
        return true;
    }
    
    s2.pop_back();
    
    return false;
}

int Solution::lca(TreeNode* A, int B, int C) {
    
    // p1.push(A->val);
    // p2.push(A->val);
    
    int i;
        i=0;
    
    if(!search1(A,B) || !search2(A,C)){
        return -1;
    }else{
        int n = s1.size();
        int n2 = s2.size();
        int t;
        
        while(i < n && i < n2){
            if(s1[i] != s2[i]){
                break;
            }else{
                i++;
            }
        }
    }
    
    
    // if(n > n2){
    //     return s1[i-1];
    // }else{
    //     return s2[i-1];
    // }
    
    // for(i=0;i<s1.size();i++){
    //     cout<<"element is:"<<s1[i]<<"\n";
    // }
    // for(i=0;i<s2.size();i++){
    //     cout<<"element is:"<<s2[i]<<"\n";
    // }
    
    return s1[i-1];
    
   
    
    
}





// int comp(TreeNode* root, int a){
//     if(root->val == a){
//         return 1;
//     }else{
//         return 0;
//     }
//     if(root == NULL){
//         return NULL;
//     }
// }
