//*************************************
//#include<iostream>
//using namespace std; 
//void display(int *a, int n){
//	for(int i=0; i<n; i++){
//		cout<<a[i]<<" ";
//	}
//}
//
//void append(int *a, int n){
//	int x;
//	cout<<"enter number to append: ";
//	cin>>x;
//	int b[n+1];
//	for(int i=0; i<n+1; i++){
//		b[i]=a[i];
//	}
//	b[n]=x;
//	display(b, n+1);
//	delete a;
//
//}
//
//void insert(int *a, int n){
//	int x, index;
//	cout<<"enter number to append: ";
//	cin>>x;
//	cout<<"enter index: ";
//	cin>>index;
//	int b[n+1];
//	if(index>=0 && index<=n){
//		for(int i=0; i<index; i++){
//			b[i]=a[i];
//		}
//		b[index]=x;
//		for(int j=index+1; j<n+1; j++){
//			b[j]=a[j-1];
//		}
//		display(b,n+1);
//	}
//	else{
//		cout<<"enter valid index";
//	}
//	
//}
//
//void Delete(int *a, int n){
//	int x;
//	cout<<"enter value to delete: ";
//	cin>>x;
//	for(int i=0; i<n; i++){
//		if(a[i]==x){
//			for(int j=i;j<n;j++){
//				a[j]=a[j+1];
//			}
//		}
//	}
//	display(a,n);
//}
//
//int linearSearch(int *a, int n){
//	int x;
//	cout<<"enter value to search: ";
//	cin>>x;
//	for(int i=0; i<n; i++){
//		if(a[i]==x){
//			return i;
//		}
//	}
//	return -1;
//}
//
//int get(int *a, int n){
//	int index;
//	cout<<"enter index: ";
//	cin>>index;
//	if(index>=0 && index<n){
//		return a[index];
//	}
//	else{
//		cout<<"value not found"<<endl;
//		return 0;
//	}
//}
//
//void set(int *a, int n){
//	int index,x; 
//	cout<<"enter index: ";
//	cin>>index;
//	cout<<"enter number: ";
//	cin>>x;
//	if(index>=0 && index<n){
//		a[index]=x;
//	}
//	display(a,n);
//}
//
//int main(){
//	int n=5;
//	cout<<"enter values in array: ";
//	int a[n];
//	for(int i=0; i<n; i++){
//		cin>>a[i];
//	}
//	
//	//display(a,n);
//	//append(a,n);
//	//display(a,n);
//	//insert(a,n);
//	//Delete(a,n);
//	//cout<<"value found at index: "<<linearSearch(a,n);
//	//cout<<"value at the index is: "<<get(a,n);
//	//set(a,n);
//	cout<<sizeof();
//}
//*************************************************************
//
//#include<iostream>
//using namespace std; 
//struct array{
//	int a[10];
//	int size; 
//	int length;
//};
//
//void display(array arr){
//	for(int i=0; i<arr.length; i++){
//		cout<<arr.a[i]<<" ";
//	}
//}
//
//void add(array *arr, int x){
//	arr->a[arr->length]=x;
//	arr->length++;
//}
//
//void insert(array *arr, int index, int x){
//		if(arr->length<arr->size && index>=0 && index<arr->length){
//		int i;
//		for(i=arr->length; i>index; i--){
//			arr->a[i]=arr->a[i-1];
//		}
//		arr->a[index]=x;
//		arr->length++;
//	}
//}
//
//int Delete(array *arr, int x){
//	int i,j;
//	for(i=0; i<arr->length; i++){
//		if(arr->a[i]==x){
//			for(j=i; j<arr->length-1; j++){
//				arr->a[j]=arr->a[j+1];
//			}
//			arr->length--;
//			return i;
//		}	
//	}
//	return -1;
//}
//
//int linearSearch(array arr, int s){
//	for(int i=0; i<arr.length; i++){
//		if(arr.a[i]==s){
//			return i;
//		}
//	}
//	return -1;
//}
//
//int binarySearch(array arr, int x){
//	int m,h,l;
//	l=0;
//	h=arr.length-1;
//	
//	while(l<=h){
//		m=((l+h)/2);
//		if(arr.a[m]==x){
//			return m;
//		}
//		else if(arr.a[m]>x){
//			h=m-1;
//		}
//		else if(arr.a[m]<x)
//			l=m+1;
//	}
//	return -1;
//}
//
//void get(array arr, int index){
//	if(index>=0 && index<arr.length){
//		cout<<"value at index is: "<<arr.a[index]<<endl;
//	}
//	else 
//	cout<<"index invalid"<<endl;
//}
//
//void set(array *arr, int index, int x){
//	if(index>=0 && index<arr->length){
//		arr->a[index]=x;
//	}
//}
//
//int max(array arr){
//	int i,m=arr.a[0];
//	for(i=0; i<arr.length; i++){
//		if(arr.a[i]>m){
//			m=arr.a[i];
//		}
//	}
//	return m;
//}
//
//int min(array arr){
//	int i,m=arr.a[0];
//	for(i=0; i<arr.length; i++){
//		if(arr.a[i]<m){
//			m=arr.a[i];
//		}
//	}
//	return m;
//}
//
//void reverse(array *arr){
//	int i=0,j=arr->length-1,temp=0;
//	while(i<j){
//		temp=arr->a[i];
//		arr->a[i]=arr->a[j];
//		arr->a[j]=temp;
//		i++;
//		j--;
//	}
//}
//
//void shift(array *arr){
//	int i;
//	for(int i=0; i<arr->length; i++){
//		arr->a[i]=arr->a[i+1];
//	}
//	arr->length--;
//}
//
//void rotate(array *arr){
//	int i,x=arr->a[0];
//	for(int i=0; i<arr->length; i++){
//		arr->a[i]=arr->a[i+1];
//	}
//	arr->a[arr->length-1]=x;
//}
//
//int main(){
//	struct array arr={{2,3,5,9,10},10,5};
//	cout<<"original array: ";
//	display(arr);
//	cout<<endl;
//	
//	cout<<"element found at index using linear search: "<<linearSearch(arr,5)<<endl;
//	cout<<"element found at index using binary search: "<<binarySearch(arr,5)<<endl;
//	
//	add(&arr,8);
//	cout<<"array after adding: ";
//	display(arr);
//	cout<<endl;
//	
//	insert(&arr,2,14);
//	cout<<"array after inserting at index: ";
//	display(arr);
//	cout<<endl;
//	
//	cout<<"index deleted: "<<Delete(&arr,9)<<endl;
//	cout<<"array after deleting: ";
//	display(arr);
//	cout<<endl;
//	
//	
//	cout<<"get operation: "<<endl;
//	get(arr,3);
//	
//	set(&arr,0,1);
//	cout<<"after set operation: ";
//	display(arr);
//	cout<<endl;
//	
//	cout<<"max element is: "<<max(arr)<<endl;
//	cout<<"min element is: "<<min(arr)<<endl;
//
//	rotate(&arr);
//	cout<<"rotated array: ";
//	display(arr);
//	cout<<endl;
//	
//	shift(&arr);
//	cout<<"shifted array: ";
//	display(arr);
//	cout<<endl;
//	
//	reverse(&arr);
//	cout<<"reversed array is: ";
//	display(arr);
//	cout<<endl;
//
//}

