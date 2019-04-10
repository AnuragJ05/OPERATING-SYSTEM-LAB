# include<iostream>
using namespace std;

main()
{
	int process;
	cout<<"Enter no. of process : ";
	cin>>process;
	cout<<"Enter no. of resource : ";
	int resource;
	cin>>resource;
	
	int current_allocation[process][resource];
	cout<<"Enter current allocation : ";
	for(int i=0;i<process;i++)
	{
		for(int j=0;j<resource;j++)
		{
			cin>>current_allocation[i][j];
		}
	}
	cout<<"Enter max allocation : ";
	int Max_allocation[process][resource];
	for(int i=0;i<process;i++)
	{
		for(int j=0;j<resource;j++)
		{
			cin>>Max_allocation[i][j];
		}
	}
	int need_allocation[process][resource];
	for(int i=0;i<process;i++)
	{
		for(int j=0;j<resource;j++)
		{
			need_allocation[i][j]=Max_allocation[i][j]-current_allocation[i][j];
		}
	}
	cout<<"Enter available : ";
	int available[resource];
	for(int i=0;i<resource;i++)
	cin>>available[i];

	int running[process];
	for(int i=0;i<process;i++)  running[i]=1;
	int counter=process;
	while(counter--)
	{
		int safe=0;
	 	for(int i=0;i<process;i++)
		{
		  
		  	if(running[i])
		  	{
		  		int execution=1;
		  		for(int j=0;j<resource;j++)
		 		 {
		 		 	if(need_allocation[i][j]>available[j])
		 		 	{
		 		 		execution=0;
		 		 		break;
					  }
			  }
			  if(execution) {
			  running[i]=0;
			  counter--;
			  safe=1;
			  for(int j=0;j<resource;j++)
			  {
			  	available[j]+=current_allocation[i][j];
			  }
			  
			}
		}
		if(safe) cout<<"\nIT IS NOT SAFE";
			break;
		}	
		
		
	}
		
}
