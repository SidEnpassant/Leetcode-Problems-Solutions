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


//NORMAL APPROACH

// class Solution {
// public:
//     void preorder(TreeNode* root , vector<int>& list){
//         if(root == nullptr) return;
//         list.push_back(root->val);
//         preorder(root->left , list);
//         preorder(root->right , list);
//     }
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> list;
       
//         preorder(root , list);
//         return list;
//     }
// };


/// ITERATIVE APPROACH

class Solution {
public:
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        if(root == NULL) return preorder;

        stack<TreeNode*> st;
        st.push(root);
       
        while(!st.empty()){
            root = st.top();
            st.pop();
            preorder.push_back(root -> val);
            if(root -> right != NULL){
                st.push(root -> right);
            }
            if(root -> left != NULL){
                st.push(root -> left);
            }
        }
        return preorder;
    }
};