#include "ShoppingList.h"

int ShoppingList::GetIndex(string name)
{
    for (int i = 0; i < items.size(); i++)
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
        items[i].count += count;
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

    items[i].count -= count;
    if (items[i].count <= 0)
    {
        items.erase(items.start() + i);
    }
    
}