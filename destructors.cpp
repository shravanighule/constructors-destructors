#include <iostream>
using namespace std;
int count=0;

class someclass{
	public:
		someclass()
		{
			count++;
			cout<<"No.of objects created:"<<count<<endl;
			
		}
		
		~someclass()
		{
			count--;
			cout<<"No of objects destroyed:"<<count<<endl;
		}
};

int main()
{someclass aa,bb,cc;
{someclass dd;
}
return 0;
}




/*output
No.of objects created:1
No.of objects created:2
No.of objects created:3
No.of objects created:4
No of objects destroyed:3
No of objects destroyed:2
No of objects destroyed:1
No of objects destroyed:0

--------------------------------
Process exited after 0.1265 seconds with return value 0
Press any key to continue . . .




