#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    // Створюємо та заповнюємо чергу 15 цілими числами
    int initialValues[15] = { 5, 12, 45, 8, 50, 73, 23, 10, 60, 34, 9, 15, 99, 41, 2 };
    for (int i = 0; i < 15; i++)
    {
        q.push(initialValues[i]);
    }

    int count = 0;

    cout << "Елементи черги: ";
    // Обробляємо чергу, підраховуючи елементи в діапазоні [10, 50]
    while (!q.empty())
    {
        int val = q.front();
        cout << val << " ";
        if (val >= 10 && val <= 50)
        {
            count++;
        }
        q.pop();
    }
    cout << endl;

    cout << "Кiлькiсть елементiв у дiапазонi вiд 10 до 50 включно: " << count << endl;

    return 0;
}