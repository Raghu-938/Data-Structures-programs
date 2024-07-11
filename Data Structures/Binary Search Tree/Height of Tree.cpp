#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
       int data;
       Node* left;
       Node* right;
       Node(int data){
           this->data=data;
           this->left=NULL;
           this->right=NULL;
       }
};

class Tree{
    public:
       Node* root=NULL;
       
       Node* insert_node_at_bst(Node* root,int data){
           if(root == NULL){
               Node* newNode=new Node(data);
               return newNode;
           }
           else if(data < root->data){
                root->left=insert_node_at_bst(root->left,data);
           }
           else
                root->right=insert_node_at_bst(root->right,data);
            return root;
       }
       
      void insertNode(int data){
           root=insert_node_at_bst(root,data);
       }
       void in(){
           inOrder(root);
       }
       
       void pre(){
           preOrder(root);
       }
       
       void post(){
           postOrder(root);
       }
       
       void postOrder(Node* root){
           if(root == NULL)
              return;
            postOrder(root->left);
            postOrder(root->right);
            cout<<root->data<<" ";
       }
       
       void preOrder(Node* root){
           if(root == NULL)
              return;
            cout<<root->data<<" ";
            preOrder(root->left);
            preOrder(root->right);
       }
       
       void inOrder(Node* root){
           if(root == NULL)
              return;
            inOrder(root->left);
            cout<<root->data<<" ";
            inOrder(root->right);
       }
       
       int findHeightOfTree(Node* root,int count,int ans){
           if(root==NULL){
               return count-1;
           }
           ans=max(findHeightOfTree(root->left,count+1,ans),findHeightOfTree(root->right,count+1,ans));
           
           return ans;
       }
       
       int findHeight(){
           return findHeightOfTree(root,0,INT_MIN);
       }
       
};

int main()
{
    int t,n,a;
    cin>>t;
    while(t--){
        Tree tr;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            tr.insertNode(a);
        }
       
        cout<<tr.findHeight();
        cout<<endl;
    }

    return 0;
}