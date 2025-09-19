#include<iostream>
using namespace std;
#include<vector>

class Hero{
    public:
    
    string* teaName;
    int servings;
    vector<string> ingredients;

    //  parameter constructor

Hero(string name,int serv,vector<string> ingr){
    teaName= new  string(name);
    servings=serv; 
    ingredients=ingr;
        cout<<" Constructor Called"<<endl;
    }

   Hero(Hero& other){
    teaName=new string(*other.teaName
    );
    servings=other.servings;
    ingredients=other.ingredients;
    cout<<"Copy Constructor Called"<<endl;

   }
    ~Hero(){
        delete teaName;
        cout<<" Destructor Called"<<endl;
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
//    Preet.displayChaiDetails();
   Hero copiedChai = Preet;
//    copiedChai.displayChaiDetails();

   *Preet.teaName="BAgh BAkri";

   cout<<"Lemon TEa"<<endl;
   Preet.displayChaiDetails();
   cout<<"Copied Chai"<<endl;
    copiedChai.displayChaiDetails();


    return 0;
}
