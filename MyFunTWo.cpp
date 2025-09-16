//  CAll By VAlue
// #include <iostream>
// using namespace std;

// void pourChai(int &cups){
//     cups = cups+5;
//     cout<<"Poured Cups: "<< cups <<endl;
// }



// int main(){

//     int cups=2;
//     pourChai(cups);
//     cout<<" Total Cups are "<< cups << endl;

//     return 0;
// }




// Call By Reference 
// #include <iostream>
// using namespace std;

// void pourChai(int &cups){
//     cups = cups+5;
//     cout<<"Poured Cups: "<< cups <<endl;
// }



// int main(){

//     int cups=2;
//     pourChai(cups);
//     cout<<" Total Cups are "<< cups << endl;

//     return 0;
// }

// Lamda Function
#include<iostream>
using namespace std;
int main(){
    auto preparedChai = [](int cups){
        cout<<"Preparing" << 
          cups << " Cups of Tea" << endl;
    };
    preparedChai(4);
    return 0;
}