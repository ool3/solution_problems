#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    // more faster
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    // program
    vector<int>v_all, v_edit;
    int n, p, k, counter_1, counter_2, c = 0;
    cin >> n >> p >> k;
    for (int i = 1; i <= n; i++){
        v_all.push_back(i);
    }
    while (c < k){
        counter_1 = 1;
        counter_2 = 0;
        for(int i = 0; i < v_all.size(); i++){
            if ((i + 1) >= v_all.size() || counter_2 >= v_all.size()) break;
            // cout << v_all[i + counter_1] <<" " << v_all[counter_2] << " ";
            v_edit.push_back(v_all[i + counter_1]);
            v_edit.push_back(v_all[counter_2]);
            counter_2 += 2;
            counter_1++;
        }
        v_all = v_edit;
        c++;
        if (c >= k) break;
        v_edit.clear();
        v_all.insert(v_all.begin(), v_all[v_all.size() - 1]);
        v_all.erase(v_all.end() - 1);

    }
    for (int i = 0; i < v_all.size(); i++){
        if (v_all[i] == p){
            vector<int>::iterator it1 = find(v_all.begin(), v_all.end(), v_all[i - 1]);
            vector<int>::iterator it2 = find(v_all.begin(), v_all.end(), v_all[i + 1]);
            if (it2 != v_all.end() && it1 != v_all.end()){
                cout << v_all[i - 1] << " " << v_all[i + 1];
            }else if (it2 == v_all.end()){
                cout << v_all[i - 1] << " " << v_all[0];
            }else if (it1 == v_all.end()){
                cout << v_all[v_all.size() - 1] << " " << v_all[i + 1];
            }else{
                cout << v_all[v_all.size() - 1] << " " << v_all[0];
            }

        }
    }


    return 0;
};