//********************check if array sorted
//#include<iostream>
//using namespace std; 
//int isSorted(int *a, int size){
//	int i, count=0;
//	for(i=0; i<size; i++){
//		if(a[i]<a[i+1]){
//			count++;
//		}
//	}
//	if(count==size-1){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//int main(){
//	int a[]={1,2,3,6,5};
//	int size=5;
//	if(isSorted(a,size)){
//		cout<<"array is sorted"<<endl;
//	}
//	else
//	cout<<"array not sorted"<<endl;
//}

//***************************merge arrays 
//#include<iostream>
//using namespace std; 
//
//void merge(int *a, int size1, int *b, int size2){
//	int ans[size1+size2]={0};
//	int i=0,j=0,k=0;
//	for(i=0,j=0; i<size1 && j<size2;){
//		if(a[i]<b[j]){
//			ans[k++]=a[i++];
//		}
//		else
//		ans[k++]=b[j++];
//	}
//	
//	while(i<=size1-1){
//		ans[k++]=a[i++];
//	}
//	
//	while(j<=size2-1){
//		ans[k++]=b[j++];
//	}
//	
//	for(k=0; k<(size1+size2); k++){
//		cout<<ans[k]<<" ";
//	}
//}
//
//int main(){
//	int a[6]={2,4,6,8,10,12};
//	int size1=6;
//	int b[]={1,3,5,7,9,11,13,15,17};
//	int size2=9;
//	merge(a,size1,b,size2);
//}

