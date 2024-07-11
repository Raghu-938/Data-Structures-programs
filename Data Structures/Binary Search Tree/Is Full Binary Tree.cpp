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
       
       int findDepthOfTree(Node* root,int count,int ans){
           if(root->data == ans){
              return count;
           }
           
           else if(ans > root->data){
              return findDepthOfTree(root->right,count+1,ans);
           }
          
             return findDepthOfTree(root->left,count+1,ans);
           //return ans;
       }
       
       void findDepth(int val){
           findDepthOfTree(root,0,val);
       }
       
       bool levelOrderBST(queue<Node*>& q){
           if(q.empty())
                return true;
            int size=q.size();
           while(size--){
               if((q.front()->left != NULL && q.front()->right == NULL) ||(q.front()->right != NULL && q.front()->left == NULL))
                  return false;
                if(q.front()->left != NULL)
                    q.push(q.front()->left);
                if(q.front()->right != NULL)
                    q.push(q.front()->right);
                q.pop();
           }
           return levelOrderBST(q);
       }
       
       bool levelOrder(queue<Node*>& q){
           q.push(root);
           return levelOrderBST(q);
       }
       
       bool isFullBST(Node* root){
             if(root==NULL)
                 return true;
             if(!((root->left != NULL && root->right != NULL) || (root->right == NULL && root->left == NULL)))
              return false;
             return isFullBST(root->left) || isFullBST(root->right);
       }
       
    //   bool isFullBST(Node* root){
    //         if(root==NULL)
    //             return true;
    //         if((root->left != NULL && root->right != NULL) || (root->right == NULL && root->left == NULL))
    //             return isFullBST(root->left)|| isFullBST(root->right);
    //         return false;
    //   }
       
       bool isFull(){
           return isFullBST(root);
       }
       
       
};

int main()
{
    int t,n,a;
    cin>>t;
    while(t--){
        Tree t;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            t.insertNode(a);
        }
        queue<Node*> q;
        if(t.levelOrder(q))
          cout<<"True"<<endl;
        else
           cout<<"False"<<endl;
    }

    return 0;
}