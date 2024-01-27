#include<iostream>
using namespace std;
class students{
    
    string name;
    int age;
    string roll_Number;
    string grade;
    public:

    //function getter setter
    void setname(string s){
        if(s.size() ==0){
            cout<<"Invalid name";
            return;
        }
        name=s;
    }

    void setage(int ag){
        age = ag;
    }

    void setgrade(string grd){
        grade = grd;
    }
    void setroll_number(int n){
        roll_Number= n; 
    }

    string getGrade (string pin){
        
        if(pin == "nitian_ajit"){
            cout<<"The grade of student s1 is : ";
            return grade;
        }
        else{
            return " ";
        }
    }
};
int main()
{
    
    students s1;
    s1.setname("Ajit yadav");
    s1.setgrade("S");
 
    // s1.setroll_number("23CSB0F31");
    string str;
    cout<<"Enter the pin to see the grade of the student 1 :";
    cin>>str;
    
    cout<<s1.getGrade(str);

   
}

