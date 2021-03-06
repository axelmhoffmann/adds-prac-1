#include <vector>
#include <string>
#include <iostream>
#include "Item.h"
using namespace std;

class ShoppingList
{
    public:
        void Add(string name, int count);
        void Remove(string name, int count);
        void Print();
        int GetIndex(string name);

    private:
        vector<Item> items;
};