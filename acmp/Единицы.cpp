#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    long long n, counter;
    counter = 0;
    cin >> n;
    while (n > 0){
        if (n % 2 == 1){
            counter += 1;
        }
        n /= 2;
    }
    cout << counter;
    return 0;
 }
