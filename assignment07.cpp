//***********************knapsack problem

//#include<iostream>
//using namespace std;
//
//int findmax(int r[], int n){
//	int max=-1;
//	for(int i=0; i<n; i++){
//		if(r[i]>max){
//			max=r[i];
//		}
//	}
//	for(int i=0; i<n; i++){
//		if(r[i]==max){
//			return i;
//		}
//	}
//	return -1;
//} 
//
//int knapsack(int p[], float w[], int n, float weight){
//	int r[n],max_index, profit=0;
//	for(int i=0; i<n; i++){
//		r[i]=(p[i])/w[i];
//	}
//	
//	while(weight>0){
//			max_index=findmax(r,n);
//			
//		
//	if(weight-w[max_index]>=0){
//		weight=weight-w[max_index];
//		profit=profit+p[max_index];
//		r[max_index]=0;
//	}
//	else if(weight-w[max_index]<0){
//		profit=profit+((weight/w[max_index])*p[max_index]);
//		weight=weight-w[max_index];
//		r[max_index]=0;
//	}
//	}
//
//	return profit;
//
//}
//
//int main(){
//	int p[]={100,120,60};
//	float w[]={20,30,10};
//	cout<<knapsack(p,w,3,50);
//}


//******************************coins denomination problem
//#include<iostream>
//using namespace std; 
//
//void findcoin(int total, int coins[], int n){
//	//assuming coins is a sorted array of denominations available 
//	int numOfCoins[n], temp;
//	for(int i=0; i<n; i++){
//		temp=total/coins[i];
//		total=total-(temp)*coins[i];
//		numOfCoins[i]=temp;
//	}
//	
//	for(int i=0; i<n; i++){
//		cout<<numOfCoins[i]<<" ";
//	}
//}
//
//int main(){
//	int a[]={10,5,2,1};
//	findcoin(49,a,4);
//}


//*******************factorial of a number using dp
//#include<iostream>
//using namespace std;
//
//int fact(int n){
//	int a[n];
//	
//	a[0]=1;
//	for(int i=1; i<n; i++){
//		a[i]=(i+1)*a[i-1];
//	}
//	return a[n-1];
//}
//
//int main(){
//	cout<<fact(6);
//}

//***********************fib series using dp
//#include<iostream>
//using namespace std;
//
//int fib(int n){
//	int a[n];
//	
//	a[0]=0;
//	a[1]=1;
//	
//	for(int i=2; i<n; i++){
//		a[i]=a[i-1]+a[i-2];
//	}
//	
//	return a[n-1];
//}
//
//int main(){
//	cout<<fib(6);
//}

//***********************combination problem
//#include<iostream>
//using namespace std; 
//int comb(int n, int r){
//	
//	int a[n][r];
//	int i,j;
//	
//	for(i=0; i<2; i++){
//		for(j=0; j<2; j++){
//			a[i][j]=1;
//		}
//	}
//	for(i=1; i<=n; i++){
//		for(j=1; j<=r; j++){
//			if(j==1){
//				a[i][j]=i;
//			}
//			else if(j==0 || j==i){
//				a[i][j]=1;
//			}   
//			else{
//				a[i][j]=a[i-1][j-1]+a[i-1][j];
//			}
//		}
//	}
//	
//	return a[n][r];
//}
//
//int main(){
//	cout<<comb(5,3);
//}

//0/1 knapsack problem 
#include<iostream>
//using namespace std; 
//
//int max(int a, int b){
//	if(a>b){
//		return a;
//	}
//	return b;
//	
//}
//
//void maxProfit(int *p, int *w, int n){
//	int i,j;
//	int t;
//	cout<<"enter total weight: ";
//	cin>>t;
//	int k[n+1][t+1];
//	
//	
//	for(i=0; i<=n; i++){
//		for(j=0; j<=t; j++){
//			if(i==0 || j==0){
//				k[i][j]=0;
//			}
//			else if(w[i]<=j){
//				k[i][j]=max(k[i-1][j], (k[i-1][j-w[i]])+p[i]);
//			}
//			else{
//				k[i][j]=k[i-1][j];
//			}
//		}
//	}
//	
//	cout<<"max profit is: "<<k[n][t]<<endl;
//	
//	//to check what elements will be included
//	
//	while(t>0 && n>0){
//		if(k[n][t]==k[n-1][t]){
//			n=n-1;
//		}
//		else{
//			cout<<n<<"th item included"<<endl;
//			t=t-w[n];
//		}
//	}
//	
//}
//
//int main(){
//	int n;
//	cout<<"enter number of items: ";
//	cin>>n;
//	int p[n+1],w[n+1];
//	//as zero indices will be zero
//	p[0]=w[0]=0;
//	
//	cout<<"enter values of profit: "<<endl;
//	for(int i=1; i<n+1; i++){
//		cin>>p[i];
//	}
//	
//	cout<<"enter values of weight: "<<endl;
//	for(int i=1; i<n+1; i++){
//		cin>>w[i];
//	}
//	
//	 maxProfit(p,w,n);
//	
//}

//coin denomination problem - infinite supply 
//#include<iostream>
//using namespace std;
//
//int min(int x, int y){
//	if(x<y){
//		return x;
//	}
//	return y;
//}
//
//void fun(int *p, int n, int s){
//	int i, j;
//	int k[n][s+1];
//	
//	for(i=0; i<n; i++){
//		for(j=0; j<=s; j++){
//			if(j==0){
//				k[i][j]=0;
//			}
//			else if(i==0){
//				k[i][j]=j;
//			}
//			else if(p[i]>j){
//				k[i][j]=k[i-1][j];
//			}
//			else{
//				k[i][j]=min(k[i-1][j], 1+k[i][j-p[i]]);
//			}
//		}
//	}
//	
//	cout<<"minimum value required is: ";
//	cout<<k[n-1][s];
//	
//}
//
//int main(){
//	int n, s;
//	cout<<"enter number of coins: ";
//	cin>>n;
//	int p[n];
//	//as zero indices will be zero
//	
//	cout<<"enter values of denominations available: "<<endl;
//	for(int i=0; i<n; i++){
//		cin>>p[i];
//	}
//	
//	cout<<"enter total sum: ";
//	cin>>s;
//	
//	fun(p,n,s);
//}

//subset problem 
#include<iostream>
using namespace std; 

int fun(int *p, int n, int s){
	int i, j;
	int k[n][s+1];
	
	
	for(i=0; i<n; i++){
		for(j=0; j<=s; j++){
			if(j==0){
				k[i][j]=1;
			}
			else if(k[i-1][j]==1){
				k[i][j]=1;
			}
			else if(p[i]==j){
				k[i][j]=1;
			}
			else if(k[i-1][j-p[i]]==1){
				k[i][j]=1;
			}
			else{
				k[i][j]=0;
			}
		}
	}
	
	return k[n-1][s];
	
}

int main(){
	int n, s;
	cout<<"enter number of elements: ";
	cin>>n;
	int p[n];
	
	cout<<"enter elements: "<<endl;
	for(int i=0; i<n; i++){
		cin>>p[i];
	}
	
	cout<<"enter total sum: ";
	cin>>s;
	
	cout<<fun(p,n,s);
}
