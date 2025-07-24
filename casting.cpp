#include<iostream>
using namespace std;
int main(){
    float teaPrice = 49.99;
    int roundedteaPrice = (int) teaPrice;
    int teaQuantity = 2;
    // int total = teaPrice * teaQuantity;
    double total = teaPrice * teaQuantity;
    cout<<total<<endl;
    return 0;
}