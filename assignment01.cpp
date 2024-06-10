//lab assignment 1

//#include<iostream>
//using namespace std; 
//int main(){
//	int first, last; 
//	cout<<"enter first number: ";
//	cin>>first;
//	cout<<"enter second number: ";
//	cin>>last;
//	int sum=0;
//	if(first>=last){
//		for(int i=last; i<=first; i++){
//			sum=sum+i;
//		}
//	}
//	else{
//		for(int j=first; j<=last; j++){
//			sum=sum+j;
//		}
//	}
//	cout<<sum;
//	
//}

//* computes and returns the smallest positive integer n for which 1+2+3+...+n equals 
//or exceeds the value of "goal"
//#include<iostream>
//using namespace std; 
//int main(){
//	int goal=10;
//	int i=0;
//	int sum=0; 
//	while(sum<goal){
//		sum=i+sum;
//		if(sum>=goal){
//			break;
//		}
//		i++;
//	}
//	cout<<i<<endl;
//}

//#include<iostream>
//#include<math.h>
//using namespace std; 
//int main(){
//	int goal=10;
//	cout<< (-1+sqrt(1+8*goal))/2;
//	
//}



//*computes and returns the greatest common divisor (g.c.d.) of the arguments passed 
//to it.
//#include<iostream>
//using namespace std; 
//int main(){
//	int a=27;
//	int b=18;
//	int min=a>b?b:a;
//	int count=0,j;
//	for(j=1; j<=min; j++){
//		if(a%j==0 && b%j==0){
//			count=j;
//		}
//	}
//	cout<<count;
//}

//*Determines whether an integer is prime.
//#include<iostream>
//using namespace std; 
//int main(){
//	int num,i,count=0; 
//	cout<<"enter number: ";
//	cin>>num;
//	if(num==0 || num==1){
//		cout<<"not prime";
//	}
//	else{
//	for(i=2; i<=(num/2);i++){
//		if(num%i==0){
//			count++;
//		}
//	}
//	if(count==0){
//		cout<<"prime"<<endl;
//	}
//	else{
//		cout<<"not prime"<<endl;
//	}
//}
//}

//*Prints the English name of an integer from 1 to 9
//#include<iostream>
//using namespace std; 
//int main(){
//	int num;
//	cout<<"enter number from 0 to 9: "; 
//	cin>>num;
//	if(num>=0 && num<=9){
//	switch(num){
//		case 0: 
//		cout<<"zero";
//		break;
//		case 1: 
//		cout<<"one";
//		break;
//		case 2: 
//		cout<<"two";
//		break;
//		case 3: 
//		cout<<"three";
//		break;
//		case 4: 
//		cout<<"four";
//		break;
//		case 5: 
//		cout<<"five";
//		break;
//		case 6: 
//		cout<<"six";
//		break;
//		case 7: 
//		cout<<"seven";
//		break;
//		case 8: 
//		cout<<"eight";
//		break;
//		case 9: 
//		cout<<"nine";
//		break;
//		
//	}
//}
//else{
//	cout<<"enter valid number"<<endl;
//}
//}

//*Reverses the order of the objects in an array.
//#include<iostream>
//using namespace std; 
//class student{
//	char name[10];
//	int rno;
//	public: 
//	void getdata();
//	void display();
//};
//
//void student::getdata(){
//	cout<<"enter name"<<endl;
//	cin>>name; 
//	cout<<"enter rno: "<<endl;
//	cin>>rno;
//}
//
//void student::display(){
//	cout<<name<<" "<<rno<<endl;
//}
//
//void reverse(student *s,int n){
//		int i=0; 
//		int j=n-1;
//		
//		for(i=0,j=n-1;j>i;i++,j--){
//			
//				student temp;
//				temp=s[i];
//				s[i]=s[j];
//				s[j]=temp;
//			
//		}
//	
//}
//
//int main(){
//	int n,i=0,j=0;
//	cout<<"enter number of students: ";
//	cin>>n;
//	student s[n];
//	for(i=0; i<n; i++){
//		s[i].getdata();
//	}
//	
//	reverse(s,n);
//
//	for(i=0; i<n; i++){
//		s[i].display();
//	}
//}

//*Finds the index of the largest number in an array.
//#include<iostream>
//using namespace std;
//int main(){
//	int len=0,max,i=0, index=0;
//	cout<<"enter length: "<<endl;
//	cin>>len;
//	int arr[len];
//	cout<<"enter elements: "<<endl;
//	for(i=0; i<len; i++){
//		cin>>arr[i];
//	}
//	max=arr[0];
//	for(i=0; i<len; i++){
//		if(arr[i]>max){
//			index=i;
//			max=arr[i];
//		
//		}
//	}
//	cout<<"greatest element is: "<<max<<" and index is: "<<index<<endl;	
//}

