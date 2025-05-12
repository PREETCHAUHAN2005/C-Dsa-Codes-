#include<iostream>
#include<vector>
using namespace std;





int main(){

int n;
cin>>n;

vector<vector<int> > vec(n, vector<int> (n));

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){

        cin>>vec[i][j];
    }

    
}
rotateArray(vec);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<vec[i][j]<<" ";
    }cout<<endl;
}


    return 0;
}