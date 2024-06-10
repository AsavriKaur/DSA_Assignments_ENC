//**************************assignment 5

//***************************question 4
//#include<iostream>
//using namespace std; 
//struct stack{
//	int *s;
//	int size; 
//	int top; 
//};
//
//void create(stack *st){
//	st->top=-1;
//	cout<<"enter size: ";
//	cin>>st->size;
//	st->s=new int[st->size];
//}
//
//int isfull(stack *st){
//	if(st->top==st->size-1){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//
//int isempty(stack *st){
//	if(st->top==-1){
//		return 1;
//	}
//	return 0;
//}
//
//void push(stack *st, int x){
//	if(isfull(st)){
//		cout<<"overflow"<<endl;
//	}
//	else{
//		st->top++;
//		st->s[st->top]=x;
//	}
//}
//
//int pop(stack *st){
//	int x;
//	if(isempty(st)){
//		x=0;
//	}else{
//		x=st->s[st->top];
//		st->top--;
//	}
//	return x;
//	
//}
//
//int check(char exp[], stack *st){
//	int i;
//	i=0;
//	for(i=0; exp[i]!='\0';i++){
//		if(exp[i]=='('){
//			if(!isfull(st)){
//				push(st,'(');
//			}
//		}
//		if(exp[i]==')'){
//			if(isempty(st)){
//				return 0;
//			}
//			else{
//				pop(st);
//			}
//		}
//	}
//	if(isempty(st)){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//
//
//int main(){
//	char exp[]="(a+b)*(c+d)";
//	stack st;
//	create(&st);
//	if(check(exp,&st)){
//		cout<<"balanced"<<endl;
//	}
//	else{
//		cout<<"imbalanced"<<endl;
//	}
//}

////*******************************question 1
//#include<iostream>
//using namespace std; 
//
//int main(){
//	int n,w, i, j;
//	cout<<"enter size of array: ";
//	cin>>n;
//	cout<<"enter window size: ";
//	cin>>w;
//	int a[n];
//	int b[i-w+1];
//	//size of b based on observation
//	
//	//initializing a;
//	
//	cout<<"enter values of a: ";
//	for(i=0; i<n; i++){
//		cin>>a[i];
//	}
//	
//	for(i=0; i<n-w+1; i++){
//		
//		if(i==0){
//			for(j=0; j<w; j++){
//				if(a[j]>a[i]){
//					b[i]=a[j];
//				}
//			}
//		}
//		else{
//			if(a[i+w-1]>b[i-1]){
//				b[i]=a[i+w-1];
//				//we only need to compare with the new number considered with the shift of window as we know max of previous
//			}
//			else{
//				b[i]=b[i-1];
//				//if the next element is not greater then the new value of b[i] remains same as previous value
//			}
//		}
//		
//	}
//	
//	cout<<"max element array is: ";
//	for(i=0; i<n-w+1; i++){
//		cout<<b[i]<<" ";
//	}
//	
//}

//******************************question 2
//#include<iostream>
//using namespace std; 
//struct node{
//	int data; 
//	node *next;
//}*first=NULL, *rear=NULL;
//
//void insertEnd(node *q, int x){
//	node *t; 
//	t=new node;
//	t->data=x;
//	t->next=NULL;
//	if(q==NULL){
//		q=t;
//		first=q;
//	}
//	else{
//		while(q->next){
//				q=q->next;	
//		}
//		q->next=t;
//	}
//	rear=t;
//}
//
//void display(node *first){
//	node *p;
//	p=first;
//	while(p){
//		cout<<p->data<<" ";
//		p=p->next;
//	}
//}
//
//void fun(node *p){
//	node *f,*r,*t;
//	f=new node;
//	r=new node;
//	t=new node;
//	f=first;
//	r=rear;
//	while(p->next!=rear){
//		p=p->next;
//	}
//	t=f->next;
//	
//	while(t!=NULL){
//		p->next=NULL;
//		f->next=r;
//		r->next=t;
//		f=t;
//		t=t->next;
//		r=p;
//		p=f;
//		if(p->next){
//			if(p->next->next){
//						while(p->next->next){
//						p=p->next;
//						}
//			}
//		}
//		
//	}
//}
//
//int main(){
//	insertEnd(first,1);
//	insertEnd(first,2);
//	insertEnd(first,3);
//	insertEnd(first,4);
//	insertEnd(first,5);
//	insertEnd(first,6);
//	insertEnd(first,7);
//	
//	fun(first);
//	display(first);
//}


