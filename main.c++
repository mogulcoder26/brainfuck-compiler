#include <iostream>
#include <vector>
#include <cctype>
#include <string>
using namespace std;
void brainFuck(char code[])
{
    char *fuckedChar{code};
    int lengthOfCode{0};
    for (int i = 0; *(fuckedChar + i) != '\0'; i++)
    {
        lengthOfCode++;
    }; // Time Complexity:O(n)

    for (int i = 0; i <= lengthOfCode - 1; i++) // Time Complexity:O(n){worst case}
    {
        fuckedChar = &code[i];
        switch (*fuckedChar)
        {
        case '>':
            fuckedChar++;
            break;
        case '<':
            fuckedChar--;
            break;
        case '+':
            (*fuckedChar)++;
            break;
        case '-':
            (*fuckedChar)--;
            break;
        case '[':
        
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
    cout << "Enter your Brainfuck Code:" << endl;
    cin >> code;
    brainFuck(code);
    return 0;
}