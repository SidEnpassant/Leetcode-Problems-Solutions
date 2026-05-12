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
    vector<int> rightSideResult(TreeNode* node , int level , vector<int>& result){
        if(node == NULL) return result;

        if(level == result.size()) result.push_back(node->val);
        rightSideResult(node -> right , (level + 1) , result);
        rightSideResult(node -> left ,  (level + 1)  , result);

        return result;

    }
    vector<int> rightSideView(TreeNode* root) {
        int level = 0;
        vector<int> result;
        rightSideResult(root,level,result);
        return result;
    }
};