//question 3
#include<iostream>
using namespace std; 

//int check(char exp[], stack *st){
//	int i;
//	i=0;
//	for(i=0; exp[i]!='\0';i++){
//		if(exp[i]=='('){
//			if(!isfull(st)){
//				push(st,'(');
//			}
//		}
//		if(exp[i]==')'){
//			if(isempty(st)){
//				return 0;
//			}
//			else{
//				pop(st);
//			}
//		}
//	}
//	if(isempty(st)){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//
//
//int main(){
//	char exp[]="(a+b)*(c+d)";
//	stack st;
//	create(&st);
//	if(check(exp,&st)){
//		cout<<"balanced"<<endl;
//	}
//	else{
//		cout<<"imbalanced"<<endl;
//	}
//}

////*******************************question 1
//#include<iostream>
//using namespace std; 
//
//int main(){
//	int n,w, i, j;
//	cout<<"enter size of array: ";
//	cin>>n;
//	cout<<"enter window size: ";
//	cin>>w;
//	int a[n];
//	int b[i-w+1];
//	//size of b based on observation
//	
//	//initializing a;
//	
//	cout<<"enter values of a: ";
//	for(i=0; i<n; i++){
//		cin>>a[i];
//	}
//	
//	for(i=0; i<n-w+1; i++){
//		
//		if(i==0){
//			for(j=0; j<w; j++){
//				if(a[j]>a[i]){
//					b[i]=a[j];
//				}
//			}
//		}
//		else{
//			if(a[i+w-1]>b[i-1]){
//				b[i]=a[i+w-1];
//				//we only need to compare with the new number considered with the shift of window as we know max of previous
//			}
//			else{
//				b[i]=b[i-1];
//				//if the next element is not greater then the new value of b[i] remains same as previous value
//			}
//		}
//		
//	}
//	
//	cout<<"max element array is: ";
//	for(i=0; i<n-w+1; i++){
//		cout<<b[i]<<" ";
//	}
//	
//}

//******************************question 2
//#include<iostream>
//using namespace std; 
//struct node{
//	int data; 
//	node *next;
//}*first=NULL, *rear=NULL;
//
//void insertEnd(node *q, int x){
//	node *t; 
//	t=new node;
//	t->data=x;
//	t->next=NULL;
//	if(q==NULL){
//		q=t;
//		first=q;
//	}
//	else{
//		while(q->next){
//				q=q->next;	
//		}
//		q->next=t;
//	}
//	rear=t;
//}
//
//void display(node *first){
//	node *p;
//	p=first;
//	while(p){
//		cout<<p->data<<" ";
//		p=p->next;
//	}
//}
//
//void fun(node *p){
//	node *f,*r,*t;
//	f=new node;
//	r=new node;
//	t=new node;
//	f=first;
//	r=rear;
//	while(p->next!=rear){
//		p=p->next;
//	}
//	t=f->next;
//	
//	while(t!=NULL){
//		p->next=NULL;
//		f->next=r;
//		r->next=t;
//		f=t;
//		t=t->next;
//		r=p;
//		p=f;
//		if(p->next){
//			if(p->next->next){
//						while(p->next->next){
//						p=p->next;
//						}
//			}
//		}
//		
//	}
//}
//
//int main(){
//	insertEnd(first,1);
//	insertEnd(first,2);
//	insertEnd(first,3);
//	insertEnd(first,4);
//	insertEnd(first,5);
//	insertEnd(first,6);
//	insertEnd(first,7);
//	
//	fun(first);
//	display(first);
//}


//question 3
#include<iostream>
using namespace std; 

//int check(char exp[], stack *st){
//	int i;
//	i=0;
//	for(i=0; exp[i]!='\0';i++){
//		if(exp[i]=='('){
//			if(!isfull(st)){
//				push(st,'(');
//			}
//		}
//		if(exp[i]==')'){
//			if(isempty(st)){
//				return 0;
//			}
//			else{
//				pop(st);
//			}
//		}
//	}
//	if(isempty(st)){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//
//
//int main(){
//	char exp[]="(a+b)*(c+d)";
//	stack st;
//	create(&st);
//	if(check(exp,&st)){
//		cout<<"balanced"<<endl;
//	}
//	else{
//		cout<<"imbalanced"<<endl;
//	}
//}

