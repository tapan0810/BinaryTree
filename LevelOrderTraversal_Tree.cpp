#include<iostream>
#include<queue>
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

void LevelOrderTraversal(TreeNode* root){
    if(!root) return;

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode* current = q.front();
        q.pop();

        cout<<current -> data<<" ";

        if(current -> left) q.push(current -> left);
        if(current -> right) q.push(current -> right);
    }
}

int main(){
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);

    cout << "Level Order Traversal: ";
    LevelOrderTraversal(root);
    cout << endl;

    return 0;
}