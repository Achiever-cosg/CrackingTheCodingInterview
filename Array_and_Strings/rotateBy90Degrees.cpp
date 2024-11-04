#include <bits/stdc++.h>
using namespace std;

// Reverse each row of the transpose of the given matrix
void rotateClockwise(vector<vector<int>>& nums, int n)
{
    // transpose
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            swap(nums[i][j], nums[j][i]);
        }
    }

    // reverse the rows
    for(int i=0; i<n; i++)
    {
        reverse(nums[i].begin(), nums[i].end());
    }
}

// Reverse each row of the matrix and then find the transpose
void rotateAntiClockwise(vector<vector<int>>& nums, int n)
{
    // reverse the rows
    for(int i=0; i<n; i++)
    {
        reverse(nums[i].begin(), nums[i].end());
    }

    // transpose
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            swap(nums[i][j], nums[j][i]);
        }
    }
}

void printMatrix(vector<vector<int>>& nums, int n)
{
    // print the matrix
    for(int i=0; i<n; i++)
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
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    vector<vector<int>> nums(n, vector<int>(n));
    cout<<"Enter the numbers: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>nums[i][j];
        }
    }

    rotateClockwise(nums, n);
    cout<<"The clock-wise roatated matrix is: "<<endl;
    printMatrix(nums, n);

    rotateAntiClockwise(nums, n);
    cout<<"The anti-clockwise roatated matrix is: "<<endl;
    printMatrix(nums, n);

	return 0;
}