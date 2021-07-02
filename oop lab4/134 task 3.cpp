#include<bits/stdc++.h>
using namespace std;

class StudentResult
{
    static int passingMark;
    int subjectMark[5];
    bool fail;

public:
    void setMarks()
    {
        int m;
        cout << "Subject 0 Marks:";
        cin >> m;
        subjectMark[0]=m;

        cout << "Subject 1 Marks:";
        cin >> m;
        subjectMark[1]=m;

        cout << "Subject 2 Marks:";
        cin >> m;
        subjectMark[2]=m;

        cout << "Subject 3 Marks:";
        cin >> m;
        subjectMark[3]=m;

        cout << "Subject 4 Marks:";
        cin >> m;
        subjectMark[4]=m;

        cout << "Subject 5 Marks:";
        cin >> m;
        subjectMark[5]=m;
    }

    void displayMarks(){
        for(int n=0;n<=5;n++){
            cout << "Subject " << n << "Marks = " << subjectMark[n] << endl ;
        }
    }

    void checkPassing()
    {
        fail= false;
        for(int n=0;n<=5;n++){
            if(subjectMark[n]<passingMark){
                fail=true;
            }
        }
        if(fail==1){
            cout << "Student will fail in the semester" << endl;
        }
        else
            cout << "Student will pass in the semester" << endl;
    }
};

int StudentResult::passingMark =33;

int main()
{
    StudentResult s1;
    s1.setMarks();
    s1.displayMarks();
    s1.checkPassing();


    return 0;
}

