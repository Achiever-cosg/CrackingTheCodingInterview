#include <bits/stdc++.h>
using namespace std;

void zeroMatrix(vector<vector<int>>& nums, int m, int n)
{   
    vector<int> zeroIndexRows(m, 0);
    vector<int> zeroIndexCols(n, 0);

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(nums[i][j] == 0)
            {
                zeroIndexRows[i] = 1;
                zeroIndexCols[j] = 1;
            }
        }
    }

    cout<<"Setting the matrix"<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(zeroIndexRows[i] == 1 || zeroIndexCols[j] == 1)
            {
                nums[i][j] = 0;
            }
        }
    }

    cout<<"Completed"<<endl;
}

void printMatrix(vector<vector<int>>& nums, int m, int n)
{
    // print the matrix
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
   int m, n;
    cout<<"Enter the number of rows and columns: ";
    cin>>m>>n;

    vector<vector<int>> nums(m, vector<int>(n, 0));
    cout<<"Enter the numbers: "<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>nums[i][j];
        }
    }

    zeroMatrix(nums, m, n);
    cout<<"The  zero matrix is: "<<endl;
    printMatrix(nums, m, n);

	return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

//     int row[n] = {0}; // row array
//     int col[m] = {0}; // col array

//     // Traverse the matrix:
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == 0) {
//                 // mark ith index of row wih 1:
//                 row[i] = 1;

//                 // mark jth index of col wih 1:
//                 col[j] = 1;
//             }
//         }
//     }

//     // Finally, mark all (i, j) as 0
//     // if row[i] or col[j] is marked with 1.
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (row[i] || col[j]) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     return matrix;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1, 2}, {1, 0, 1, 3}, {1, 1, 1, 1}};
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> ans = zeroMatrix(matrix, n, m);

//     cout << "The Final matrix is: \n";
//     for (auto it : ans) {
//         for (auto ele : it) {
//             cout << ele << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

