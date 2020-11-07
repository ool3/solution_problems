#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    long long a, b;
    cin >> a >> b;
    if (a > b){
        cout << a / 2 + a % 2 << " " << b;
    }else{
        cout << b / 2 + b % 2 << " " << a;
    }
    return 0;
 }
