#include<iostream>
#include<queue>
#include<vector>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

};

int printLevelorder (Node *root, int arr[],int md,int lev,int x){
     //cout<<" 1";
    vector<int> le[200];
    int h=0;
    if(root==NULL){
        return 0;
    }
    queue<Node*>q;
    q.push(root);
    while(q.empty()==false){
        //cout<<h<<" 1";
        int nodecount=q.size();
        while(nodecount > 0){
            Node *node=q.front();
             le[h].push_back(node->data);
            q.pop();
            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL){
                q.push(node->right);
                }
                nodecount--;
        }
        h++;
    }
    int level = lev %(md);

    int min= INT_MAX;
    int mi=-1;

   for(int i=0;i<le[level].size();i++){

        if(arr[le[level][i]-1]>x){
            if(min>abs(arr[le[level][i]-1]-x)){
                min= abs(arr[le[level][i]-1]-x);
                mi= arr[le[level][i]-1];
            }
        }
    }
    return mi;
}
int Maxdepth(Node *node){
    if(node==NULL){
        return 0;
    }
    else{
        int ldepth= Maxdepth(node->left);
        int rdepth= Maxdepth(node->right);

    if(ldepth>rdepth){
        return ldepth+1;
    }
    else{
        return rdepth+1;
    }}
}
Node* newNode(int data){
    Node *temp= new Node;
    temp->data= data;
    temp->left=temp->right =NULL;
    return temp;
}
int main(){
    int n,q;
    cin>>n;
    cin>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   Node *root= newNode(1);
    root->left= newNode(2);
    root->right= newNode(3);
    root->left->left= newNode(4);
    root->left->right= newNode(5);
    root->right->left= newNode(6);
    /* Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->right = newNode(6); */
    int md= Maxdepth(root);
    //cout<<n<<" "<<q;
    for(int i=0;i<q;i++){
        //cout<<i<<" hello";
        int l,x;
        cin>>l;

        cin>>x;

        int c= printLevelorder(root, arr,  md,  l,x);
        cout<<c<<endl;
    }
}
