//A. Empty Papers – Easy Version – (Gold)
//time limit per test1 second
//memory limit per test256 megabytes
//We are finally done preparing for EPC 3.0 and everything is looking great.

//The final task remains to distribute empty papers on the participants' desks.

//Currently there are k
// organizers, each organizer i
 //will randomly choose two tables li
 //and ri
 //and distribute exactly one empty paper to each table from li
 //to ri
 //(inclusive).

//Since all organizers are very good C++ programmers, they used 0-based indexing to describe the tables' indices.

//Your task is to find out whether every table has at least p
 //empty paper.

//For the easy version of the problem p
 //will only be equal to 1.

//Input
//The first line contains three integers n
//, k
// (1≤n,k≤105
//) and p
// (p==1
//), where n
 //is the number of tables, k
 //is the number of organizers and p
 //is the minimum number of empty papers that are required per desk.

//The next k
 //lines contain 2 integers li
 //and ri
 //(0≤li≤ri≤n−1
//) – the indices of the tables.

//Output
//Print "YES" if every table has at least p
//empty papers. Otherwise print "NO".//
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n, k, p;
    cin >> n >> k >> p;
 
    vector<int> diff(n + 1, 0);
 
    for (int i = 0; i < k; i++) {
        int l, r;
        cin >> l >> r;
        diff[l] += 1; 
        if (r + 1 < n) {
            diff[r + 1] -= 1; 
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        count += diff[i];
        if (count < p) { 
            cout << "NO" << endl;
            return 0;
        }
    }
 
    cout << "YES" << endl;
    return 0;
}