//************************Set operations on array: Union, Intersection
//#include<iostream>
//using namespace std; 
//
//void Union(int *a, int size1, int *b, int size2){
//	int u[size1+size2]={0};
//	int inter[size1]={0};
//	int i=0,j=0,k=0,m=0;
//	for(i=0,j=0; i<size1 && j<size2;){
//		if(a[i]<b[j]){
//			u[k++]=a[i++];
//		}
//		else if(a[i]>b[j])
//		u[k++]=b[j++];
//		else{
//			inter[m++]=a[i];
//			u[k++]=a[i++];
//			j++;
//		}
//	}
//	
//	while(i<=size1-1){
//		u[k++]=a[i++];
//	}
//	
//	while(j<=size2-1){
//		u[k++]=b[j++];
//	}
//	cout<<"union is: ";
//	for(k=0; u[k]!=0; k++){
//		cout<<u[k]<<" ";
//	}
//	cout<<endl;
//	cout<<"intersection is: ";
//	for(m=0; inter[m]!=0; m++){
//		cout<<inter[m]<<" ";
//	}
//}
//
//int main(){
//	int a[6]={2,4,6,8};
//	int size1=4;
//	int b[]={1,3,4,6,9,11,13};
//	int size2=7;
//	Union(a,size1,b,size2);
//}

//***************************finding single element in array
//#include<iostream>
//using namespace std; 
//
//void single(int *a, int n, int max){
//	int count[max+1]={0};
//	for(int i=0; i<n; i++){
//			if(a[i]==a[i-1]){
//				count[a[i]]++;
//			}
//	}
//	for(int i=1; i<max+1; i++){
//		if(count[i]==0){
//			cout<<"single element is: "<<i;
//		}
//
//	}
//}
//
//int main(){
//	int a[]={1,1,2,2,3,4,4,5,5,5};
//	int n=10;
//	int max=a[0];
//	for(int i=0; i<10; i++){
//		if(a[i]>max){
//			max=a[i];
//		}
//	}
//	single(a,n,max);
//}

//***************************finding multiple elements in array
//#include<iostream>
//using namespace std; 
//int main(){
//	int n,i,j;
//	cout<<"enter number of elements"<<endl; 
//	cin>>n;
//	int a[n];
//	cout<<"enter array elements: ";
//	for(i=0; i<n; i++){
//		cin>>a[i];
//	}
//	
//	int m;
//	cout<<"enter number of elements to search: ";
//	cin>>m;
//	int b[m];
//	cout<<"enter elements to find: ";
//	for(i=0; i<m; i++){
//		cin>>b[i];
//	}
//	
//	int h[m]={0};
//	
//	for(i=0; i<n; i++){
//		for(j=0; j<m; j++){
//			if(b[j]==a[i]){
//				h[j]++;
//			}
//		}
//	}
//	
//	for(j=0; j<m; j++){
//		if(h[j]>0){
//			cout<<b[j]<<" found"<<endl;
//		}
//	}
//}

//**********************Finding duplicates in a sorted array
//#include<iostream>
//using namespace std; 
//
//void duplicate(int *a, int n, int max){
//	int count[max+1]={0};
//	for(int i=0; i<n; i++){
//			if(a[i]==a[i-1]){
//				count[a[i]]++;
//			}
//	}
//	for(int i=1; i<max+1; i++){
//		if(count[i]!=0){
//			cout<<"duplicate element is: "<<i<<endl;
//		}
//
//	}
//}
//
//int main(){
//	int a[]={1,1,2,2,3,4,4,5,5,5};
//	int n=10;
//	int max=a[0];
//	for(int i=0; i<10; i++){
//		if(a[i]>max){
//			max=a[i];
//		}
//	}
//	duplicate(a,n,max);
//}

//**********************finding duplicates in an unsorted array 
//#include<iostream>
//using namespace std;
//int main(){
//	int a[]={5,4,3,4,2,6,1,2,6,6,6,6};
//	int i=0,n, max=a[0];
//	n=sizeof(a)/sizeof(a[0]);
//	for(i=0; i<n; i++){
//		if(a[i]>max){
//			max=a[i];
//		}
//	}
//	int h[max+1]={0};
//	for(i=0; i<n; i++){
//			h[a[i]]++;
//	}
//	
//	for(i=1; i<=max; i++){
//		if(h[i]>1){
//			cout<<"duplicate: "<<i<<" occurred "<<h[i]<<" times"<<endl;
//		}
//	}
//}

