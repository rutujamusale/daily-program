
// [7:22 PM, 8/7/2020] Rutuja:
#include<iostream>

using namespace std;





int main()
{
    int num, original_num, remainder , result =0;
    cout<<"Enter a three-digit integer : ";
    cin>>num;
    original_num=num;

    while (original_num>0)
    {
        remainder=original_num %10;

        result =result+(remainder*remainder*remainder);
        original_num=original_num/10;

    }
    if(result==num)
    {
        cout<<num<<"is an Armstrong number.";
    }
    else
    {
        cout<<num<<"is not an Armstrong number.";
    }

    return 0;



}
