#include <iostream>

using namespace std;

int main()
{
    /********* Pointer.************/

    // It is a data type which stores address.
    int a = 3;
    // int* b = &a; or int* b; b = &a;
    int *b = &a;        // address of a is &a that is saved in b.
    cout << b << endl;  // address of a.
    cout << *b << endl; //derefrence opretor (*). Gives value of

    // Ponter to Pointer.
    int **c = &b;
    cout << c << endl;   //Address of b.
    cout << *c << endl;  //Address of a.
    cout << **c << endl; //Value of a.

    /************* Array and Pointer *****************/
    // In arrays address are not called by &(nameOFArray) as they can simply called by names.

    int marks[] = {10, 20, 30, 40, 50};
    int *p = marks;
    for (int i = 0; i < 5; i++)
    {
        cout << *p << endl;
        p++; //Incrementing address
    }

    // Structure, Union and Enum (User Defined Data Types.)

    // Structure
    struct project
    {
        int id;
        char Coder;
        char language;
    };

    // typedef struct main
    // {
    //     /* data */
    // } newName;

    project cpp;
    cpp.id = 1;
    cpp.Coder = 'm';
    cpp.language = 'c';
    cout << cpp.Coder << endl;

    // Union
    // Memory is Shared. Only of these can be set.
    union useOne {
        int Fst;
        char Snd;
        float Trd;
    };

    // Enum
    // Opposite of Array(Type of)
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    }; //{0, 1, 2}
    cout << breakfast << endl;
    Meal newMeal = dinner;
    cout << newMeal << endl;

    /*********Function Prototypes and Functions.*********/
    void userDefinedFunction(int, char); //This is Prototype. We can use this to define function after main or anywhere.

    /*********Call by value and call by refrence*************/

    // Pointer Refrence
    int x = 100002000;
    int *xp = &x;
    void one(int*); //Will Change actual Value
    one(xp); // Only called by a Pointer or Address
    cout<<x<<endl;

    // Refrence Variable
    int y = 3000;
    void two(int&); //Will Change the Acutal Variable
    two(y); //Called Simply
    cout<<y<<endl;

    return 0;
}

void one(int *a)
{
    cout << *a << endl;
    *a = 1020;
}

void two(int& b){
    cout<<b<<endl;
    b++;
}