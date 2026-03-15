#include<iostream>
using namespace std;
#include <vector>

int main(){

    /*int size;
    cin >> size;

    int *arr = new int[size];

    int x = 1;

    for(int i = 0; i < size; i++){
        arr[i] = x;
        cout << arr[i] << " ";
        x++;
    }

    cout << endl;*/

    /*vector<int>vector;
    vector.push_back(10);
     vector.push_back(20);
      vector.push_back(30);
      vector.push_back(40);

      for(int i=0;i<vector.size();i++){
        cout<<vector[i]<<" ";
        cout<<"Size: "<<vector.size()<<endl<<" ";
        cout<<"Capacity: "<<vector.capacity()<<endl;
        
      }
*/

vector<int> v;

for(int i=0;i<10;i++){

    v.push_back(i);

    cout<<"Size: "<<v.size()<<" ";
    cout<<"Capacity: "<<v.capacity()<<endl;

}


    return 0;
}