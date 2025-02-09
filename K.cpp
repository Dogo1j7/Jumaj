#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string username ,name,password,enteredPassword,Address,phoneNumber,email;
	//user authentication 
	string storedUsername="24BCS";
	string storedHashedPassword=("12345678");
	cout<<"Enter your user name :";
	getline(cin,username);
	cout<<"Enter your password:";
	cin>>enteredPassword;
	cin.ignore();
cout<<endl;
//check cresidential match

if(username==storedUsername&&enteredPassword==storedHashedPassword)
{
	cout<<"Login successful!"<<endl;
	cout<<""<<endl;
//data collection
	cout<<"Enter your full name"<<endl;
	getline(cin,name);
	cout<<"Enter your full addres:"<<"   "<<endl;
   	getline(cin,Address);       
	cout<<"Enter your phone number:";
	cin>>phoneNumber;
	cout<<"Enter your email address:";
	cin>>email;
cout<<endl;
//display user information
	cout<<"\nUser information:\n"<<endl;
	cout<<"\nUsername:"<<name<<endl;
	cout<<"Full address:"<<Address<<endl;
	cout<<"Phone number:"<<phoneNumber<<endl;
	cout<<"Email:"<<email<<endl;
	}
else
{
	cout<<"Invalid username or password.\n";
}
return 0;
}
