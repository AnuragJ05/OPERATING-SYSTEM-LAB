#include<bits/stdc++.h> 
using namespace std;
#define max 30 
class lru
{
	public:
		void getdata()
		{
		    int np,nf,page[max],count=0;
			cout<<"Enter the number of page frames"<<endl;
		    cin>>nf;
		    cout<<"Enter the number of Elements in Reference String "<<endl;
		    cin>>np;
			cout<<"Enter the number of strings"<<endl;
		    for(int i=0;i<np;i++)
		    cin>>page[i];
		    
		    int frame[nf],frame_count[nf];
		    for(int i=0;i<nf;i++)
		    {
		    	frame[i]=-1;
		    	frame_count[i]=0;
			}
			int i=0;
			while(i<np)
			{
				 int j=0,flag=0;
                 while(j<nf)
                 {
				    if(page[i]==frame[j])
				   {    
                      flag=1;
                      frame_count[j]=i+1;
			       }
			        j++;
			     }
			     j=0;    
            if(flag==0)
            {
             int min=0,k=0;
              while(k<nf-1)
                {
                  if(frame_count[min]>frame_count[k+1]) 
                    min=k+1;
                  k++;
                }
               frame[min]=page[i]; 
               frame_count[min]=i+1;    
               count++;           
           }
           
           
           i++; 
          }
         cout<<"Total No. of page fault are : "<<count<<endl;
        int hit_count=np-count;
        cout<<"Total No. of page hits are :"<<hit_count;
		 }
          
};
int main()
{
	lru obj;
	obj.getdata();
}  
