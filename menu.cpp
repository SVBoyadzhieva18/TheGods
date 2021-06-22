#include <iostream>
using namespace std;

void ShowMenu()
{
	int c;
  do{ 
  	
  cout<<"\nMain menu\n\n";
  cout<<"1 - Enter text\n";
  cout<<"2 - View text\n";
  cout<<"3 - Sort text\n";
  cout<<"4 - Search text\n";
  cout<<"5 - Delete text\n";
  cout<<"6 - Quit program\n";
  cout<<"Your choice:";
  cin>>c;
  
  switch(c){
  	 case 1: 
	    break;
  	 case 2: 
	   break;
  	 case 3:  
	   break;
  	 case 4:
	    break;
  	 case 5:
	    break;
  	 
  	      }
  } while (c!=6);
}

int main()
{
	ShowMenu();
}