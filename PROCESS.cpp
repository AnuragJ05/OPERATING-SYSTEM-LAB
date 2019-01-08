#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"ENTER NUMBER OF PROCESSES : ";
	cin>>n;
	int AT[n],BT[n],CT[n],TAT[n],WT[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<"\nENTER THE ARRIVAL TIME OF PROCESS "<<i+1<<" : ";
		cin>>AT[i];
		cout<<"\nENTER THE BURST TIME OF PROCESS "<<i+1<<" : ";
		cin>>BT[i];
	}
	CT[0]=BT[0]+AT[0];
	int temp=CT[0];
	//cout<<" "<<CT[0];
	for(int i=1;i<n;i++)
	{
		if(CT[i-1]>AT[i])
		{
		CT[i]=temp+BT[i];
		temp=CT[i];
	//	cout<<" "<<CT[i];
	}
	else
	{
		CT[i]=AT[i]+BT[i];
			temp=CT[i];
		//	cout<<" "<<CT[i];
	}
	}
	float AVG_TAT=0.0,AVG_WT=0.0,AVG_CT=0.0;
	for(int i=0;i<n;i++)
	{
		TAT[i]=CT[i]-AT[i];
		WT[i]=TAT[i]-BT[i];
		AVG_CT+=CT[i];
		AVG_TAT+=TAT[i];
		AVG_WT+=WT[i];
		cout<<"\nCOMPLITION TIME OF PROCESS "<<i+1<<" : "<<CT[i];
		cout<<"\nTURN AROUND TIME OF PROCESS "<<i+1<<" : "<<TAT[i];
		cout<<"\nWAITING TIME OF PROCESS "<<i+1<<" : "<<WT[i];
	}
		AVG_CT/=n; AVG_TAT/=n; AVG_WT/=n;
		cout<<"\nAVERAGE COMPLITION TIME OF PROCESS "<<AVG_CT;
		cout<<"\nAVERAGE TURN AROUND TIME OF PROCESS "<<AVG_TAT;
		cout<<"\nAVERAGE WAITING TIME OF PROCESS "<<AVG_WT;
	
}
