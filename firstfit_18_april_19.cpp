# include<iostream>
using namespace std;

main()
{
	
	int block,process;
	cout<<"Enter no. of block : ";
	cin>>block;
	cout<<"\nEnter no. of process : ";
	cin>>process;
	int bsize[block],psize[process],alloted[block],store[process];
	for(int i=0;i<block;i++)
	{
		cout<<"\nEnter size of block: "<<i+1<<" : ";
		cin>>bsize[i];
		alloted[i]=0;
		
	}
	for(int i=0;i<process;i++)
	{
		cout<<"\nEnter size of process :"<<i+1<<" : ";
		cin>>psize[i];
		store[i]=0;
	}
	
	for(int i=0;i<process;i++)
	{
		for(int j=0;j<block;j++)
		{
			if(psize[i]<bsize[j] && alloted[j]==0)
			{
				alloted[j]=1;
				store[i]=j+1;
				break;
			}
		}
	}
	
for(int i=0;i<process;i++)
	{
		
		if(store[i]!=0)
		{
		cout<<"\nprocess "<<i+1<<" stored at : "<<store[i];
	}
	else cout<<"\nprocess "<<i+1<<" not alloted any space ";
	}
	
	
}
