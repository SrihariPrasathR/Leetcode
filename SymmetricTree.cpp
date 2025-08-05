class Solution {
public:
    bool isSymmetric(TreeNode* root) {
       
       return isSym(root->left,root->right);
    }
    bool isSym(TreeNode* left1,TreeNode* right1){
        if(left1==nullptr||right1==nullptr)
        return left1==right1;

        return left1->val==right1->val&&isSym(left1->left,right1->right)&&isSym(left1->right,right1->left);
    }
};
