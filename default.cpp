#include<iostream>
using namespace std;
#include<vector>

class Hero{
    public:
    
    string teaName;
    int servings;
    vector<string> ingredients;

    //  Default constructor

Hero(){
    teaName="Lemon Tea";
    servings=1;
    ingredients={"Water","Lemon","Milk","Jaggery"};
        cout<<" Constructor Called"<<endl;
    }


void displayChaiDetails(){
    cout<<"Chai Name: "<<teaName<<endl;
    cout<<"Servings: "<<servings<<endl;
    cout<<"Ingredients: ";
    for(string ingredient : ingredients){
        cout<<ingredient<<" ";
    }
    cout<<endl;


}
};

int main(){
   Hero Preet;
   Preet.displayChaiDetails();
    return 0;
}
