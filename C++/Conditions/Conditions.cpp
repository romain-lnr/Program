

#include <iostream>

using namespace std;


    int main()
{
    bool condition = false; // true or false

    if (condition == true)
    {
         //...
    }
    else
    {
        //...
    }


    //Operators:  ==, !=, >=, <=, <, >, &&, ||
    
   
    int age;
    cin >> age;

    if (age >= 18)
    {
        cout << "Bravo, vous etes majeur!" << endl;
    }
    else if (age < 18)
    {
        cout << "Bravo, vous etes mineur!" << endl;
    }

    return 0;
}