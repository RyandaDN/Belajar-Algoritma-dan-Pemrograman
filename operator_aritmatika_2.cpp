#include<cstdlib>
#include<iostream>

using namespace std;

int main(){
	int a=8, b=9, c=39;
	int jwb;
	
	jwb=a+b*c;
	cout<<jwb<<endl;
	jwb+=a;
	cout<<jwb<<endl;
	jwb+=b;
	cout<<jwb<<endl;
	jwb+=c;
	cout<<jwb<<endl;
	
	system("PAUSE");
	return EXIT_SUCCESS;
}
