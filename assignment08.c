//***********************lab assignment 8
//#include<iostream>
//using namespace std;
//
//struct node{
//	struct node *left;
//	int data;
//	struct node *right;
//};
//
//int main(){
//	struct node *root=NULL, *temp;
//	
//	temp=(struct node *)malloc(sizeof(struct node));
//	temp->left=temp->right=NULL;
//	cout<<"enter data";
//	cin>>temp->data;
//	if(root=NULL){
//		root=temp;
//	}
//	cout<<root->data;
//}

//bst 
#include<iostream>
using namespace std; 
struct Node{
	Node *lchild; 
	int data; 
	Node *rchild;
}*root=NULL;

void insert(int key){
	Node *t=root;
	Node *r; 
	Node *p;
	if(root==NULL){
		p=new Node;
		p->data=key;
		p->lchild=p->rchild=NULL;
		root=p;
		return;
		//allowed even if return type of function is void
	}
	while(t!=NULL){
		r=t;
		if(key==t->data){
			return;
		}
		else if(key<t->data){
			t=t->lchild;
		}
		else 
		t=t->rchild;
	}
	p=new Node;
	p->data=key;
	p->lchild=p->rchild=NULL;
	if(key > r->data)
	r->rchild=p;
	else
	r->lchild=p;
}

void Inorder(struct Node *p){
	if(p){
		Inorder(p->lchild);
		cout<<p->data<<" ";
		Inorder(p->rchild);
	}
}

struct Node * search(int key){
	struct Node *t=root;
	while(t!=NULL){
		if(t->data==key){
			return t;
		}
		else if(t->data>key){
			t=t->lchild;
		}
		else
		t=t->rchild;
	}
	return NULL;
}

struct Node *Rinsert(struct Node *p, int key){
	struct Node *t=NULL;
	if(p==NULL){
		t=new Node; 
		t->data=key;
		t->lchild=t->rchild=NULL;
		return t;
	}
	if(key>p->data){
		p->rchild=Rinsert(p->rchild, key);
	}
	else if(key<p->data){
		p->lchild=Rinsert(p->lchild,key);
	}
	return p; 
}

int height(struct Node *p){
	int x,y;
	if(p==NULL){
		return 0;
	}
	x=height(p->lchild);
	y=height(p->rchild);
	if(x>y){
		return x+1;
	}
	else{
		return y+1;
	}
}

struct Node *InPre(struct Node *p){
	while(p && p->lchild){
		p=p->lchild;
	}
	return p;
}

struct Node *InSucc(struct Node *p){
	while(p && p->rchild){
		p=p->rchild;
	}
	return p;
}

struct Node* Delete(struct Node *p, int key){
	struct Node *q;
	if(p==NULL){
		return NULL;
	}
	if(p->lchild==NULL && p->rchild==NULL){
		if(p==root){
			root=NULL;
		}
		delete p;
		return NULL;
	}
	if(key<p->data){
		p->lchild=Delete(p->lchild,key);
	}
	else if(key>p->data){
		p->rchild=Delete(p->rchild, key);
	}
	else{
		if(height(p->lchild)>height(p->rchild)){
			q=InPre(p->lchild);
			p->data=q->data;
			p->lchild=Delete(p->lchild, key);
		}
		else{
			q=InSucc(p->rchild);
			p->data=q->data;
			p->rchild=Delete(p->rchild, key);
		}
	}
	
	return p;
}

int main(){
	struct Node *temp;
	root=Rinsert(root,10);
	Rinsert(root,5);
	Rinsert(root,20);
	Rinsert(root,8);
	Rinsert(root,30);
	
	Delete(root,20);
	
	Inorder(root);
	cout<<endl;
	temp=search(20);
	if(temp!=NULL){
		cout<<"value is found: "<<temp->data;
	}
	else
	cout<<"element is not found"<<endl;
}
