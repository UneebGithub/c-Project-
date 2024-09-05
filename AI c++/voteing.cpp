#include<iostream>
#include<fstream>
#include<string>
#include<fstream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
	
	cout<<"\t\tThe Station : Haripur "<<endl;
	int Id,i,j;
	bool Id_exist=0;
	fstream file;
	file.open("ID.txt",ios::in);
	 cout<<"Enter Your CNIC Number:\n";
	 cin>>Id;
	 int arr[200];
	for(i=0;i<200;i++)
	file>>arr[i];
	file.close();
	for( j=0;j<i;j++)
	{
		if(Id==arr[j])
		{
			arr[j]=0;
			Id_exist=1;
		}
	}
	file.open("ID's.txt",ios::out);
		for(i=0;i<200;i++)
		file<<arr[i]<<endl;
		file.close();
		
	if(Id_exist==0)
	{
		cout<<"\nInvalid ID or it has already been used :| ";
		return 0;
	}
	int c=0,party;
	do
	{
	c++;
	cout<<"\nChoose a Party to cast your Vote \n\n";
	cout<<"1-PTI"<<endl;
	cout<<"2-PMLN"<<endl;
	cout<<"3-PPP"<<endl;
	cin>>party;
	}while((party<1 || party>3));
	int count;
	if(party==1)
	{
		file.open("PTI.txt",ios::in);
		file>>count;
		count++;
		file.close();
		file.open("PTI.txt",ios::out);
		file<<count;
		file.close();
	}
	else if(party==2)
	{
		file.open("PMLN.txt",ios::in);
		file>>count;
		count++;
		file.close();
		file.open("PMLN.txt",ios::out);
		file<<count;
		file.close();
	}
	else if(party==3)
	{
		file.open("PPP.txt",ios::in);
		file>>count;
		count++;
		file.close();
		file.open("PPP.txt",ios::out);
		file<<count;
		file.close();
	}
	cout<<"\nYour vote has been casted successfully :) "<<endl;
	char res;
	cout<<"\nDo you want to see the results (y/n)\n";
	cin>>res;
	int pti,pmln,ppp;
	if(res=='y'|| res=='Y')
	{
		file.open("PTI.txt",ios::in);
		file>>pti;
		file.close();
		file.open("PMLN.txt",ios::in);
		file>>pmln;
		file.close();
		file.open("PPP.txt",ios::in);
		file>>ppp;
		file.close();
		cout<<"\nNumber of votes casted to each party "<<endl<<endl;
		cout<<"PTI = "<<pti<<endl;
		cout<<"PMLN = "<<pmln<<endl;
		cout<<"PPP = "<<ppp<<endl;
		return 0;
	}
	else
	cout<<"\nThank You for casting Vote "<<endl;
}

