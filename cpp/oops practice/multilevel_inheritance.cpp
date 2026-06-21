
#include <iostream>
using namespace std;

class parent{
    public:
    string father;
    string mother;
void parentsname(string father,string mother){
    this->father = father;
    this->mother = mother ;
}
  
};


class me: public parent {
public:
string name ;
string school;
void mydetails(string name ,string school){
this->name = name ;
this->school = school;
}
};

class myson:public me{
public:
string son_name;

int son_age;

void sondetails(string son_name,int son_age){
    this->son_name = son_name ;
    this->son_age =son_age;
}


void givedetails(){
    cout<<"parents details"<<endl;
    cout<<father<<"  "<<mother<<endl;
    cout<<"my details"<<endl;
    cout<<name <<"  "<<school<<endl;
    cout<<"son details"<<endl;
    cout<<son_name<<"  "<<son_age<<endl;
}
};
int main()
{
    myson sunny;

    sunny.sondetails("sunny",17);
    sunny.mydetails("himesh_singh","dps_bharatpur");
    sunny.parentsname("hemendra_singh","sudha");

sunny .givedetails();

    return 0;
}



