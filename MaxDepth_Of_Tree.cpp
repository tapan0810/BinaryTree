#include<iostream>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int MaxDepth(TreeNode* root){
    if(!root) return 0;

    int leftDepth = MaxDepth(root -> left);
    int rightDepth = MaxDepth(root -> right);

    return max(leftDepth, rightDepth) + 1;
}

int main(){
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);

    cout<<"Maximum Depth: "<<MaxDepth(root)<<endl;

    return 0;
}