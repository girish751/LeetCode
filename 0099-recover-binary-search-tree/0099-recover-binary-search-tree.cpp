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
    TreeNode* first = nullptr; // First misplaced node
    TreeNode* second = nullptr; // Second misplaced node
    TreeNode* prev = nullptr; // Keeps track of the previous node during traversal

    void recoverTree(TreeNode* root) {
        inorder(root);

        // Swap the values of the two nodes
        if (first && second) {
            int temp = first->val;
            first->val = second->val;
            second->val = temp;
        }
    }

    void inorder(TreeNode* node) {
        if (!node) return;

        inorder(node->left);

        if (prev && prev->val > node->val) {
            if (!first) {
                first = prev; 
            }
            second = node; 
        }
        prev = node; 

        inorder(node->right); 
    }
};