//*Shifts the contents of array cells one cell to the right, with the last cell's contents moved to the left end.
//#include<iostream>
//using namespace std; 
//int main(){
//	int n,i=0,last;
//	cout<<"enter number of elements: ";
//	cin>>n;
//	int a[n];
//	cout<<"enter elements: ";
//	for(i=0; i<n; i++){
//		cin>>a[i];
//	}
//	last=a[n-1];
//	for(i=n-1; i>=0; i--){
//		a[i]=a[i-1];
//	}
//	a[0]=last;
//	for(i=0; i<n; i++){
//		cout<<a[i]<<" ";
//	}
//}

//*Examines an array of integers and eliminates all duplication of values. The distinct 
//integers are all moved to the left part of the array.
//
//#include<iostream>
//using namespace std; 
//int main(){
//	int a[]={3,5,4,4,4,9,6,6};
//	int min=3;
//	int max=9;
//	int len=max-min+1;
//	int h[len]={0};
//	for(int i=0; i<=len; i++){
//		h[a[i]-min]++;
//	}
//
//	for(int i=0; i<=len; i++){
//		if(h[i]>0){
//			cout<<i+min<<" ";
//		}
//	}
//}

//*Copies numbers from two arrays into a third array. The numbers from the second 
//array are placed to the right of the numbers copied from the first array
//#include<iostream>
//using namespace std; 
//int main(){
//	int a[]={1,2,3};
//	int b[]={4,5,6};
//	int c[6];
//	for(int i=0; i<6; i++){
//		if(i<3)
//		c[i]=a[i];
//		else 
//		c[i]=b[i-3];
//		cout<<c[i]<<" ";
//	}
//	
//}

//#include<iostream>
//using namespace std; 
//int main(){
//	int s1, s2; 
//	int i;
//	cout<<"enter size of first array: ";
//	cin>>s1; 
//	cout<<"enter size of second array: ";
//	cin>>s2; 
//	for
//	int a1[s1]; 
//	int a2[s2];
//	int ans[s1+s2];
//	for(i=0; i<s1; i++){
//		if(i<s1)
//		ans[i]=a1[i];
//		else ans[i]=a2[i-s1];
//	}
//	for(int j=0; j<s1+s2; j++){
//		cout<<ans[j]<<" ";
//	}
//	
//}

//Q2.)* Write a program to find sum of all elements of an array; write a program to find maximum of 
//elements of an array; write a program for linear search of an array.
//#include<iostream>
//using namespace std; 
//int sum(int *a,int n){
//	int sum=0;
//	for(int i=0; i<n; i++){
//		sum=sum+a[i];
//	}
//	return sum;
//}
//
//int max(int *a, int n){
//	int m=a[0];
//	for(int i=0; i<n; i++){
//		if(a[i]>m){
//			m=a[i];
//		}
//	}
//	return m;
//}
//
//int linearSearch(int *a, int n, int val){
//	for(int i=0; i<n; i++){
//		if(a[i]==val){
//			return i;
//		}
//	}
//	return -1;
//}
//
//int main(){
//	int *a, n, val;
//	cout<<"enter size of array: ";
//	cin>>n;
//	a=new int[n];
//	cout<<"enter vals: ";
//	for(int i=0; i<n; i++){
//		cin>>a[i];
//	}
//	cout<<"sum is: "<<sum(a,n)<<endl;
//	cout<<"max is: "<<max(a,n)<<endl;
//	cout<<"enter number to search: ";
//	cin>>val;
//	cout<<"found at index: "<<linearSearch(a,n,val);
//}

//Q3) *Write a program for adding and subtracting Matrices using 2D Arrays
//#include<iostream>
//using namespace std; 
//int main(){
//	int m1,n1;
//	int i,j;
//	cout<<"enter row value: ";
//	cin>>m1;
//	cout<<"enter col value: ";
//	cin>>n1;
//
//	int a[m1][n1];
//	int b[m1][n1];
//
//	cout<<"enter vals for matrix1: ";
//	for(i=0; i<m1; i++){
//		for(j=0; j<n1; j++){
//			cin>>a[i][j];
//		}
//	}
//	cout<<"enter vals for matrix2: ";
//	for(i=0; i<m1; i++){
//		for(j=0; j<n1; j++){
//			cin>>b[i][j];
//		}
//	}
//	cout<<"matrix1 is: "<<endl;
//	for(i=0; i<m1; i++){
//		for(j=0; j<n1; j++){
//			cout<<a[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	cout<<"matrix2 is: "<<endl;
//	for(i=0; i<m1; i++){
//		for(j=0; j<n1; j++){
//			cout<<b[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	cout<<"sum is: "<<endl;
//	for(i=0; i<m1; i++){
//		for(j=0; j<n1; j++){
//			cout<<a[i][j]+b[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	cout<<"difference is: "<<endl;
//	for(i=0; i<m1; i++){
//		for(j=0; j<n1; j++){
//			cout<<a[i][j]-b[i][j]<<" ";
//		}
//		cout<<endl;
//	}	
//}

