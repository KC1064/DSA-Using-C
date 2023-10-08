//Implementation of Binary Search Tree
#include<stdio.h>
#include<stdlib.h>
typedef struct bst{
	struct bst *left,*right;
	int info;
}bst;

bst* create_node(int key){
	bst *p;
	p=(bst*)malloc(sizeof(bst));
	p->info=key;
	p->left=NULL;
	p->right=NULL;	
}

bst* insert(bst* root, int key){
	if(root==NULL){
		root=create_node(key);
	}
	else{
		if(key<root->info){
			root->left=insert(root->left,key);
		}
		else if(key>root->info){
			root->right=insert(root->right,key);
		}
	}
	return root;
}


void preorder(bst *root){
	if(root!=NULL){
		printf("%d\t",root->info);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(bst* root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->info);
	}
}

void inorder(bst* root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d\t",root->info);
		inorder(root->right);
	}
}
main(){
	bst *root;
	int ch,
}