////*******************************question 1
//#include<iostream>
//using namespace std; 
//
//int main(){
//	int n,w, i, j;
//	cout<<"enter size of array: ";
//	cin>>n;
//	cout<<"enter window size: ";
//	cin>>w;
//	int a[n];
//	int b[i-w+1];
//	//size of b based on observation
//	
//	//initializing a;
//	
//	cout<<"enter values of a: ";
//	for(i=0; i<n; i++){
//		cin>>a[i];
//	}
//	
//	for(i=0; i<n-w+1; i++){
//		
//		if(i==0){
//			for(j=0; j<w; j++){
//				if(a[j]>a[i]){
//					b[i]=a[j];
//				}
//			}
//		}
//		else{
//			if(a[i+w-1]>b[i-1]){
//				b[i]=a[i+w-1];
//				//we only need to compare with the new number considered with the shift of window as we know max of previous
//			}
//			else{
//				b[i]=b[i-1];
//				//if the next element is not greater then the new value of b[i] remains same as previous value
//			}
//		}
//		
//	}
//	
//	cout<<"max element array is: ";
//	for(i=0; i<n-w+1; i++){
//		cout<<b[i]<<" ";
//	}
//	
//}

//******************************question 2
#include<iostream>
using namespace std; 
struct node{
	int data; 
	node *next;
}*first=NULL, *rear=NULL;

void insertEnd(node *q, int x){
	node *t; 
	t=new node;
	t->data=x;
	t->next=NULL;
	if(q==NULL){
		q=t;
		first=q;
	}
	else{
		while(q->next){
				q=q->next;	
		}
		q->next=t;
	}
	rear=t;
}

void display(node *first){
	node *p;
	p=first;
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
}

void fun(node *p){
	node *f,*r,*t;
	f=new node;
	r=new node;
	t=new node;
	f=first;
	r=rear;
	while(p->next!=rear){
		p=p->next;
	}
	t=f->next;
	
	while(t!=NULL){
		p->next=NULL;
		f->next=r;
		r->next=t;
		f=t;
		t=t->next;
		r=p;
		p=f;
		if(p->next){
			if(p->next->next){
						while(p->next->next){
						p=p->next;
						}
			}
		}
		
	}
}

int main(){
	insertEnd(first,1);
	insertEnd(first,2);
	insertEnd(first,3);
	insertEnd(first,4);
	insertEnd(first,5);
	insertEnd(first,6);
	insertEnd(first,7);
	
	fun(first);
	display(first);
}