//Q4) --Write a program to Multiply Matrices of 10X10
//#include<iostream>
//using namespace std; 
//int main(){
//	int a[10][10];
//	int b[10][10];
//	int ans[10][10]={0};
//	int i,j,k;
//	//cout<<"enter values of first matrix: ";
//	for(i=0; i<10; i++){
//		for(j=0; j<10; j++){
//			a[i][j]=1;
//		}
//	}
//	
////	cout<<"enter values of second matrix: ";
//	for(i=0; i<10; i++){
//		for(j=0; j<10; j++){
//			b[i][j]=i;
//		}
//	}
//	
//	for(i=0; i<10; i++){
//		for(j=0; j<10; j++){
//			cout<<b[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	for(i=0; i<10; i++){
//		for(j=0; j<10; j++){
//			ans[i][j]=0;
//			for(k=0; k<10; k++){
//				ans[i][j]=ans[i][j]+a[i][k]*b[k][j];
//			}
//		}
//	}
//	
//	cout<<"values of matrix: ";
//	for(i=0; i<10; i++){
//		for(j=0; j<10; j++){
//			cout<<ans[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}

//Q5) *Write a program for Linear Search using Functions
//#include<iostream>
//using namespace std;
//
//int linearSearch(int *a,int n, int key){
//		for(int i=0; i<n; i++){
//		if(a[i]==key){
//			return i;
//		}
//	}
//	return -1;
//}
//
//int main(){
//	int n,key;
//	cout<<"enter number of elements: ";
//	cin>>n;
//	int a[n];
//	cout<<"enter elements: "<<endl;
//	for(int i=0; i<n; i++){
//		cin>>a[i];
//	}
//	cout<<"enter element to find: ";
//	cin>>key;
//	cout<<"index: "<<linearSearch(a,n,key);
//}

//* Q6) Write a class for a rectangle. Create objects for this class and call the member functions to find the area and perimeter of the rectangle.
//#include<iostream>
//using namespace std; 
//class rectangle{
//	int length; 
//	int breadth;
//	public: 
//	rectangle(int l, int b){
//		length=l;
//		breadth=b;
//	}
//	int area(); 
//	int perimeter();
//};
//
//int rectangle::area(){
//	return length*breadth;
//}
//int rectangle::perimeter(){
//	return 2*(length+breadth);
//}
//
//int main(){
//	rectangle r1(3,4),r2(5,6),r3(8,9);
//	cout<<"area of r1: "<<r1.area()<<endl;
//	cout<<"perimeter of r1: "<<r1.perimeter()<<endl;
//	cout<<"area of r2: "<<r2.area()<<endl;
//	cout<<"perimeter of r2: "<<r2.perimeter()<<endl;
//	cout<<"area of r3: "<<r3.area()<<endl;
//	cout<<"perimeter of r3: "<<r3.perimeter()<<endl;
//}

//#include<iostream>
//using namespace std; 
//int main(){
//	int a[2][3]={{2,3,5},{1,2,1}};
//	int b[3][2]={{1,3},{2,1},{4,5}};
//	int ans[2][2];
//	int i,j,k;
//	for(i=0; i<2; i++){
//		for(j=0; j<2; j++){
//			ans[i][j]=0;
//			for(k=0; k<2; k++){
//				ans[i][j]=ans[i][j]+a[i][k]*b[k][j];
//			}
//		}
//	}
//	
//	for(i=0; i<2; i++){
//		for(j=0; j<2; j++){
//			cout<<ans[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}

//#include<iostream>
//#include <cstdlib>
//#include<time.h>
//using namespace std; 
//int main(){
//	clock_t start, end;
//	double time;
//	start=clock();
//	
//	int n=300;
//	int a[n][n];
//	int b[n][n];
//	int ans[n][n];
//	int i,j,k;
//	for(i=0; i<n; i++){
//		for(j=0; j<n; j++){
//			a[i][j]=rand();
//		}
//	}
//	
//	for(i=0; i<n; i++){
//		for(j=0; j<n; j++){
//			b[i][j]=rand();
//		}
//	}
//	
////	for(int i=0; i<n; i++){
////		for(int j=0; j<n; j++){
////			cout<<a[i][j]<<" ";
////		}
////		cout<<endl;
////	}
//	
////	for(int i=0; i<n; i++){
////		for(int j=0; j<n; j++){
////			cout<<b[i][j]<<" ";
////		}
////		cout<<endl;
////	}
//	
//	for(i=0; i<n; i++){
//		for(k=0; k<n; k++){
//			ans[i][k]=0;
//			for(j=0; j<2; j++){
//				ans[i][k]=ans[i][k]+a[i][j]*b[j][k];
//			}
//		}
//	}
//	
////	for(int i=0; i<n; i++){
////		for(int j=0; j<n; j++){
////			cout<<ans[i][j]<<" ";
////		}
////		cout<<endl;
////	}
//
//	end=clock();
//	time= (double)(end-start)/CLOCKS_PER_SEC;
//	cout<<"execution time: "<<time<<"s"<<endl;
//	
//}
