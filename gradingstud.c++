#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    for(int i = 0; i< n; i++){
        int grade;
        cin >> grade;
        
        if (grade < 38) {
            cout << grade << "\n";
            continue;
        }
        
        int a = grade % 5;
        if (5 - a < 3)
            grade += 5 - a;
        cout << grade << "\n";
    }
    return 0;
}
