////assignment 6 
////bubble sort
//
//#include<iostream>
//using namespace std; 
//
//struct array{
//	int size; 
//	int *a;
//};
//
//void swap(int *x, int *y){
//	int t;
//	t=*x;
//	*x=*y;
//	*y=t;
//}
//
////bubble sort 
//void bubble(array *arr){
//	int i,j,n;
//	n=arr->size;
//	for(int i=0; i<n-1; i++){
//		for(j=0; j<n-1-i; j++){
//			//j is till n-1-i as in bubble sort, the heaviest element goes to end, so we don't need to swap beyond that.
//			if(arr->a[j]>arr->a[j+1]){
//				swap(&arr->a[j],&arr->a[j+1]);
//			}	
//		}
//	}
//}
//
////insertion sort using arrays 
//void inserta(array *arr){
//	int i, j, t;
//	
//	for(i=1; i<arr->size; i++){
//		t=arr->a[i];
//		for(j=i-1; j>=0; j--){
//			if(arr->a[j]>t){
//				arr->a[j+1]=arr->a[j];
//			}
//			if(arr->a[j]<=t){
//				break;
//			}
//		}
//		arr->a[j+1]=t;
//	}
//}
//
//void selection(array *arr){
//	int i,j,k;
//	for(i=0; i<arr->size; i++){
//		j=k=i;
//		for(j=i+1; j<arr->size; j++){
//			if(arr->a[j]<arr->a[k]){
//				k=j;
//			}
//		}
//		swap(&arr->a[k],&arr->a[i]);
//	}
//}
//
//void shell(array *arr){
//	int i,j,k,gap;
//	for(gap=(arr->size)/2; gap>=1; gap=gap/2){
//		for(j=gap, i=0; j<arr->size; j++,i++){
//			if(arr->a[i]>arr->a[j]){
//				swap(&arr->a[i], &arr->a[j]);
//				for(k=i-gap; k>=0; k=k-gap){
//					if(arr->a[k]>arr->a[i]){
//						swap(&arr->a[i], &arr->a[k]);
//					}
//				}
//			}
//		}
//	}
//}
//
//
//
//void display(array arr){
//	for(int i=0; i<arr.size; i++){
//		cout<<arr.a[i]<<" ";
//	}
//}
//
//int part(int a[],int l,int h){
//	int p,i,j;
//	i=l,j=h;
//	p=a[l];
//	do{
//		do{
//			i++;
//		}while(a[i]<=p);
//		do{
//			j--;
//		}while(a[j]>p);
//		if(i<j){
//			swap(&a[i],&a[j]);
//		}
//	}while(i<j);
//	swap(&a[l],&a[j]);
//	return j;
//}
//
//void quicksort(int a[],int l, int h){
//	int j;
//	if(l<h){
//		j=part(a,l,h);
//		quicksort(a,l,j);
//		quicksort(a,j+1,h);
//	}
//}
//
////merge 2 lists in same array
//int merge(int a[], int l, int m, int h){
//	int i,j,k;
//	i=l, j=m+1, k=l;
//	int aux[h+1];
//	
//	while(i<=m && j<=h){
//		if(a[i]>a[j]){
//			aux[k]=a[j];
//			j++;
//			k++;
//		}
//		else{
//			aux[k]=a[i];
//			i++;
//			k++;
//		}
//	}
//	
//	for(;j<=h; j++){
//		aux[k]=a[j];
//		k++;
//	}
//	
//	
//	for(;i<=m; i++){
//		aux[k]=a[i];
//		k++;
//	}
//	
//	for(i=l; i<=h; i++){
//		a[i]=aux[i];
//	}
//}
//
//void merges(int a[], int l, int h){
//	int m;
//	if(l<h){
//		m=(l+h)/2;
//		merges(a,l,m);
//		merges(a,m+1,h);
//		merge(a,l,m,h);
//	}
//}
//
//int main(){
//	
//	//**********bubblesort, insertion sort, selection sort and shell sort
//	struct array arr;
//	arr.size=5;
//	arr.a=new int[arr.size];
//	int a[]={3,5,1,4,2};
//
//	//these values can also be taken from user
//	//copying values from an already existing array
//	for(int i=0; i<arr.size; i++){
//		arr.a[i]=a[i];
//	}
//	
//	//bubble(&arr);
//	//inserta(&arr);
//	//selection(&arr);
//	//shell(&arr);
//	//display(arr);
//	
//	//**********quicksort and mergesort
//	
//	int b[]={3,5,1,4,2,100};
//	int l,h;
//	l=0;
//	h=(sizeof(b)/sizeof(int))-1;
//	
//	//quicksort(b,l,h);
//	merges(b,l,h);
//	
//	for(int i=0; i<=h; i++){
//		cout<<b[i]<<" ";
//	}
//	
//}

#include<iostream>
#include <cstdlib> 
#include <time.h> 
#include <chrono>
using namespace std::chrono;
using namespace std; 

void swap(int *x, int *y){
	int t;
	t=*x;
	*x=*y;
	*y=t;
}

int part(int a[],int l,int h){
	int p,i,j;
	i=l,j=h;
	p=a[l];
	do{
		do{
			i++;
		}while(a[i]<=p);
		do{
			j--;
		}while(a[j]>p);
		if(i<j){
			swap(&a[i],&a[j]);
		}
	}while(i<j);
	swap(&a[l],&a[j]);
	return j;
}

void quicksort(int a[],int l, int h){
	int j;
	if(l<h){
		j=part(a,l,h);
		quicksort(a,l,j);
		quicksort(a,j+1,h);
	}
}

int main(){
//	int b[]={3,5,1,4,2,100};
//	int l,h;
//	l=0;
//	h=(sizeof(b)/sizeof(int))-1;
//	
//	quicksort(b,l,h);
//	
//	for(int i=0; i<=h; i++){
//		cout<<b[i]<<" ";
//	}

int x;

	int b[100000]={};
	int l,h;
	l=0;
	h=(sizeof(b)/sizeof(int))-1;
	
	for(int i=0; i<=h; i++){
		srand(time(0)); 
		x=rand()%100+1;
		b[i]=x;
	}
	
	auto start = high_resolution_clock::now();
	
	quicksort(b,l,h);
	
	auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;



}
