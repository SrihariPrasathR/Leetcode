
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int data) {
        if (root == nullptr) {
            return new TreeNode(data);
        }
      if(root->val>data)
      root->left=insertIntoBST(root->left,data);
      else if(root->val<data)
      root->right=insertIntoBST(root->right,data);
      return root;  
    }
};
