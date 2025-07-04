
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int data) {
        if (root == nullptr) {
            return nullptr;
        }
      if(root->val==data){
      return root;
      }
      else if(root->val<data){
      return searchBST(root->right,data);
      }
      else{
      return searchBST(root->left,data);
    
      }
    
    }
};
