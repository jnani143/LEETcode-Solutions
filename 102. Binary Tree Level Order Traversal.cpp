Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

  Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]

  Constraints:

The number of nodes in the tree is in the range [0, 2000].
-1000 <= Node.val <= 1000

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root==NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> v;
            int c=q.size();
            while(c)
            {
                root=q.front();
                q.pop();
                v.push_back(root->val);
                if(root->left) q.push(root->left);
                
                if(root->right) q.push(root->right);
                --c;
            }
            res.push_back(v);
        }
        return res;
        
    }
};
