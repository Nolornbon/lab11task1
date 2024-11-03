#include <iostream>
using namespace std;

int main() {
    int a0 = 1; 
    int a1 = 3;  
    int n = 10;  
    int current;
    
    cout << "a0 = " << a0 << endl;
    cout << "a1 = " << a1 << endl;
   
    for (int i = 2; i < n; i++) {
        current = 7 * a1 - 3 * a0;  
        cout << "a" << i << " = " << current << endl;
        a0 = a1;
        a1 = current;
    }

    return 0;
}
