#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Product
{
    string name;
    int quantity;
};

int main()
{
    queue<Product> warehouse;

    // Додаємо товари на складі
    warehouse.push({ "Клавіатура", 15 });
    warehouse.push({ "Мишка", 7 });
    warehouse.push({ "Монітор", 4 });
    warehouse.push({ "Флешка", 25 });
    warehouse.push({ "Кабель HDMI", 8 });
    warehouse.push({ "Навушники", 12 });

    cout << "Товари, яких залишилося менше нiж 10 одиниць:" << endl;
    while (!warehouse.empty())
    {
        Product p = warehouse.front();
        if (p.quantity < 10)
        {
            cout << "- " << p.name << ": " << p.quantity << " шт." << endl;
        }
        warehouse.pop();
    }

    return 0;
}