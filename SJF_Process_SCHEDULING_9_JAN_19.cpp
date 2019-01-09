#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"ENTER NUMBER OF PROCESSES : ";
	cin>>n;
	int BT1[n],BT[n],TAT[n],WT[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<"\nENTER THE BURST TIME OF PROCESS "<<i+1<<" : ";
		cin>>BT[i];
		BT1[i]=BT[i];
		WT[i]=0;
	}
	sort(BT,BT+n);
	WT[0]=0;
	for(int i=1;i<n;i++)
	{
		WT[i]=WT[i-1]+BT[i-1];
	}
	int pos;
	float AVG_TAT=0.0,AVG_WT=0.0,AVG_CT=0.0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;i<n;j++)
	{
		if (BT1[j]==BT[i]){ pos=j+1; break;}
	}
		TAT[i]=BT[i]+WT[i];
		AVG_TAT+=TAT[i];
		AVG_WT+=WT[i];
			cout<<"\nWAITING TIME OF PROCESS "<<pos<<" : "<<WT[i];
			cout<<"\nTURN AROUND TIME OF PROCESS "<<pos<<" : "<<TAT[i];
			
	}
		 AVG_TAT/=n; AVG_WT/=n;
		
		cout<<"\nAVERAGE TURN AROUND TIME OF PROCESS "<<AVG_TAT;
		cout<<"\nAVERAGE WAITING TIME OF PROCESS "<<AVG_WT;
}
