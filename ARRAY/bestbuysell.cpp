/*#include<iostream>
using namespace std;
void bestbuysell(int *prices,int n){
    int i;
     int bestbuy[100000]; // maximum selling price of stock
     bestbuy[0]=INT8_MIN;
     for(int i=1;i<n;i++)  {
          bestbuy[i]=min(bestbuy[i-1],prices[i-1]);
          cout<<bestbuy[i]<<",";
     }  
     int maxprofit=0;
     for(int j=0;j<n;j++){
        int currprofit=prices[j]-bestbuy[j];
        maxprofit=max(maxprofit,currprofit);
     }   
     cout<<"maxprofit is "<<maxprofit<<endl;;

}
int main(){
    int prices[6]={7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(int);
    bestbuysell(prices,n);
    return 0;
}*/
#include <iostream>
#include <climits>
using namespace std;

void bestbuysell(int *prices, int n) {
    int bestbuy[100000];

    bestbuy[0] = prices[0];

    for (int i = 1; i < n; i++) {
        bestbuy[i] = min(bestbuy[i - 1], prices[i - 1]);
    }

    int maxprofit = 0;

    for (int j = 0; j < n; j++) {
        int currprofit = prices[j] - bestbuy[j];
        maxprofit = max(maxprofit, currprofit);
    }

    cout << "maxprofit is " << maxprofit << endl;
}

int main() {
    int prices[6] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);

    bestbuysell(prices, n);
    return 0;
}

