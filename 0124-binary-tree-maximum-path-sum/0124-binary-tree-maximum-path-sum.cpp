/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {} 
 * };
 */
class Solution { 
public:
    int maxPath(TreeNode* node , int& maxi){ // int& maxi because every recursive call will update the same variable not make copy

        if(node == NULL) return 0;

        int leftSum = max(0,maxPath(node -> left , maxi));// taking max with comparing with 0 because to avoid negative path sum 
        int rightSum = max(0,maxPath(node -> right , maxi));// taking max with comparing with 0 because to avoid negative path sum 
        maxi = max(maxi , leftSum + rightSum + node->val);
        return node->val + max(leftSum , rightSum);

    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxPath(root,maxi);

        return maxi;
    }
};