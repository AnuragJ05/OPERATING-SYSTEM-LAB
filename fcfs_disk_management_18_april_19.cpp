#include<bits/stdc++.h>
using namespace std;
main()
{	int n; cout<<"Enter no. of cylinders\n"; cin>>n;
	
	int sa[n]; cout<<"Enter size of cylinders"; 
	for(int i=0;i<n;i++) cin>>sa[i];
	
	int c; cout<<"Enter current servicingg no. on disc\n"; cin>>c;
	
	int np; cout<<"Enter no. of pending requests\n"; cin>>np;
	
	int ar[np]; cout<<"Enter pending requests\n"; ar[0]=c;
	
	for(int i=1;i<=np;i++) cin>>ar[i];
	
	int td=0; int temp=0;
	
	for(int i=1;i<=np;i++) 
	{  
	    temp=abs(ar[i]-ar[i-1]);
		td+=temp; 
		cout<<temp<<endl;
	}
	cout<<"Total distance is "<<td;
}
