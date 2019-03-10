#include<iostream>
#include<math.h>
//#include<conio.h>
using namespace std;

void TOH(int n,char src,char aux,char des)
{ 
	if(n==1)
	{
		cout<<"Move Disk "<<n<<" from "<<src<<" to "<<des<<endl;
		return;
	}
	TOH(n-1,src,des,aux);
	cout<<"Move Disk "<<n<<" from "<<src<<" to "<<des<<endl;
	TOH(n-1,aux,src,des);
}

int main()
{ 
	int n,count;
	cout<<"Enter no. of disks:";	
	cin>>n;
    count=(pow(2,n)-1);
    cout<<"\nNumber of moves needed : "<<count<<endl;
    TOH(n,'A','B','C');
    cout<<endl;
	//getch();
	return 0;
}