// Container.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    // Built-in static array
    int n1[3]; // [int][int][int]
    n1[0] = 5;
    cout << n1[0] << std::endl;

    // Static array class
    array<int, 5> n2;
    n2[0] = 8;
    n2[1] = 10;
    cout << n2.size() << endl;

    // Dynamic array
    vector<float> n3;
    cout << n3.size() << endl;
    n3.push_back(343);
    n3.push_back(8);
    n3.push_back(109293);
    cout << n3.size() << endl;
    cout << n3[2] << endl;

    for (int i = 0; i < n3.size(); i++) // counter
    {
        cout << n3[i] << endl;
    }

    for (auto i : n3) // range based
    {
        cout << i << endl;
    }

    // stack
    stack<float> f1;
    f1.push(8.88f);
    f1.push(91.11f);
    f1.push(778.34f);
    f1.pop();
    cout << f1.top() << endl;

    // string
    string name = "Henry";
    name[0] = 'B';
    cout << name << endl;

    // C string
    const char* str = "Rodriguez"; // 'R' 'O' 'D' 'R' 'I' 'G' 'U' 'E' 'Z' '\0'
    //str[9] = 'z';
    cout << str << endl;
}