//Level
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    
    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

class Tree{
    public:
    Node *root=NULL;
    Node *create_node_and_insert(Node *root,int val){
        if(root==NULL){
            return new Node(val);
        }
        else if(val<root->data){
            root->left=create_node_and_insert(root->left,val);
        }
        else{
            root->right=create_node_and_insert(root->right,val);
        }
        return root;
    }
    
    void insert(int val){
        root=create_node_and_insert(root,val);
    }
    
    void post(){
        post_order(root);
    }
    
    void pre(){
        pre_order(root);
    }
    
    void in(){
        in_order(root);
    }
    
    void post_order(Node *root){
        if(root == NULL){
            return;
        }
        
        post_order(root->left);
        post_order(root->right);
        cout << root->data << " ";
        return;
    }
    
    void in_order(Node *root){
        if(root == NULL){
            return;
        }
        in_order(root->left);
        cout << root->data << " ";
        in_order(root->right);
        return;
    }
    
    void pre_order(Node *root){
        if(root == NULL){
            return;
        }
        cout << root->data << " ";
        pre_order(root->left);
        pre_order(root->right);
        return;
    }
    
    void com(){
        queue<Node *> q;
        isComplete(root,q);
    }
    
    void isComplete(Node *root,queue<Node *> q){
        if(!root){
            cout<<"Yes"<<endl;
            return;
        }
        q.push(root);
        while(!(q.empty())){
            int qsize=q.size();
            for(int i=0;i<qsize;i++){
                Node *nd=q.front();
                if(nd==NULL){
                    while(!q.empty()){
                        if(q.front() == NULL)
                           q.pop();
                        else{
                            cout<<"No"<<endl;
                            return;
                        }
                    }
                    cout<<"Yes"<<endl;
                    return;
                }
                else{
                    q.push(nd->left);
                    q.push(nd->right);
                    q.pop();
                }
            }
        }
            
    }
};

int main()
{
    int t,n,a,i;
    cin>>t;
    while(t--){
        Tree BST;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a;
            BST.insert(a);
        }
        BST.com();
    }
    return 0;
}