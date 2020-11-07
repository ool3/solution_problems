#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector <long long> ar_even;
    vector <long long> ar_odd;
    for (int i = 0; i < n; i++){
        long long number;
        cin >> number;
        if (number % 2 == 0){
            ar_even.push_back(number);
        }else{
            ar_odd.push_back(number);
        }

    }
    vector<long long>::iterator it1 = ar_odd.begin();
    while (it1!= ar_odd.end()){
        cout << *it1<< " ";
        ++it1;
    }
    cout << "\n";
    vector<long long>::iterator it2 = ar_even.begin();
    while (it2!= ar_even.end()){
        cout << *it2<< " ";
        ++it2;
    }
    cout << "\n";
    if (ar_even.size() >= ar_odd.size()){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
 }

// *it1 - распаковка
