#include<iostream>
using namespace std;
int main(){
    int semesters;
    cout<<"Enter the number of semesters: ";
    cin>>semesters;
    float totalGPA = 0.0;

    for(int s = 1; s<= semesters; s++){
        int courses;
        cout<<"enter the number if courses in semester "<<s<<": ";
        cin>>courses;

        float totalCredits = 0.0;
        float totalGradePoints = 0.0;
        for(int i =1; i<=courses; i++){
            float grade, credits;
            cout<<"Enter grade and credits for course "<<i<<": ";
            cin>>grade;
            cout<<"enter credits for course "<<i<<": ";
            cin>>credits;
            totalCredits += credits;
            totalGradePoints += grade * credits;


        }
        float GPA = totalGradePoints / totalCredits;
        cout<<"\nGPA for semester "<<s<<": "<<GPA<<endl;
        totalGPA += GPA;

    }
    float CGPA = totalGPA / semesters;
    cout<<"\n GPA is: "<<CGPA<<endl;
    cout<<"*******************************"<<endl;
    return 0;
}