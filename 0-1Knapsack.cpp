#include<iostream>
using namespace std;
int main()
{
int n=4 ,m=14;
int wt[4]={2,5,8,3};
int pr[4]={10,15,16,12};
int k[5][15];
int i,j;
for(i=0;i<=n;i++){
for(j=0;j<=m;j++)
{
if(i==0 || j==0)
    k[i][j]=0;

else if(wt[i-1]<=j)
k[i][j]=max(k[i-1][j],k[i-1][j-wt[i-1]]+pr[i-1]);

else 
k[i][j]=k[i-1][j];
}
}
cout<<"The maximum profit we get from the knapsack is: "<<k[n][m]<<endl;
i=n;
j=m;
cout << "Items included in the knapsack are:" << endl;
while(i>0 && j>0){
if(k[i][j]==k[i-1][j]){

    cout<<i<<"=0"<<endl;
    i--;}
    else
    {
        cout<<i<<"=1"<<endl;
        j=j-wt[i-1];
        i--;
    }
}
cout << "DP Table:" << endl;
for (i = 0; i <= n; i++) {
    for (j = 0; j <= m; j++) {
        cout << k[i][j] << " ";
    }
    cout << endl;
}
}