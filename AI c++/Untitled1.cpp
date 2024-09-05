#include <iostream>
#include <string>
using namespace std;
class Cars {        
  public:              
    void brand();
	int model();
	int year();   
};

void Cars::brand() {
cout<<"Brand:\tModel\tyear"<<endl;	
  cout << "BMW:";
  cout<<"\t";
}
int Cars::model(){
	cout<<"8789";
	cout<<"\t";
}
int Cars::year(){
	cout<<"8787"<<endl;
}

int main() {
  Cars myObj;     
  myObj.brand();  
  myObj.model();
  myObj.year();
  return 0;
}
