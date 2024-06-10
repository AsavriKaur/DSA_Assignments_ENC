//-----------------assign one 
//1i
/*
#include<iostream>
using namespace std; 
int main(){
	int last = 7;
	int first = 2;
	int sum=0; 
	
	if(last>=first){
		for(int i=first; i<=last; i++){
			sum=sum+i;
		}
	}
	else{
		for(int i=last; i<=first; i++){
			sum=sum+i;
		}
	}
	
	cout<<sum<<endl;
}
*/
//ii
/*
#include<iostream>
using namespace std; 
int main(){
	int goal = 11;
	int sum = 0;
	int i=1;
	int count=0;
	while(goal>sum){
		sum=sum+i;
		i=i+1;
		count=count+1;
		cout<<sum<<" ";
	}
	
	cout<<count<<endl;
}
*/
//iii
/*
#include<iostream>
using namespace std; 
int main(){
	int i,j;
	i=7;
	j=9;
	for(int k=i; k>=0; k--){
		if(i%k==0 && j%k==0){
			cout<<k<<endl;
			break;
		}
	}
}
*/
/*
#include<iostream>
using namespace std; 
int main(){
	int j=7, count=0;
	for(int i=2; i<=(j/2); i++){
		if(j%i==0){
			count++;
		}
	}
	if(count==0){
		cout<<"prime"<<endl;
	}
	else{
		cout<<"not prime"<<endl;
	}
}
*/
//v
/*
#include<iostream>
using namespace std; 
int main(){
	int i=5;
	switch(i){
		case 3: cout<<"three"<<endl;
		break;
		case 4: cout<<"four"<<endl;
		break;
		default: cout<<"invalid"<<endl;
	}	
}
*/
#include<iostream>
using namespace std; 
class student{
	int rno; 
	char name[10];
	int grade;
	public: 
	void set();
	void display();
};

student::set(){
	rno=12;
	cout<<"name: ";
	cin>>name;
	grade=12;
}

void student::display(){
	cout<<rno<<" "<<name<<" "<<grade<<endl;
}

int main(){
	student s1;
}
