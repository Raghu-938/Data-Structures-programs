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
       
       void levelOrderBST(queue<Node*>& q){
           if(q.empty())
                return;
            int size=q.size();
           while(size--){
               cout<<q.front()->data<<" ";
                if(q.front()->left != NULL)
                    q.push(q.front()->left);
                if(q.front()->right != NULL)
                    q.push(q.front()->right);
                q.pop();
           }
           cout<<"\n";
           levelOrderBST(q);
       }
       
       void levelOrder(queue<Node*>& q){
           q.push(root);
           levelOrderBST(q);
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
        t.levelOrder(q);
        cout<<endl;
    }

    return 0;
}