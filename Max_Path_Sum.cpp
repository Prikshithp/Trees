class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxPath(root,maxi);
        return maxi;
    }
    int maxPath(TreeNode* node,int &maxi){
        if(node==NULL){
            return 0;
        }
        int leftH=max(0,maxPath(node->left,maxi));
         int rightH=max(0,maxPath(node->right,maxi));
         maxi=max(maxi,leftH + rightH + node->val);
         return max(leftH,rightH)+node->val;
    }
};
