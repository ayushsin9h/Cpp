#include<iostream>
using namespace std;
int n=5;
int wt[10]={5,10,20,30,40};
int pr[10]={30,20,100,90,160};
int W=60;
int main(){
int cur_wt;
int total_value=0;
int i, maxi;
int used[10];
for(i=0;i<n;i++)
{
used[i]=0;
}
cur_wt=W;
while(cur_wt > 0)
{
maxi=-1;
for(i=0;i<n;i++)
{
if (used[i]==0 && (maxi==-1 ||(float)pr[i]/(float)wt[i] > (float)pr[maxi]/(float)wt[maxi]))
{
    /* code */
    maxi=i;
    }}
    if(maxi== -1){
    break;
}
    used[maxi]=1;
if(cur_wt >=wt[maxi]){
    cur_wt-=wt[maxi];
total_value+=pr[maxi];
cout << "Added object " << (maxi + 1) << " (" << pr[maxi] << ", " << wt[maxi] << ") completely in the bag. Space left: " << cur_wt << "\n";
}
else{
float fraction= (float)cur_wt/wt[maxi];
total_value+=fraction*pr[maxi];
cur_wt=0;
 cout << "Added  " << (int)(fraction * 100) << "% of object" << (maxi + 1) << " (" << pr[maxi] << ", " << wt[maxi] << ") to the bag.\n";
}
}
cout<<"The bag is filled with object worth  "<<total_value<<endl;
return 0;
}