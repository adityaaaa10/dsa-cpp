#include <bits/stdc++.h>
using namespace std;

void printname(string ab)
{
    cout << "Hey my name is " << ab;
}
void dosomething(int num){
   cout << num << endl;
   num += 5;
   cout << num << endl;
   num += 5;
   cout << num << endl;
}

int main()
{
    cout << "Hey Aditya" << "\n";
    cout << "Hey Aditya" << "\n";

    int x, y;
    cin >> x >> y;
    cout << "value of x is " << x << " and y is " << y << "\n";

    cin.ignore();

    string str;
    getline(cin, str);
    cout << str;
    cout << "\n";

    int grade;
    cin >> grade;

    if (grade >= 80)
    {
        cout << "Grade is A";
    }
    else if (grade >= 60)
    {
        cout << "Grade is B";
    }
    else if (grade >= 40)
    {
        cout << "Grade is C";
    }
    else
    {
        cout << "Failed";
    }
    cout << "\n";

    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i];
        cout << "\n";
    }

    string g = "Aditya";
    cout << g[2];
    cout << "\n";
    int len = g.size();
    cout << g[len - 1];

    cout << "\n";
    
    string name;
    cin >> name;
    printname(name);
    cout << endl;

    int z = 10;
    dosomething(z);
    cout << z << endl;
    

    return 0;
}


