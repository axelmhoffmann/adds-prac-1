#include "ShoppingList.h"

int ShoppingList::GetIndex(string name)
{
    for (size_t i = 0; i < items.size(); i++)
    {
        if (items[i].name == name)
        {
            return i;
        }
    }

    return -1;
}

void ShoppingList::Add(string name, int count)
{
    int index = GetIndex(name);
    if (index != -1)
    {
        items[index].count += count;
        return;
    }

    items.push_back(Item(name, count));
}

void ShoppingList::Remove(string name, int count)
{
    int index = GetIndex(name);
    if (index == -1)
    {
        return;
    }

    items[index].count -= count;
    if (items[index].count <= 0)
    {
        items.erase(items.begin() + index);
    }
}

void ShoppingList::Print()
{
    for (size_t i = 0; i < items.size(); i++)
    {
        cout << to_string(items[i].count) << " x " << items[i].name << endl;
    }
}