#include<iostream>
using namespace std;
#include<vector>

class Hero{
    public:
    
    string teaName;
    int servings;
    vector<string> ingredients;

    //  Default constructor

Hero(string name,int serv,vector<string> ingr){
    teaName=name;
    servings=serv;
    ingredients=ingr;
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
   Hero Preet("Lemon Tea",2,{"Water","Lemon","Milk","Jaggery"});
   Preet.displayChaiDetails();
    return 0;
}
