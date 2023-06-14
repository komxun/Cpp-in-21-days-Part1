// Week 1 All-in-one Review


#include <iostream>
using namespace std;

// Day 3
enum CHOICE{        // Define new type "CHOICE" and its values
    DrawRect = 1,
    GetArea,
    GetPerim,
    ChangeDimension,
    Quit }; 

// Day 6
// Rectangle class declaration
class Rectangle
{
    private:
        unsigned int itsHeight;
        unsigned int itsWidth;
    public:
        Rectangle(int width, int height);  // custom constructer
        ~Rectangle();                      // destructer

        int GetHeight() const {return itsHeight;} // Accessor function
        int GetWidth() const {return itsWidth;}
        int GetArea() const {return (itsHeight * itsWidth);}
        int GetPerim() const {return 2*(itsHeight + itsWidth);}
        void SetSize(int W, int H);
};

// Definition of custom constructer and destructer
Rectangle::Rectangle(int width, int height)
{
    itsWidth = width;
    itsHeight = height;
}

Rectangle::~Rectangle() {}

// Definition of member function: SetSize
void Rectangle::SetSize(int W, int H)
{
    itsWidth = W;
    itsHeight = H;
}

// Function Prototypes (Day2)
int DoMenu();
void DoDrawRect(Rectangle);
void DoGetArea(Rectangle);
void DoGetPerim(Rectangle);

//---------------- Main Program ------------------
int main()
{
    Rectangle theRect(30, 5);  // initialize a rectangle
    int choice = DrawRect;     // DrawRect is a type of CHOICE
    int fQuit  = false;

    while(!fQuit)
    {
        choice = DoMenu();     // save user input from menu
        if (choice < DrawRect || choice > Quit)
        {
            cout << "\nInvalid Choice, try again!";
            cout << endl << endl;
            continue;
        }

        switch (choice)
        {
            case DrawRect: DoDrawRect(theRect); break;
            case GetArea:  DoGetArea(theRect);  break;
            case GetPerim: DoGetPerim(theRect); break;
            case ChangeDimension:
                int newHeight, newWidth;
                cout << "\nNew Height: ";
                cin >> newHeight;
                cout << "\nNew Width: ";
                cin >> newWidth;
                theRect.SetSize(newWidth, newHeight);
                DoDrawRect(theRect);
                break;
            case Quit:
                fQuit = true; 
                cout << "Exiting...\n\n";
                break;
            default:
                cout << "Error in choice!" << endl;
                fQuit = true;
                cout << "Exiting...\n\n";
                break;
        }
    }
    return 0;
}

//-------------- End Main Program ----------------

// Functions definitions
int DoMenu()
{
    int choice;
    cout << endl << endl;
    cout << "   *** Menu ***   " << endl;
    cout << "(1) Draw Rectangle" << endl;
    cout << "(2) Area"           << endl;
    cout << "(3) Perimeter"      << endl;
    cout << "(4) Resize"         << endl;
    cout << "(5) Quit"           << endl;

    cout << "Select: ";
    cin >> choice;
    return choice;
}

void DoDrawRect(Rectangle theRect)
{
    int height = theRect.GetHeight();
    int width  = theRect.GetWidth();

    for(int i=0; i<height; i++)
    {
        for(int j=0; j<width; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void DoGetArea(Rectangle theRect)
{
    cout << "Area = " << theRect.GetArea() << endl;
}

void DoGetPerim(Rectangle theRect)
{
    cout << "Perimeter = " << theRect.GetPerim() << endl;
}