//***********************finding pair of elements with sum=k
//#include<iostream>
//using namespace std; 
//int main(){
//	int sum=9;
//	int a[]={2,8,9,3,6,7};
//	int n=sizeof(a)/sizeof(a[0]);
//	int i,max=a[0];
//	for(i=0; i<n; i++){
//		if(max<a[i]){
//			max=a[i];
//		}
//	}
//
//	int h[max]={0};
//	for(i=0; i<n; i++){
//		h[a[i]]++;
//	}
//	for(i=1; i<max; i++){
//		if(h[sum-i]>0){
//			cout<<i<<" and "<<sum-i<<endl;
//			h[i]--;
//		}
//	}
//}

//*******************************vi. Finding a pair of elements with sum k in sorted array
//#include<iostream>
//using namespace std; 
//int main(){
//	int sum=9;
//	int a[]={2,3,6,7,8};
//	int n=sizeof(a)/sizeof(a[0]);
//	int i,j;
//	i=j=0;
//	for(i=0; i<n; i++){
//		for(j=i+1; j<n; j++){
//			if(a[j]==(sum-a[i])){
//				cout<<a[i]<<" and "<<a[j]<<" found"<<endl;
//			}
//		}
//	}
//}

//**********************finding min and max in a single scan 
//#include<iostream>
//using namespace std;
//int main(){
//	int a[]={3,4,8,6,2,5};
//	int n=sizeof(a)/sizeof(a[0]);
//	int min=a[0],max=a[0];
//	for(int i=0; i<n; i++){
//		if(a[i]>max){
//			max=a[i];
//		}
//		else if(a[i]<min){
//			min=a[i];
//		}
//	}
//	
//	cout<<max<<" "<<min;
//}

//---------*************************display the elements of a linked list 
//#include<iostream>
//using namespace std; 
//struct Node{
//	int data; 
//	struct Node *next;
//}*first=NULL,*second=NULL,*third=NULL;
//
//void insert(struct Node *p, int index, int x){
//	struct Node *t;
//	t=new Node;
//	t->data=x;
//	if(index==0){
//		t->next=NULL;
//		first=t;
//	}else{
//		int i=0;
//		while(i<index-1){
//			p=p->next;
//			i++;
//		}
//			t->next=p->next;
//			p->next=t;
//	}
//}
//
//void insertsec(struct Node *p, int index, int x){
//	struct Node *t;
//	t=new Node;
//	t->data=x;
//	if(index==0){
//		t->next=NULL;
//		second=t;
//	}else{
//		int i=0;
//		while(i<index-1){
//			p=p->next;
//			i++;
//		}
//			t->next=p->next;
//			p->next=t;
//	}
//}
//
//void display(struct Node *p){
//	while(p){
//		cout<<p->data<<" ";
//		p=p->next;
//	}
//}
//
//int count(struct Node *p){
//	int i=0; 
//	if(p){
//		while(p){
//			p=p->next;
//			i++;
//		}
//	}
//	return i;
//}
//
//int sum(struct Node *p){
//	int s=0;
//	while(p){
//		s=s+p->data;
//		p=p->next;
//	}
//	return s;
//}
//
//int search(struct Node *p, int x){
//	int i=0;
//	while(p){
//		i++;
//		if(p->data==x){
//			return i;
//		}
//		p=p->next;
//	}	
//	return -1;
//}
//
//int isSorted(struct Node *p){
//	while(p->next){
//		if(p->next->data < p->data){
//			return 0;
//		}
//		p=p->next;
//	}
//	return 1;
//}
//
//void reverse(struct Node *current){
//	struct Node *prev, *next;
//	prev=next=NULL;
//	while(current!=NULL){
//		next=current->next;
//		current->next=prev;
//		prev=current; 
//		current=next;
//	}
//	first=prev;
//}
//
//void Delete(struct Node *p, int index){
//	struct Node *t;
//	t=p;
//	if(index==0){
//		p=p->next;
//		first=p;
//		delete t;
//	}else{
//		int i=0; 
//		while(i<=index-1){
//			t=p;
//			p=p->next;
//			i++;
//		}
//		if(p->next)
//		t->next=p->next;
//		else 
//		t->next=NULL;
//	}
//}
//
//void concat(struct Node *p, struct Node *q){
//	while(p->next){
//		p=p->next;
//	}
//	p->next=q;
//}
//
//void merge(struct Node *p, struct Node *q){
//	struct Node *a; 
//	a=new Node;
//	a->data=0;
//	while(p->next && q->next){
//		if(p->data < q->data){
//			a->next=p;
//			a=p;
//			p=p->next;
//		}
//		else if(p->data > q->data){
//			a->next=q;
//			a=q;
//			q=q->next;
//		}	
//	}
//	if(p->next!=NULL && q->next==NULL){
//		q->next=p;
//	}
//	if(q->next!=NULL && p->next==NULL){
//		p->next=q;
//	}
//}
//
//void circularLinkedList(struct Node *p, int *a, int n){
//	p=new Node;
//	p->data=a[0];
//	p->next=p;
//	third=p;
//	
//	for(int i=1; i<n; i++){
//		struct Node *t;
//		t=new Node;
//		t->data=a[i];
//		p->next=t;
//		t->next=third;
//		p=p->next;
//	}
//}
//
//void displayCircularLL(struct Node *p){
//	do{
//		cout<<p->data<<" ";
//		p=p->next;
//		
//	}while(p!=third);
//	
//}
//
//
//int main(){
//	
//	insert(first,0,3);
//	insert(first,1,6);
//	insert(first,2,7);
//	insert(first,3,8);
//	cout<<"first linked list is: ";
//	display(first);
//	cout<<endl;
//	
//	insertsec(second,0,4);
//	insertsec(second,1,5);
//	insertsec(second,2,9);
//	insertsec(second,3,10);
//	cout<<"second linked list is: ";
//	display(second);
//	cout<<endl;
//	
//	concat(first,second);
//	cout<<"after concatinating: ";
//	display(first);
//	
////	cout<<"after merging: ";
////	merge(first,second);
////	display(first);
////	cout<<endl;
//	
//	cout<<"number of elements: "<<count(first)<<endl;
//	cout<<"sum of elements: "<<sum(first)<<endl;
//	cout<<"element found at: "<<search(first,8)<<endl;
//	if(isSorted(first)){
//		cout<<"linked list is sorted"<<endl;
//	}else{
//		cout<<"it is not sorted"<<endl;
//	}
//	Delete(first,0);
//	cout<<"after deleting: ";
//	display(first);
//	cout<<endl;
//	
//	reverse(first);
//	cout<<"after reversing: ";
//	display(first);
//	cout<<endl;
//	
//	cout<<endl;
//	int a[]={2,3,6,8,9};
//	int n=sizeof(a)/sizeof(a[0]);
//	circularLinkedList(third,a,n);
//	cout<<"Circular linked list is: "<<endl;
//	displayCircularLL(third);
//	
//}

