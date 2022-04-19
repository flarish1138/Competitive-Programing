// #include <bits/stdc++.h>
// #define ll long long int
// #define rep(i, a, b) for (i = a; i < b; ++i)
// #define repr(i, a, b) for (i = a; i >= b; --i)
// #define tst()int ttt;cin >> ttt;for (int test = 1; test <= ttt; ++test)

// using namespace std;

// //1.DP se soch
// //2.DP se soch
// //3.DP se soch
// //graph, gcd, BS, seive
// //if NOTA,then
// //brute force hi optimal h

// bool isSafe(int **arr, int x, int y, int n)
// {
//     if (x < n && y < n && arr[x][y] == 1)
//     {
//         return true;
//     }
//     return false;
// }

// bool ratinMaze(int **arr, int x, int y, int n, int **solArr)
// {
//     // Base case
//     if ((x == (n - 1)) && (y == (n - 1))){
//         solArr[x][y] = 1;
//         return true;
//     }

//         if (isSafe(arr, x, y, n))
//         {
//             solArr[x][y] = 1;
//             if (ratinMaze(arr, x + 1, y, n, solArr))
//             {
//                 return true;
//             }
//             if (ratinMaze(arr, x, y + 1, n, solArr))
//             {
//                 return true;
//             }
//             solArr[x][y] = 0; // Backtracking
//             return false;
//         }
//     return false;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(0);

//     int n;
//     cin>>n;

//     int** arr = new int*[n];
//     for(int i =0;i<n;i++){
//         arr[i] = new int[n];
//     }

//     for(int i =0;i<n;i++){
//         for(int j =0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }

//     int** solArr = new int*[n];
//     for(int i =0;i<n;i++){
//         solArr[i] = new int[n];
//         for(int j =0;j<n;j++){
//         solArr[i][j] = 0;
//         }
//     }

//     if(ratinMaze(arr,0,0,n,solArr)){
//         for(int i =0;i<n;i++){
//         for(int j =0;j<n;j++){
//             cout<<solArr[i][j]<<" ";
//         }cout<<"\n";
//     }
//     }


//     return 0;
// }
