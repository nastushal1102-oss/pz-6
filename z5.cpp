#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    queue<int> supportQueue;

    // Додаємо 6 номерів звернень
    supportQueue.push(101);
    supportQueue.push(102);
    supportQueue.push(103);
    supportQueue.push(104);
    supportQueue.push(105);
    supportQueue.push(106);

    cout << "Всього звернень надiйшло: " << supportQueue.size() << endl;

    // Опрацьовуємо перші три звернення
    cout << "\nОпрацювання перших трьох звернень:" << endl;
    for (int i = 0; i < 3 && !supportQueue.empty(); i++)
    {
        cout << "Опрацьовано звернення №" << supportQueue.front() << endl;
        supportQueue.pop();
    }

    // Виводимо залишок
    cout << "\nКiлькiсть звернень, що залишилися в черзi: " << supportQueue.size() << endl;

    cout << "Номери звернень у черзi: ";
    queue<int> tempQueue = supportQueue;
    while (!tempQueue.empty())
    {
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    cout << endl;

    return 0;
}