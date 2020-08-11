// 3. Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
//   if employee is female, then she will work only in urban areas.

//   if employee is a male and age is in between 20 to 40 then he may work in anywhere

//   if employee is male and age is in between 40 t0 60 then he will work in urban areas only.

//   And any other input of age should print "ERROR".


#include <iostream>
using namespace std;

int main()
{
    string sex,marital_status;
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<endl;
    cout<<"Enter your sex(M/m or F/f): ";
    cin>>sex;
    cout<<endl;
    cout<<"Enter marital_status(Y/y or N/n): ";
    cin>>marital_status;
    cout<<endl;
    
    if((sex=="m" || sex=="M" || sex=="f"|| sex=="F")&&(marital_status=="Y" || marital_status=="y"|| marital_status=="N"|| marital_status=="n"))
    {
        if((sex=="F"|| sex=="f")&&(age>=20&&age<=60))
        {
            cout<<"she will work only in urban areas."<<endl;
        }
        else
        {
            if(age>=20 && age<=40)
            {
                cout<<"he may work in anywhere"<<endl;
            }
            else if(age>40 && age<=60)
            {
                cout<<"he will work in urban areas only."<<endl;
            }
            else
            {
                cout<<"ERROR"<<endl;
            }
        }
    
    }
    else
    {
        cout<<"ERROR"<<endl;
    }
    

}
