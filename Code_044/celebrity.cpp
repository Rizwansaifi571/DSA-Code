#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool knows(vector<vector<int> >& mat, int a, int b) {
    if(mat[a][b] == 1) return true;
    else return false;
}

int celebrity(vector<vector<int> >& mat) {
    stack<int> s;
    
    for(int i = 0; i < mat.size(); i++) {
        s.push(i);
    }

    while(s.size() > 1) {
        int a = s.top();
        s.pop();

        int b = s.top();
        s.pop();

        if(knows(mat, a, b)) {
            s.push(b);
        }
        else s.push(a);
    }
    int candidate = s.top();

    bool rowcheck = true;
    for(int i = 0; i < mat.size(); i++) {
        if(i != candidate && mat[candidate][i] != 0) {
            rowcheck = false;
            break;
        }
    }


    bool colCheck = true;
    for(int i = 0; i < mat.size(); i++) {
        if(i != candidate && mat[i][candidate] != 1) {
            colCheck = false;
            break;
        }
    }


    if(rowcheck == true && colCheck == true) return candidate;
    else return -1;
}

int main() {
    // Sample matrix: person 2 is the celebrity
    vector<vector<int>> mat = {
        {0, 1, 1},
        {0, 0, 1},
        {0, 0, 0}
    };

    int result = celebrity(mat);

    if (result == -1) {
        cout << "No celebrity found." << endl;
    } else {
        cout << "Celebrity is person: " << result << endl;
    }

    return 0;
}
