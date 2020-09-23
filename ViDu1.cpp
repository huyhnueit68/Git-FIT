#include <iostream>
using namespace std;
int main(int a, char *n[]){
	cout<<"The world hello Huy" <<endl;
	cout<<"So luong tham so: "<< a <<endl;
	
	cout<<"\n"<<n[0];
	cout<<"\n"<<n[1];
	cout<<"\n"<<n[2];
	cout<<"\n"<<n[3];

	for(int i=0;i<a;i++)
	{
		cout<<"\n"<<*(n+i);
	}
	
	return 0;
}
