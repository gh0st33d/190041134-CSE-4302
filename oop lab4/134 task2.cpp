#include <bits/stdc++.h>
using namespace std;

class Employee
{
    string EmpName;
    int ID,Age;
    float Salary;
    void getStatus(){
        string status;

        if(Age<=25){
            if(Salary<=20000)
                status= "Low";
            else if(Salary>20000)
                status= "Moderate";
        }

        if(Age>25){
            if(Salary<=21000)
                status= "Low";
            else if(Salary>21000 && Salary <=60000)
                status= "Moderate";
            else if(Salary>60000)
                status= "High";
        }
        cout << "Employee Status: " << status << endl;
    }

public:
    Employee() {}
    void FeedInfo()
    {
        cout << "Employee Name:";
        cin >> EmpName;
        cout << "Employee ID:";
        cin >> ID;
        cout << "Employee Age:";
        cin >> Age;
        cout << "Employee Salary:";
        cin >> Salary;
    }
     void ShowInfo()
    {
        cout << "Employee Name:" << EmpName << ' ' << "Employee ID: " << ID << ' ' << "Employee Age: " << this->Age << ' ';
        cout << "Employee Salary: " << this->Salary << '\n';
        getStatus();
    }
};

int main()
{
    Employee emp1;
    emp1.FeedInfo();
    emp1.ShowInfo();

    return 0;
}
