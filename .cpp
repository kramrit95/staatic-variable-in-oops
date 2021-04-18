#include <iostream>
using namespace std;
class Employe{
int id;
static int count;
public :
    void setData(void)
    {
    cout<<"enter the id"<<endl;
    cin>>id;
    count++;
    }
    void getData(void)
    {
    cout<<"id of Employe is "<<id<<"number of Employe "<<count<<endl;
    }

    
};
int Employe:: count;//defult value of static variable is 0.it declared outside the class of static variable and mermory in class .

int main() {
//Amrit.id=11;//id is private
Employe  Amrit,Akash,Abhisheak;
Amrit .setData ();
Amrit.getData();

Akash .setData ();
Akash.getData ();

Abhisheak .setData ();
Abhisheak .getData ();

return 0;
}
