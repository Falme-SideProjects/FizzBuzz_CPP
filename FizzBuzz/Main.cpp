#include <iostream>
#include <string>
using namespace std;

string FizzBuzz(int index)
{
    string x;

    if (index <= 0)
    {
        x = "";
        return x;
    }

    if (index % 3 == 0 && index % 5 == 0)
        x = "FizzBuzz";
    else if (index % 3 == 0)
        x = "Fizz";
    else if (index % 5 == 0)
        x = "Buzz";
    else
        x = to_string(index);

    return x;
}

int PrintFizzBuzz(int lastIndex)
{
    if (lastIndex > 0)
    {
        for (int a = 0; a <= lastIndex; a++)
        {
            cout << FizzBuzz(a) << endl;
        }
    }
    else {
        cout << "Invalid Input" << endl;
    }

    return 0;
}

int main()
{
    int n;

    cout << "=================================" << endl;
    cout << "|  Plase Input FizzBuzz Number  |" << endl;
    cout << "=================================" << endl;

    cin >> n;
    PrintFizzBuzz(n);
    cout << "\n" << endl;
    system("pause");
}