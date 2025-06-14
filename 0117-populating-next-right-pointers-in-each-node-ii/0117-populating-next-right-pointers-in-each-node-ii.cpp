/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)  return NULL;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* pre = nullptr;
            int n = q.size();
            for(int i=0;i<n;i++){
                Node* cur = q.front();
                q.pop();
                // Connect to the cur 
                if(pre!=nullptr)pre->next = cur;
                // store the cur in pre
                pre = cur;
                if(cur->left)  q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
        }
        return root;
    }
};