//****************question 3
//#include<iostream>
//using namespace std; 
//struct stack{
//	char *s;
//	int size; 
//	int top; 
//};
//
//void create(stack *st){
//	st->top=-1;
//	st->size=30;
//	st->s=new char[st->size];
//}
//
//int isfull(stack *st){
//	if(st->top==st->size-1){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//
//int isempty(stack *st){
//	if(st->top==-1){
//		return 1;
//	}
//	return 0;
//}
//
//void push(stack *st, char x){
//	if(isfull(st)){
//		cout<<"overflow"<<endl;
//	}
//	else{
//		st->top++;
//		st->s[st->top]=x;
//	}
//}
//
//char pop(stack *st){
//	char x;
//	int i=0;;
//	if(isempty(st)){
//		cout<<"underflow"<<endl;
//	}else{
//		x=st->s[st->top];
//		st->top--;
//	}
//	return x;
//	
//}
//
//int isoperand(char x){
//	if(x=='+'||x=='-'||x=='*'||x=='/'||x=='('||x==')'){
//		return 0;
//	}
//	return 1;
//}
//
//int pre(char x){
//	if(x=='+'||x=='-'){
//		return 1;
//	}
//	if(x=='*'||x=='/'){
//		return 2;
//	}
//}
//
//void post(char exp[], stack *st){
//	int i,k=0;
//	char a[30];
//	for(i=0; exp[i]!='\0';i++){
//		
//		if(isoperand(exp[i])){
//			a[k++]=exp[i];
//		}
//		else{
//		if(exp[i]=='('){
//			push(st,'(');
//		}
//		else if(exp[i]==')'){
//			while(st->s[st->top]!='(' && !isempty(st)){
//					a[k++]=pop(st);
//				}
//			if(st->s[st->top]=='('){
//				pop(st);
//			}
//		}
//		else if(st->s[st->top]=='('){
//			push(st,exp[i]);
//		}
//		else if(!isempty(st) && (pre(exp[i])>pre(st->s[st->top])) && exp[i]!='('){
//			push(st,exp[i]);
//		}
//		else{
//			while(!isempty(st) && pre(exp[i])<=pre(st->s[st->top]) && st->s[st->top]!='('){
//				a[k++]=pop(st);
//			}
//			push(st,exp[i]);
//		}
//	
//		}
//	}
//	
//	while(!isempty(st)){
//		a[k++]=pop(st);
//	}
//	
//	a[k]='\0';
//	for(k=0; a[k]!='\0';k++){
//		cout<<a[k]<<" ";
//	
//	}
//	cout<<endl;
//}
//
//int eval(int x1, int x2, char c){
//	switch(c){
//		case '+': return x1+x2;
//		break;
//		case '-': return x1-x2; 
//		break;
//		case '*': return x1*x2; 
//		break;
//		case '/': return x1/x2;
//		break;
//		default: cout<<"invalid";
//	}
//}
//
//int evalExp(char exp[], stack *st){
//	int x1,x2,i=0;
//	while(exp[i]!='\0'){
//		if(isoperand(exp[i])){
//			push(st,(exp[i]-'0'));
//			i++;
//		}
//		else{
//			x1=pop(st);
//			x2=pop(st);
//			push(st,eval(x2,x1,exp[i]));
//			i++;
//		}
//	}
//	return pop(st);
//}
//
////for evaluating expression, we assume a=4, b=3, c=8, d=6, e=5, f=0
//
//int main(){
//	stack st; 
//	create(&st);
//	char exp[]="(A*B-(C-D))/(E+F)";
//	post(exp,&st);
//	//new expression, assuming a=4, b=3, c=8, d=6, e=5, f=0
//	char exp2[]="43*86--50+/";
//	cout<<evalExp(exp2,&st);
//}


//question 1
//#include<iostream>
//using namespace std; 
//class dq{
//	private: 
//	int a[10];
//	int rear; 
//	int front; 
//	int size; 
//	public: 
//	dq(int size){
//		front=-1;
//		rear=0;
//		this->size=size;
//	}
//	
//	int isempty();
//	void insrear(int x);
//	void delrear();
//	int peakfront();
//	int peaklast();
//	void delfront();
//	void find(int a[], int n, int w);
//};
//
//int dq::isempty(){
//	if(front==(-1)){
//		return 1;
//	}
//	return 0;
//}
//
//void dq::insrear(int x){
//	if(front==(-1)){
//		front=0;
//		rear=0;
//	}
//	
//	else if(rear==size-1){
//		rear=0;
//	}
//	
//	else{
//		rear=rear+1;
//	}
//	
//	a[rear]=x;
//}
//
//void dq::delrear(){
//	if (front == rear) {
//    front = -1;
//    rear = -1;
//  } else if (rear == 0)
//    rear = size - 1;
//  else
//    rear = rear - 1;
//}
//
//void dq::delfront(){
//	 if (front == rear) {
//    front = -1;
//    rear = -1;
//  } else if (front == size - 1)
//    front = 0;
//
//  else
//    front = front + 1;
//}
//
//int dq::peakfront(){
//	return a[front];
//}
//
//int dq::peaklast(){
//	return a[rear];
//}
//
//void dq::find(int a[], int n, int w){
//	int b[n-w+1];
//	int i,k=0;
//	
//	for(i=0; i<n; i++){
//		if(!isempty() && peaklast()==i-w){
//			delfront();
//		}
//	}
//	
//	for (i = 0; i < n; i++) {
//        while (!isempty() && a[peaklast()] <= a[i]) {
//            delrear();
//        }
//
//        insrear(i);
//
//        if (i >= w - 1) {
//            b[k++] = a[peakfront()];
//        }
//    }
//	
//	for(k=0; k<(n-w+1); k++){
//		cout<<b[k]<<" ";
//	}
//}
//
//
//int main(){
//	dq d(10);
//	int a[]={1,3,-1,-3,5,3,6,7};
//	d.find(a,8,3);
//}

