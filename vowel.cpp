#include<iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter a character"<<endl;
    cin>>c;
    switch (c)
    {
    case 'a':
        cout<<"vowel"<<endl;
        break;
    
    case 'e':
        cout<<"vowel"<<endl;
        break;
    
    case 'i':
        cout<<"vowel"<<endl;
        break;
    
    case 'o':
        cout<<"vowel"<<endl;
        break;
    
    case 'u':
        cout<<"vowel"<<endl;
        break;
    
    default:
    cout<<"consonant";
        break;
    }
return 0;
}