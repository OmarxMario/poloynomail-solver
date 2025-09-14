#include <iostream>
using namespace std;
//polonimal sovler solve me polyonmail proplems by ask for a,b,c as a ax^2+bx+c and then ask for the start and the end then its shows the table of the polonial function veritex of curve the maximum or the minimal value and the axis of symity in curve
int main(){
    system("title math");
    system("cls");
    system("color 0c");
    double a;
    double b;
    double c;
    double s;
    double e;
    cout<<"enter at this secuencys ax^2+bx+c";
    cout<<endl<<"a: ";
    cin>>a;
    cout<<endl<<"b: ";
    cin>>b;
    cout<<endl<<"c: ";
    cin>>c;
    system("cls");
    system("color 0b");
    cout<<"good now enter the start,end in this expmple [start,end] "<<endl;
    cout<<"start: ";
    cin>>s;
    cout<<"end: ";
    cin>>e;
    for(s;s<=e;s++){
        cout<<"[x= "<<s<<"] [f(x)="<<((a*(s*s))+(b*s)+(c))<<" ]"<<endl<<endl<<endl;

    }
    cout<<"=================================="<<endl;
    cout<<"veritex of curve is : ("<<(-b/2*a)<<" , "<<(a*((-b/2*a)*(-b/2*a))+b*(-b/2*a)+c)<<")"<<endl;
    if(a>0){
        cout<<"the minimal value of the function is "<<(a*((-b/2*a)*(-b/2*a))+b*(-b/2*a)+c)<<endl;
    }
    else{
        cout<<"the maximum value of the function is "<<(a*((-b/2*a)*(-b/2*a))+b*(-b/2*a)+c)<<endl;
    }
    cout<<"axis of symmetry of the curve is "<<(-b/2*a)<<endl;

    system("pause");
    return 0;

}

