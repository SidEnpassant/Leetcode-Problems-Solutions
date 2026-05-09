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

// RECURSIVE
// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//         if(root == NULL) return 0;

//         int leftHeight = maxDepth(root -> left);       
//         int rightHeight = maxDepth(root -> right); 

//         return 1 + max(leftHeight , rightHeight);
//     }
// };

//level order
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int depth = 0;
        if(root == NULL) return 0;

        queue<TreeNode*> qu; //FIFO 
        qu.push(root);

        while(!qu.empty()){
            int size = qu.size();
            depth++;
            for(int i = 0 ; i < size ; i++){
                TreeNode* temp = qu.front();
                qu.pop();
                if(temp -> left != NULL) qu.push(temp -> left);
                if(temp -> right != NULL) qu.push(temp -> right);
            }
        }
        return depth;
    }
};