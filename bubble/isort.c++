#include <map>
#include <set>
#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void insertionSort(vector <int>  a) {

    int arr = *( a.end() - 1);
    int i ;
    for (i = a.size(); i > 1; --i) {
        if(arr < a[i-2]) {
            a[i-1] = a[i-2];
            for (int j = 0; j < a.size(); ++j) {
                cout << a[j] << " ";
            }
            cout << endl;
        }
        else {
            break;
        }
    }
        a[i-1] = arr;
            for (int j = 0; j < a.size(); ++j) {
                cout << a[j] << " ";
            }
            cout << endl;
}


int main() {
   vector <int>  _a;
   int _a_size;
cin >> _a_size;
for(int _a_i=0; _a_i<_a_size; _a_i++) {
   int _a_tmp;
   cin >> _a_tmp;
   _a.push_back(_a_tmp); 
}

insertionSort(_a);
   
   return 0;
}
