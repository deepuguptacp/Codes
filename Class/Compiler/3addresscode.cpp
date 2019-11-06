#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

int priority(char c)
{
    if (c == '/')
        return 5;
    if (c == '*')
        return 4;
    if (c == '+')
        return 3;
    if (c == '-')
        return 2;
    if (c == '=')
        return 1;
    return 0;
}

bool oper(char c)
{
    switch (c)
    {
    case '+':
    case '-':
    case '*':
    case '/':
        return true;
    }
    return false;
}

int main()
{

    stack<string> variable;
    stack<char> operation;
    string str;
    cout << "Enter the expression\n";
    cin >> str;
    vector<string> v;
    vector<string> vagain;
    int i = 0, j = 1;
    for (i = 0; i < str.size(); i++)
    {
        if (oper(str[i]))
        {
            if (operation.empty())
            {
                operation.push(str[i]);
                continue;
            }
            if (priority(operation.top()) < priority(str[i]))
            {
                operation.push(str[i]);
            }
            else
            {
                string temp = "";
                // cout<<"vari=";
                // cout<<variable.top()<<endl;
                temp += (variable.top());
                variable.pop();
                temp += operation.top();
                operation.pop();
                temp += variable.top();
                variable.pop();
                reverse(temp.begin(), temp.end());
                v.push_back("t"+to_string(j)+"="+temp);
                variable.push(to_string(j)+"t");
                
                j++;
                i--;
            }
        }
        else
        {
            variable.push(string(1,str[i]));
        }

        if (str.size() == i + 1)
        {
            while (!operation.empty())
            {
                string temp = "";
                temp += variable.top();
                variable.pop();
                temp += operation.top();
                operation.pop();
                temp += variable.top();
                variable.pop();
                reverse(temp.begin(), temp.end());
                v.push_back("t"+to_string(j)+"="+temp);
                variable.push(to_string(j)+"t");
                j++;
            }
        }
    }
    v.push_back(string(1,str[0])+"="+string(1,v.back()[0])+string(1,v.back()[1]));
    cout<<"In Three address mode\n";
    for (auto &&i : v)
    {
        cout << i << endl;
    }

    return 0;
}