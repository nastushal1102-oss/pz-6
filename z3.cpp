#include <iostream>
#include <queue>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string text;
    cout << "Введiть рядок: ";
    getline(cin, text);

    queue<char> charQueue;
    // Заповнюємо чергу символами рядка
    for (char c : text)
    {
        charQueue.push(c);
    }

    int countA = 0;
    while (!charQueue.empty())
    {
        char c = charQueue.front();
        if (tolower(c) == 'a')
        {
            countA++;
        }
        charQueue.pop();
    }

    cout << "Кiлькiсть входжень лiтери 'a' (незалежно вiд регiстру): " << countA << endl;

    return 0;
}