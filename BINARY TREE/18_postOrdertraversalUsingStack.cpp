// leetcode : 145
// link : https://leetcode.com/problems/binary-tree-postorder-traversal
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        // root right left  -> reverse -> left right root
        vector<int> ans;
        stack<TreeNode*> st;
        if(root!=NULL) st.push(root);
        while(st.size()>0){
            TreeNode* temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->left!=NULL) st.push(temp->left); // left 
            if(temp->right!=NULL) st.push(temp->right); // right
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
int size(TreeNode* root){
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
int main(){
  // Tree structure:
    //             1
    //           /   \
    //         2        3
    //      /   \     /   \
    //     4     5   6     7    
    TreeNode* a=new TreeNode(1);
    TreeNode* b=new TreeNode(2);
    TreeNode* c=new TreeNode(3);
    TreeNode* d=new TreeNode(4);
    TreeNode* e=new TreeNode(5);
    TreeNode* f=new TreeNode(6);
    TreeNode* g=new TreeNode(7);
     a->left=b;
     a->right=c;
     b->left=d;
     b->right=e;
     c->left=f;
     c->right=g;
    Solution sol;
    vector<int> ans=sol.postorderTraversal(a);
    cout << "Postorder traversal: ";
    cout <<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}