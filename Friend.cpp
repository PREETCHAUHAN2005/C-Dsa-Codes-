
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Preet{

    private:
    string teaName;
    int servings;


    public:
    Preet(string name,int serve):teaName(name),servings(serve){}
    friend bool compareServings(const Preet &chai1,const Preet &chai2);

    void display() const {
        cout<<"TeaName: "<<teaName<<endl;

    }



    

 friend bool compareServings(const Preet &chai1,const Preet &chai2){
    return chai1.servings>chai2.servings;
}
};
int main(){
    Preet masalaChai("Masala Chai",14);
    Preet gingerChai("Ginger Chai",8);

    masalaChai.display();
    gingerChai.display();

    if(compareServings(masalaChai,gingerChai)){
        cout<<"Masala chai is having More Servings"<<endl;
    }else{
        cout<<"Masala chai is Having LESS Servings"<<endl;
    }
}