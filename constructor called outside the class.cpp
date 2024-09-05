#include <iostream>
using namespace std;

class student{
	int rno;
	char name[50];
	double fee;
	public:
		student();
		void display();  };
		student::student(){
			cout<<"enter roll no";
			cin>>rno;
			cout<<"enter name";
			cin>>name;
			cout<<"Enter fee";
			cin>>fee;
			}
			void student::display()
			{cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
		}
		int main(){
			student s;
			s.display();
			return 0;
		}
		
		
		/*
		enter roll no 56
enter name shravani
Enter fee 300000

56      shravani        300000
/*
		
