#include<iostream>
using namespace std;

class arraytree{
    int tree[100];
    int count;

    public :
        arraytree(){
               count = 0 ;
               for(int i = 0; i<100 ; i++){
                tree[i]=-1;
               }
        }
         void insert(int value){
            if(count < 100){
                tree[count]= value;
                count ++;

            }else{
                cout << "Tree is full!" << endl;
            }
         }
          // Display tree with parent-child relation
    void display() {
        for (int i = 0; i < count; i++) {
            cout << "Node: " << tree[i];

            int left = 2 * i + 1;
            int right = 2 * i + 2;

            if (left < count)
                cout << " | Left: " << tree[left];
            else
                cout << " | Left: NULL";

            if (right < count)
                cout << " | Right: " << tree[right];
            else
                cout << " | Right: NULL";

            cout << endl;
        }
    }
};
int main() {
    arraytree t;

    t.insert(10);
    t.insert(20);
    t.insert(30);
    t.insert(40);
    t.insert(50);
    t.insert(60);
    t.insert(70);

    t.display();

    return 0;
}