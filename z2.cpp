#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> originalQueue;

    // Формуємо початкову чергу числами від 1 до 100
    for (int i = 1; i <= 100; i++)
    {
        originalQueue.push(i);
    }

    queue<int> filteredQueue;

    // Фільтруємо: діляться на 6 без остачі, але не діляться на 4
    while (!originalQueue.empty())
    {
        int val = originalQueue.front();
        if (val % 6 == 0 && val % 4 != 0)
        {
            filteredQueue.push(val);
        }
        originalQueue.pop();
    }

    cout << "Числа, що дiляться на 6, але не дiляться на 4:" << endl;
    while (!filteredQueue.empty())
    {
        cout << filteredQueue.front() << " ";
        filteredQueue.pop();
    }
    cout << endl;

    return 0;
}