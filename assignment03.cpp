//lab assignment 3 

//i. Finding length of a string
#include<iostream>
using namespace std; 

int findLen(char *ch){
	int count =0;
	for(int i=0; ch[i]!='\0'; i++){
		count++;
	}
	return count;
}

//ii. Converting a string in lowercase
void lwr(char *ch){
	for(int i=0; ch[i]!='\0'; i++){
		if(ch[i]>=65 && ch[i]<=90){
			ch[i]=ch[i]+32;
		}
	}
}

//iii. Counting number of words and vowels in a string
void findVowel(char *ch){
	int countCons, countVowel;
	countCons=countVowel=0;
	for(int i=0; ch[i]!='\0'; i++){
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
			countVowel++;
		}
		else{
			countCons++;
		}
	}
	
	cout<<"vowels: "<<countVowel<<endl;
	cout<<"consonents: "<<countCons<<endl;
}

//iv. Validating a string (Note: Valid string does contain only alphabets)
int validString(char *ch){
	int count=0; 
	lwr(ch);
	for(int i=0; ch[i]!='\0'; i++){
		if(ch[i]>=97 && ch[i]<=122){
			count++;
		}
	}
	if(count==findLen(ch)){
		return 1;
	}
	else{
		return 0;
	}
}

//v. Reversing a string (Eg. Code ? edoC)
void RevString(char *ch){
	int i,j;
	for(j=0; ch[j]!='\0';j++){
	}
	j=j-1;
	char temp;
	for(i=0; i<=j; i++,j--){
		temp=ch[i];
		ch[i]=ch[j];
		ch[j]=temp;
	}
	
	for(int i=0; ch[i]!='\0'; i++){
		cout<<ch[i];
	}
	cout<<endl;
}

//vi. Checking if a string is palindrome.
int isPalindrome(char *ch){
	int i,j,count=0;
	for(j=0; ch[j]!='\0';j++){
	}
	j=j-1;
	for(i=0; i<=j; i++,j--){
		if(ch[i]==ch[j]){
			count++;
		}
	}
	if((findLen(ch))/2<=count){
		return 1;
	}
	else{
		return 0;
	}
}

//vii. Finding duplicate characters in a string (Note: print the duplicate characters only once,
//irrespective of the number of times it occurred)
void duplicate(char *ch){
	int i,j,p=0;
	int len=findLen(ch);
	int dupl[len]={};
	for(i=0; ch[i]!='\0'; i++){
		for(j=i+1; ch[j]!='\0'; j++){
			if(ch[i]==ch[j] && ch[j]!='*'){
				dupl[p]++;
				ch[j]='*';
			}
		}
		p++;
	}
	for(i=0; i<len; i++){
		if(dupl[i]>0){
			cout<<"duplicate found: "<<ch[i]<<endl;
		}
	}
}

int main(){
	char ch[]="HeLllollo";
	cout<<findLen(ch)<<endl;
	lwr(ch);
		
	for(int i=0; ch[i]!='\0'; i++){
		cout<<ch[i];
	}
	cout<<endl;
	findVowel(ch);
	cout<<"is it a valid string? "<<validString(ch)<<endl;
	RevString(ch);
	cout<<"is it a palindrome? "<<isPalindrome(ch)<<endl;
	duplicate(ch);
}


//Q2 Write a program for finding the factorial of a number recursively.
/*
#include<iostream>
using namespace std; 
int fact(int n){
	if(n<0){
		return -1;
		//invalid
	}
	if(n==0){
		return 1;
	}
	n=n*fact(n-1);
	return n;
}

int main(){
	cout<<fact(5);
}
*/

//Q3. Implement combination formula n C r using recursion and code it in C/C++/JAVA/Python
//language.
/*
#include<iostream>
using namespace std; 
int comb(int n, int r){
	if(n==0 || r==0){
		return 0;
	}
	else if(r==1){
		return n;
	}
	else if(n<r){
		return 0;
	}else{
		return (comb(n-1,r-1)+comb(n-1,r));
	}
	
}

int main(){
	cout<<comb(10,3)<<endl;
}
*/

//Q5. Implement the Tower of Hanoi Problem using recursion and code it in C/C++/JAVA/Python language.
/*
#include<iostream>
using namespace std; 
int tower(int n, int a, int b, int c){
	if(n>0){
		tower(n-1,a,c,b);
		cout<<"moved: "<<n<<" from "<<a<<" to "<<c<<" via "<<b<<endl;
		tower(n-1,b,a,c);
	}

}
int main(){
	int n=3;
	int a,b,c;
	a=1;
	b=2;
	c=3;
	tower(n,a,b,c);

}
*/

//Q6. Implement the Fibonacci series using recursion and code it in C/C++/JAVA/Python language.
/*
#include<iostream>
using namespace std; 
int fib(int n){
	if(n==1){
		return 1;
	}
	else if(n<=0){
		return 0;
	}
	else{
		cout<<(fib(n-1)+fib(n-2))<<" ";
		return (fib(n-1)+fib(n-2));
	}
}

int main(){
	cout<<fib(6)<<endl;
}
*/
