// Write a program to find whether an alphabet is a vowel or a consonant.
#include<iostream>
using namespace std;

int main(){

  char ch;
  cout<<"Enter an alphabet: ";
  cin>>ch;

  switch(ch)
  {
    case 'a':
    cout<<"It is a vowel"<<endl;
    break;
    case 'e':
    cout<<"It is a vowel"<<endl;
    break;
    case 'i':
    cout<<"It is a vowel"<<endl;
    break;
    case 'o':
    cout<<"It is a vowel"<<endl;
    break;
    case 'u':
    cout<<"It is a vowel"<<endl;
    break;

    default:
    cout<<"It is a consonant"<<endl;
    break;
  }

  return 0;
}
