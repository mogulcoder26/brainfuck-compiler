#include <iostream>
#include <vector>
#include <string>
#include<stack>
using namespace std;

void brainFuck(char code[])
{
    char *fuckedChar{code};
    char *rememberChar{code};
    int lengthOfCode{5};

    // for (int i = 0; i<=lengthOfCode-1; i++)
    // {
    //     lengthOfCode++;
    // }; // Time Complexity:O(n)

    for (int i = 0; i <= lengthOfCode - 1; i++) // Time Complexity:O(n){worst case}
    {
        switch (*fuckedChar)
        {
        case '.':break;
        case ',':break;
        case '>':
            // cout << "val:" << static_cast<int>(*fuckedChar) << endl;
            fuckedChar++;
            break;
        case '<':
            // cout << "val:" << *fuckedChar << endl;
            fuckedChar--;
            break;
        case '+':
            (*fuckedChar)++;
            break;
        case '-':
            (*fuckedChar)--;
            break;
        case '[':
            rememberChar=fuckedChar;
            while(*(fuckedChar)!='0'){

            }
            break;
        case ']':
            break;
        default:
            cout << "Compilation ERR" << endl;
        }
    }
}

int main()
{
    char code[30000];
    for (int i = 0; i <= 30000; i++)
    {
        code[i] = '0';
    }
    // cout<<code<<endl;
    cout << "Enter your Brainfuck Code:" << endl;
    cin >> code;
    cout << code << endl;
    brainFuck(code);
    return 0;

    
}