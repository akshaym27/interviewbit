#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<vector<int> > solve(int A) {
    if(A==0) {return {};}
    vector<vector<int> > B(A);
    
    B[0].push_back(1);
    for(int i=1;i<A;i++)
    {
        B[i].push_back(1);
        
        for(int j=1 ; j<i;j++)
        {
            B[i].push_back(B[i-1][j-1] + B[i-1][j]);
        } 
        B[i].push_back(1);
    }
    
    return B;
}

int main()
{
    
    vector<vector<int> > A = solve(5);
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
        cout<<endl;
    
    return 0;
}
