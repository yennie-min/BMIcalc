#include <iostream>
#include <string>

using namespace std;

int main () {

    float weight = 0.0;
    float height = 0.0;
    float BMI = 0.0;
    string NAME;

    cout << "--------------------------" << endl;
    cout << "Please insert your name." << endl;
    cout << endl;
    cout << "Name : " ;
    cin >> NAME;


    cout << "--------------------------" << endl;
    cout << "Please insert your weight." << endl;
    cout << endl;
    cout << "Weight : " ;
    cin >> weight;

    cout << "--------------------------" << endl;
    cout << "Please insert your height (in m)" << endl;
    cout << endl;
    cout << "Height : " ;
    cin >> height; 

    BMI = weight/ (height*height);

    cout << NAME << ", your BMI is " << BMI << endl;

    return 0;
}