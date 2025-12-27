#include<iostream>
using namespace std;
int n=6;
int wt[10]={3,5,8,9,7,6};
int pr[10]={40,4,5,13,17,3};
int W=70;
int main(){
int cur_wt;
int total_val=0;
int i, maxi;
int use[10];
for(i=0; i<n;i++){
use[i]=0;
}
cur_wt=W;
while(cur_wt>0){
    maxi=-1;
for(i=0;i<n;i++)
{
    if(use[i]==0 && (maxi==-1 || (float)pr[i]/(float)wt[i] > (float)pr[maxi]/(float)wt[maxi]))
    {
        maxi=i;
    }
}
if(maxi== -1){
    break;
}
use[maxi]=1;
if(cur_wt>=wt[maxi]){
    cur_wt-=wt[maxi];
    total_val+=pr[maxi];
    cout<<"Added object"<<(maxi+1)<<"("<<pr[maxi]<<","<<wt[maxi]<<" ) is compeltely filled having the space left in the sack"<<cur_wt<<"\n"<<endl;
}
else
{
    float frac= (float)cur_wt/wt[maxi];
    total_val+=frac*pr[maxi];
    cur_wt=0;
    cout<<"Added"<< (int)( frac * 100) <<"% of object"<<maxi+1<<"("<<pr[maxi]<<","<<wt[maxi]<<" ) to the bag.  \n"<<endl;
     
     }
}
cout<<"Then total worth of the knapsack is"<<total_val<<endl;
return 0;
}