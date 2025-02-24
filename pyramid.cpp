#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // lahna bch ndakhlou taille taa l pyramid
    int n;
    cin >> n;
    // nasn3ou matrice taille (n,2n) initialisée à des espaces 
    vector<vector<char>> pyramid(n, vector<char>(2 * n, ' '));

    for (int i = 0; i < n; i++) {
        // choix taa l compteur bch najmou nhotou lpyramid fi centre mayjich kayenah triangle rectangle!!!
        int start = n - i - 1;  
        int end = n + i - 1;  
        // pas = 2 bch mabin deux étoiles nal9aw ak l'espace

        for (int j = start; j <= end; j += 2) { 
            pyramid[i][j] = '*';
        }
    }
// tawa je vais afficher l pyramid ta3na
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            cout << pyramid[i][j];
        }
        cout << '\n'; 
    }

    return 0;
}
