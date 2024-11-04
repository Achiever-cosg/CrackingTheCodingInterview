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
