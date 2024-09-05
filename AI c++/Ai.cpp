#include <iostream>
#include<windows.h>
#include<Mmsystem.h>
#include<stdio.h>
#include<windows.h>
#include<fstream>
#include<string.h>
#include<dirent.h>
using namespace std;
void load();
void wid();
int main()
{


	system("color 0");
	load();
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
}
void wid(int x, int y)
{
	COORD d;
	d.X=x;
	d.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),d);
}
void load()
{
	char a=219;
	wid(30,2);
	cout<<"Welcome To WorldSoft"<<endl;
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 14);
	wid(30,4);
	for(int r=1; r<=22; r++)
	{


		for(int q=0; q<=90000000; q++);
			cout<<a;
			
			
		

	}
	SetConsoleTextAttribute(color,7);
	cout<<" "<<endl;
	cout<<""<<endl;
	Beep(500, 400);
    Beep(560, 282);
    Beep(590, 282);
    Beep(600, 400);

    Beep(883, 220);
    Beep(699, 228);
    Beep(788, 286);
    Beep(700, 270);

	cout<<" "<<endl;
	cout<<" "<<endl;
	system("cls");
	string usr;
	string ch;
	string mj;
	int p;
	cout<<"\t\tIf You Are Member Enter Your Name And Password: "<<endl;
	cout<<"Enter Your User Name \\ "<<endl;
    cout<<"Press 1 to skip this process"<<endl;	
	getline(cin,usr);
	cout<<"\n"<<endl;
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"2018 - By Uneeb Ullah"<<endl;
	if(usr=="uneeb ullah")
	{
		
		
		cout<<"Enter Your Password"<<endl;
		cin>>p;
	    if(p=='a')
		{
		
		SetConsoleTextAttribute(color,3);
		cout<<"\t\tWelcome To Play World"<<endl;
		cout<<"";
		cout<<"";
		cout<<"";
		
				}
				
	}
	else if(usr=="skip"||usr=="1")
	{
	system("cls");
	//cout<<"Enter Your Name:"<<endl;
	
	//HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	system("color 0"); 
	char dd[100];
	
	cout<<"What is your name: "<<endl;
	cin>>ch;
	cout<<" "<<endl;
	system("cls");
	cout<<"Hello ";
	SetConsoleTextAttribute(color, 12);
	cout<<ch<<endl;
	//cout<<""<<endl;
	SetConsoleTextAttribute(color, 7);	

	
	while(true)
	{
		//system("cls");
	cout<<"how can i help you"<<endl;
	getline(cin,ch);
system("cls");		
		//cout<<"Tell: ";
		//cin>>ch;
	if(ch=="Sorry i dont need your help"||ch=="dafa ho"||ch=="sorry"||ch=="Sorry"||ch=="bye bye")
	{
		cout<<"Ok,Bye Bye"<<endl;
		{
			exit(0);
		}

	}
	else if(ch=="who are you"||ch=="tum kon ho"||ch=="oy kon ho "||ch=="janii kon ho tum "||ch=="ap kon ho"||ch=="kon ho tum")
	{

	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 11);
	
		cout<<"I m Play World "<<endl;
	SetConsoleTextAttribute(color, 7);	
	}
	
   	else if(ch=="what is this"||ch=="ya kiya hai"||ch=="oy janii what is this "||ch=="??"||ch=="?"||ch=="???")
	{
			HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 11);
		
		cout<<"This Is Music Player,  "<<endl;
		SetConsoleTextAttribute(color, 7);
	}
	else if(ch=="Founder"||ch=="founder kon hai"||ch=="founder?"||ch=="tell me about founder"||ch=="creater"||ch=="developer")
	{
			HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 11);
		cout<<"Uneeb Is The creater of play world  "<<endl;
		cout<<"DATE: 20-Jul-2018 :)"<<endl;
		SetConsoleTextAttribute(color, 7);
	}
	
   	else if(ch=="songs"||ch=="list"||ch=="songs list"||ch=="list of song"||ch=="which songs"||ch=="play songs"||ch=="play music"||ch=="play music"||ch=="music player"||ch=="play"||ch=="music")
   	{
   	system("cls");
	        cout<<"\t\t\tWellcome To Play World"<<endl;		   
   			HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
   		    SetConsoleTextAttribute(color, 11);
   		    string sng;
   		    string vid;
   		    cout<<"These Songs Are Avaliable:\n1)Socha na tha.\n2)NEFFEX - Cold \n3)Tera isqh mein\n4)Make Me Move \n5)Train \n6)Dil Mera"<<endl;
   		    cout<<"Videos"<<endl;
   		    cout<<""<<endl;
   		    cout<<""<<endl;
   		    cout<<"\t\tpress number or name of song if you want to play..."<<endl;
   		    cout<<""<<endl;
   		    cout<<""<<endl;
   		    cout<<"Enter a song name or number: "<<endl;
   		    SetConsoleTextAttribute(color, 7);
   		    gets(dd);
   		   
   		    if(strcmp(dd,"1")==0)

   		    {
   			
   			PlaySound(TEXT("k.wav"),NULL,SND_SYNC);   
   			 char my[100];
			   cout<<"Enter Your Comment Plzz:"<<endl;
			   ofstream myfile;
			   myfile.open("Comments.txt");
			   gets(my); 
			   myfile<<my;
			   myfile.close();
   			system("pause");
		   	system("cls");
       	    }
     	    else if(strcmp(dd,"2")==0)
   		    {
   			
   			PlaySound(TEXT("m.wav"),NULL,SND_SYNC);
			    char my[100];
			   cout<<"Enter Your Comment Plzz:"<<endl;
			   ofstream myfile;
			   myfile.open("Comments.txt");
			   gets(my); 
			   myfile<<my;
			   myfile.close();  
   			system("pause");
		   
   	        }
   	        else if(strcmp(dd,"3")==0)
   		    {
   			
   			PlaySound(TEXT("p.wav"),NULL,SND_SYNC);   
   			 char my[100];
			   cout<<"Enter Your Comment Plzz:"<<endl;
			   ofstream myfile;
			   myfile.open("Comments.txt");
			   gets(my); 
			   myfile<<my;
			   myfile.close();
   			system("pause");
		   
   	        }
   		    else if(strcmp(dd,"4")&&(dd,"Train")==0)
   		    {
   			
   			PlaySound(TEXT("n.wav"),NULL,SND_SYNC);   
   			 char my[100];
			   cout<<"Enter Your Comment Plzz:"<<endl;
			   ofstream myfile;
			   myfile.open("Comments.txt");
			   gets(my); 
			   myfile<<my;
			   myfile.close();
   			system("pause");
		   
   	        }
   	         else if(strcmp(dd,"6")==0)
           {
        	PlaySound(TEXT("s.wav"),NULL,SND_SYNC);
        	
		   }
   		    else if(sng=="5","Train")
   		    {
   			
   			PlaySound(TEXT("o.wav"),NULL,SND_SYNC);   
   			 char my[100];
			   cout<<"Enter Your Comment Plzz:"<<endl;
			   ofstream myfile;
			   myfile.open("Comments.txt");
			   gets(my); 
			   myfile<<my;
			   myfile.close();
   			system("pause");
		   
           }
          
	}

}
}

}
