//lab 11

//problem 1

// #include <iostream>
// using namespace std;
//
// int main() {
//     int n, m, sum = 0;
//     cin >> n >> m;
//     int a[n][m];
//     for(int i = 0; i < n; i++)
//         for(int j = 0; j < m; j++) {
//             cin >> a[i][j];
//             sum += a[i][j];
//         }
//     cout << sum;
//     return 0;
// }

//problem 2

// #include <iostream>
// using namespace std;
//
// int main() {
//     int n, m;
//     cin >> n >> m;
//     int a[n][m];
//     for(int i = 0; i < n; i++)
//         for(int j = 0; j < m; j++)
//             cin >> a[i][j];
//     for(int i = 0; i < n; i++) {
//         int maxVal = a[i][0];
//         for(int j = 1; j < m; j++)
//             if(a[i][j] > maxVal)
//                 maxVal = a[i][j];
//         cout << maxVal << " ";
//     }
//     return 0;
// }

//problem 3

// #include <iostream>
// using namespace std;
//
// int main() {
//     int n, m;
//     cin >> n >> m;
//     int a[n][m];
//     for(int i = 0; i < n; i++)
//         for(int j = 0; j < m; j++)
//             cin >> a[i][j];
//     for(int j = 0; j < m; j++) {
//         int colSum = 0;
//         for(int i = 0; i < n; i++)
//             colSum += a[i][j];
//         cout << colSum << " ";
//     }
//     return 0;
// }

//problem 4

// #include <iostream>
// using namespace std;
//
// int main() {
//     int n, sum = 0;
//     cin >> n;
//     int a[n][n];
//     for(int i = 0; i < n; i++)
//         for(int j = 0; j < n; j++) {
//             cin >> a[i][j];
//             if(i == j) sum += a[i][j];
//         }
//     cout << sum;
//     return 0;
// }

//problem 5

// #include <iostream>
// using namespace std;
//
// int main() {
//     int m, n;
//     cin >> m >> n;
//     int a[m][n], b[n][m];
//     for(int i = 0; i < m; i++)
//         for(int j = 0; j < n; j++)
//             cin >> a[i][j];
//     for(int i = 0; i < m; i++)
//         for(int j = 0; j < n; j++)
//             b[j][i] = a[i][j];
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++)
//             cout << b[i][j] << " ";
//         cout << endl;
//     }
//     return 0;
// }

//problem 6

// #include <iostream>
// using namespace std;
//
// int main() {
//     int r1, c1, r2, c2;
//     cin >> r1 >> c1;
//     int a[r1][c1];
//     for(int i = 0; i < r1; i++)
//         for(int j = 0; j < c1; j++)
//             cin >> a[i][j];
//     cin >> r2 >> c2;
//     int b[r2][c2], c[r1][c2] = {};
//     for(int i = 0; i < r2; i++)
//         for(int j = 0; j < c2; j++)
//             cin >> b[i][j];
//     for(int i = 0; i < r1; i++)
//         for(int j = 0; j < c2; j++)
//             for(int k = 0; k < c1; k++)
//                 c[i][j] += a[i][k] * b[k][j];
//     for(int i = 0; i < r1; i++) {
//         for(int j = 0; j < c2; j++)
//             cout << c[i][j] << " ";
//         cout << endl;
//     }
//     return 0;
// }

//problem 7

// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;
//     int a[n][n], b[n][n];
//     for(int i = 0; i < n; i++)
//         for(int j = 0; j < n; j++)
//             cin >> a[i][j];
//     for(int i = 0; i < n; i++)
//         for(int j = 0; j < n; j++)
//             b[j][n - 1 - i] = a[i][j];
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++)
//             cout << b[i][j] << " ";
//         cout << endl;
//     }
//     return 0;
// }