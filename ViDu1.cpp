#include <iostream>
using namespace std;
int main(int a, char *n[]){
	cout<<"The world hello Huy" <<endl;
	cout<<"So luong tham so: "<< a <<endl;
	

	for(int i=0;i<a;i++)
	{
		cout<<"\n"<<*(n+i);
	}
	//ahihihihi
	
	return 0;
}
