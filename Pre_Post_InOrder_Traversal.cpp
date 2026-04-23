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

void PreOrderTraversal(TreeNode* root){
    if(!root) return ;

    cout<<root ->data<<" ";
    PreOrderTraversal(root -> left);
    PreOrderTraversal(root -> right);
}

void PostOrderTraversal(TreeNode* root){
    if(!root) return ;

    PostOrderTraversal(root -> left);
    PostOrderTraversal(root -> right);
    cout<<root ->data<<" ";
}

void InOrderTraversal(TreeNode* root){
    if(!root) return ;

    InOrderTraversal(root -> left);
    cout<<root ->data<<" ";
    InOrderTraversal(root -> right);
}   

int main(){
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);

    cout<<"PreOrder Traversal: ";
    PreOrderTraversal(root);
    cout<<endl;

    cout<<"PostOrder Traversal: ";
    PostOrderTraversal(root);
    cout<<endl;

    cout<<"InOrder Traversal: ";
    InOrderTraversal(root);
    cout<<endl;

    return 0;

}