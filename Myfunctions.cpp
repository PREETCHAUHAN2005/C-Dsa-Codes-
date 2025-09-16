#include <iostream>
using namespace std;

int checkTemperature(int temperature){
    return temperature;
}

// Declaration of Function
void serveChai(int cups);

void serveChai(string teaType = "Masala Tea"){
    cout<<"Serving "<<teaType << endl;
}

void makeChai(){
    cout<<" Boiling Water,adding tea Leaves, Straining...";
}
int main() {
    int temp = checkTemperature(50);
    cout<<temp<<" ";
   makeChai();
//    serveChai("Lemon Tea");
serveChai();


    return 0;
}
// Then Definition of the Function
void serveChai(int cups){
    cout<<"Serving\n"<<cups <<" Cups of Chai\n";
}