//Create a doubly LL, insert in a doubly LL and reverse a doubly LL.
//#include<iostream>
//using namespace std; 
//struct Node{
//	struct Node *prev; 
//	int data; 
//	struct Node *next;
//}*first=NULL;
//
//void create(struct Node *p, int *a, int n){
//	p=new Node;
//	p->data=a[0];
//	p->prev=p->next=NULL;
//	first=p;
//	for(int i=1; i<n; i++){
//		struct Node *t; 
//		t=new Node;
//		t->data=a[i];
//		t->next=NULL;
//		t->prev=p;
//		p->next=t;
//		p=t;
//	}
//}
//
//void display(struct Node *p){
//	while(p){
//		cout<<p->data<<" ";
//		p=p->next;
//	}
//}
//
//void insert(struct Node *p, int index, int x, int n){
//		if(index>=0 && index<=n){
//					struct Node *t; 
//		t=new Node;
//		t->data=x;
//		t->next=t->prev=NULL;
//		if(index==0){
//			t->next=first;
//			first->prev=t;
//			first=t;
//		}
//		else{
//			int i=0;
//			while(i<index-1){
//			p=p->next;
//			i++;
//		}
//		t->prev=p;
//		t->next=p->next;
//		p->next=t;
//		p->next->prev=t;
//		}
//		}
//}
//
//void reverse(struct Node *c){
//	struct Node *n, *p;
//	n=p=NULL;
//	while(c){
//		n=c->next;
//		c->next=p;
//		c->prev=n;
//		p=c;
//		c=n;
//	}
//	first=p;	
//}
//
//int main(){
//	int a[]={1,2,3,4,5};
//	int n=5;
//	create(first,a,n);
//	insert(first,5,9,n);
//	cout<<"after inserting: ";
//	display(first);
//	cout<<endl;
//	
//	
//	reverse(first);
//	cout<<"after reversing: ";
//	display(first);
//}
