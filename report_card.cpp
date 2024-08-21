#include<iostream>
using namespace std;
struct student{
	int id_no;
	int roll_no;
	string name;
	string clas;
};
int result(){
	
	struct student data;
	int choice;
	cout<<"No of Student Calculate Result : ";
	cin>>choice;
	for(int i = 0; i < choice; i++){
		cout<<"\n";
	cout<<"<---- Automatic Create Report Card ---->\n";
	cout<<"Enter Student ID : ";
	cin>>data.id_no;
	cout<<"Enter Student Name : ";
	cin>>data.name;
	cout<<"Enter Student Class : ";
	cin>>data.clas;
	cout<<"Enter Student Roll No  : ";
	cin>>data.roll_no;
	
	cout<<"\n";
	int no_subject,obtain_marks = 0;
	cout<<"Enter the no of subject : ";
	cin>>no_subject;
	string sub[no_subject];
	int marks[no_subject];
	for(int i = 0; i < no_subject; i++){
		cout<<"\nEnter "<<i+1<<"th Subject : ";
		cin>>sub[i];
		cout<<"\nEnter "<<sub[i]<<" Marks : ";
		cin>>marks[i];
		obtain_marks = marks[i] + obtain_marks;
	}
	int total_marks = no_subject*100;
	cout<<"\n";
	cout<<"Obtained Marks is "<<obtain_marks<<" Total Marks is "<<total_marks<<" Parcentage is "<<(obtain_marks*100)/total_marks;
	}
	return 0;
}
int main(){
	int choice;
	cout<<"1) Result Calculate\nEnter Here Choice : ";
	cin>>choice;
	switch (choice){
		case 1:
			result();
			break;
		
		default :
			cout<<"!--Invaild Choice--!";
	}
	return 0;
}
