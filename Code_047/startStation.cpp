// link : https://www.geeksforgeeks.org/problems/circular-tour-1587115620/1

#include <iostream>
#include <vector>
using namespace std;

int startStation(vector<int> &gas, vector<int> &cost) {
    int deficit = 0;
    int balance = 0;
    int start = 0;
    
    for(int i = 0; i < gas.size(); i++) {
        balance += gas[i] - cost[i];
        if(balance < 0) {
            deficit += balance;
            start = i + 1;
            balance = 0;
        }
    }
    
    if(deficit + balance >= 0) {
        return start;
    }
    
    return -1;
    
}

int main() {
    vector<int> gas = {1, 2, 3, 4, 5}; 
    vector<int> cost = {3, 4, 5, 1, 2};

    cout << "Start Station is : " << startStation(gas, cost) << endl;

    return 0;
}