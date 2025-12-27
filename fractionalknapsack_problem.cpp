#include <iostream>
using namespace std;
void knapsack(int n, float weight[], float profit[], float capacity){
    float x[20],totalprofit=0;
    int i, remainingcapacity;
    remainingcapacity=capacity;
    for(i=0;i<=n;i++)
    x[i]=0.0;//initialising x as 0 if no item has been added yet
    for(i=0;i<=n;i++)
{
    if(weight[i]>remainingcapacity)
    break;
    else{
    totalprofit+=profit[i];
    remainingcapacity-=weight[i]; }   
}
if (i < n)
        x[i] = remainingcapacity / weight[i]; // Fraction of the item added

    totalprofit += x[i] * profit[i]; // Update total profit with the fraction

//printing the result 
cout << "\n The result vector is:- ";
    for (i = 0; i < n; i++)
        cout << x[i] << "\t";

    cout << "\n Maximum profit is:- " << totalprofit << endl;
}
int main()
{
float weight[20], profit[20], capacity;
    int num, i, j;
    float ratio[20], temp;

    // Get the number of objects
    cout << "\nEnter the number of objects:- ";
    cin >> num;

    // Input weights and profits for each object
    cout << "\nEnter the weights and profits of each object:- ";
    for (i = 0; i < num; i++) {
        cout << "\nEnter the weight and profit of object " << i + 1 << ":- ";
        cin >> weight[i] >> profit[i];
    }


    // Input the knapsack capacity
    cout << "\nEnter the capacity of the knapsack:- ";
    cin >> capacity;

    // Calculate profit-to-weight ratio for each object
    for (i = 0; i < num; i++) {
        ratio[i] = profit[i] / weight[i];
    }

    // Sort the objects by profit-to-weight ratio in descending order
    for (i = 0; i < num; i++) {
        for (j = i + 1; j < num; j++) {
            if (ratio[i] < ratio[j]) {
                // Swap ratios
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;

                // Swap weights
                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;

                // Swap profits
                temp = profit[j];
                profit[j] = profit[i];
                profit[i] = temp;}}
}
    knapsack(num, weight, profit, capacity);

    return 0;
}
