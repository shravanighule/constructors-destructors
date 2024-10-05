#include <iostream>
using namespace std;

class wall{
	double length;
	double height;
	
	public:
		
		Wall(double len,double hgt){
			length=len;
			height=hgt;
		}
		
		wall(wall&obj){
			length=obj.length;
			height=obj.height;
		}
		double calculateArea(){
			return length*height;
		}};
		
		int main(){
			
			wall wall1(10.5,8.9);
			wall wall2 = wall1;
			
			cout<<"Area of Wall1;"<<wall1.calculateArea()<<endl;
			cout<<"Area of Wall2;"<<wall2.calculateArea()<<endl;
			}
		
