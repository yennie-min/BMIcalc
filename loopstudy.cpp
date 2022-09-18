// echo machine

#include <iostream>
#include <string>
using namespace std;

string str;
char ent;

    void ans()
     {
        cout << "You entered : " << str << endl;
     }
    void roof()
    {
        cout << endl;
        cout << endl;
        cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << endl;
        cout << endl;
    }
    void space()
    {
        cout << endl;
        cout << endl;
        cout << endl;
    }
    void repeat()
    {
        for (int i = 0; i <=10; i++ )
        { 
            cout << "You entered : " << str << endl;
            cout << "REPEAT " << i*2 << endl;
        }
    }
    
 int main () {


    roof();
    cout << "-----------------" << endl;
    cout << "Welcome to the Wroken Echo Machine!" << endl;
    cout << "-----------------" << endl;
    cout << endl;
    cout << "We will repeat what you typed, but our machine is a little weird.." << endl;
    cout << "it's weird and broken. That's why it's called" << endl;
    cout << "as the Wroken Echo Machine!" << endl;
    cout << endl;
    cout << "Enter any (1) alphabet to continue" << endl;
    cout << endl;
    cin >> ent;

    //////////////////////////////////////////////////////

    roof();
    cout << "INSTRUCTION!" << endl;
    cout << endl;
    cout << "1. Type out anything you want, and we will repeat" << endl;
    cout << "the exact same thing!" << endl;
    cout << "To quit the Wroken Echo Machine, type 'QUIT'" << endl;
    cout << endl;
    cout << "Enter any (1) alphabet to continue" << endl;
    cin >> ent;

    do {
        space();
        cout << "Enter text : ";
        if (getline (cin,str)) {
        repeat();
        cout << "Enter text : ";
        ans();}
     } while (str != "QUIT");
    }
 

 

