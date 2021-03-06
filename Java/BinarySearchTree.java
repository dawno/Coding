import java.io.*;
class BST{

    class Node{
        int key;
        Node left,right;
        public Node(int item){
           left=right=null;
        }
    }
    Node root;
    BST(){
        root=null;
    }
    void insert(int key){
        root=insertRec(root,key);

    }
    Node insertRec(Node root, int key){
        if(root==null){
            root= new Node(key);
            return root;
        }
        if(key<root.key){
            root.left=insertRec(root.left,key);
        }else if(key>root.key){
            root.right= insertRec(root.right,key);
        }

        return root;
    }
    void inorder(){
        inorderRec(root);
    }
    public static void main(String[]args){

    }
}