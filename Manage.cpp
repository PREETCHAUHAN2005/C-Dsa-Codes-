#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<string>

using namespace std;
struct Employee{
    int id;
    string name;
    double salary;
};
void displayEmployee(const Employee& emp){
    cout<<"ID: "<<emp.id<<" ,Name"<<emp.name<< " ,Salary:$"<<emp.salary<<endl;
}
int main(){
    vector<Employee> employees={
        {1,"Preet",5000000.0},
        {2,"Nikhil",500000.0},
        {3,"Ankit",600000.0},
        {4,"Rohit",700000.0},
        {5,"Aman",800000.0},
        };
   
    sort(employees.begin(),employees.end(),[](const Employee& e1,const Employee& e2){
        return e1.salary > e2.salary;
    });
    cout << "Employees sorted by salary -> Highest to Lowest \n";
    for_each(employees.begin(),employees.end(),displayEmployee);

vector<Employee> highEarners;
copy_if(
    employees.begin(),
    employees.end(),
    back_inserter(highEarners),
    [](const Employee& e){
        return e.salary > 50000;
    }
);
cout << "Employees who are high earners \n";
    for_each(highEarners.begin(),highEarners.end(),displayEmployee);

    double totalSalary = accumulate(employees.begin(),employees.end(),0.0,[](double sum,const Employee& e){
        return sum+e.salary;
    }
);
double averageSalary = totalSalary / employees.size();
cout << "Average Salary of Employees: $"<<averageSalary<<endl;
 auto highestPaid = max_element(employees.begin(),employees.end(),[](const Employee& e1,const Employee& e2){
    return e1.salary<e2.salary;
}); 


return 0;
 };