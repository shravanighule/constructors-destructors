#include <iostream>
using namespace std;

class Pconstruct{
	int a,b;
	public:
	Pconstruct(int m, int n){
		a = m;
		b = n;
		
	}
	
	void putdata(){
		cout<<"a="<<a<<endl<<"b="<<b;
		}};
		int main(){
		Pconstruct numbers(10,20);
		numbers.putdata();
		
	

	}
	
	
	/*
	a=10
b=20
/*


