#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<vector<char>> pyramid(n, vector<char>(2 * n, ' '));

    for (int i = 0; i < n; i++) {
        int start = n - i - 1;  
        int end = n + i - 1;    

        for (int j = start; j <= end; j += 2) { 
            pyramid[i][j] = '*';
        }
    }

    // Affichage de la pyramide
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            cout << pyramid[i][j];
        }
        cout << '\n'; 
    }

    return 0;
}
