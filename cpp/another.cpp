#include <iostream>
#include <vector>
#include <string>
using namespace std;
class meta
{
    private:
    double location=363.675;
    vector<string> incognito_history={"cow", "salman", "google"};
    char camera_accessbility='Y';
    const int x=2;
    public:
    static int count;
string suggestion="priya";
int post_no=29;
char level='A';



   void manual(double loc, vector<string> history, char camera, 
         string sugg, int post, char lvl) {
        location = loc;
        incognito_history = history;
        camera_accessbility = camera;
        suggestion = sugg;
        post_no = post;
        level = lvl;
        cout<<this <<endl;
        
    }
    
    
    void getDetails() {
        cout << "\n=== User Profile Details ===" << endl;
        cout << "Location: " << location << endl;
        
        cout << "Incognito History: ";
        if(incognito_history.empty()) {
            cout << "No history found";
    } else {
        cout << endl;
        for(const string& item : incognito_history) {
            cout << "- " << item << endl;
        }
    }
    
    cout << "\nCamera Accessibility: " << camera_accessbility << endl;
    cout << "Suggestion: " << suggestion << endl;
    cout << "Post Number: " << post_no << endl;
    cout << "Level: " << level << endl;
    cout << "===========================" << endl;
}

meta(){
    cout<<"the constructor called :"<<endl;
}

~meta() {
    cout << "Destructor called for object at address: " << this << endl;
}
  
};
int meta::count=8;

int main()
{
    double location;
    string temp;
    vector<string> incognito_history;
    char camera_accessbility;
    string suggestion;
    int post_no;
    char level;
    int person;
string nameofperson ;    
    meta alex, fox;
    meta *sam= new meta();
cout<< meta::count<<endl;
cout<<"how do you get the result : "<<endl;
cout<<"1. default"<<endl;
cout<<"2. manual"<<endl;
int choice;
cin>>choice;

switch(choice){
    case 1:
    alex.getDetails();
    break;


case 2:
    cout << "please enter your location coordinates: " << endl;
    cin >> location;
   
    cout << "please eneter your incognito history : " << endl;
    while (cin >> temp && temp != "end")
    {
        incognito_history.push_back(temp);
    }
   
    cout << "do you want to be access your camera , type 'y' for yes and 'n' for no :" << endl;
    cin >> camera_accessbility;
   
    cout << "for whom you want to send the suggestion: " << endl;
    cin >> suggestion;
   
    cout << "tell us that how many post you till now have : " << endl;
    cin >> post_no;
   
    cout << "at what level you are at: " << endl;
    cin >> level;

alex.manual(location,incognito_history,camera_accessbility,suggestion,post_no,level);

alex.getDetails();

break;
}
sam->manual(location,incognito_history,camera_accessbility,suggestion,post_no,level);

cout<<sam <<endl;
cout<<&alex<<endl;
cout<<&fox<<endl;

delete sam;





    return 0;
}