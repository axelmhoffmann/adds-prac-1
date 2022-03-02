#include "ShoppingList.h"

vector<string> end_terms = {"end", "exit", "quit", "q"};

bool string_matches(vector<string> arr, string query)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == query)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ShoppingList list;

    bool loop = true;
    while (loop)
    {
        list.Print();

        cout << endl << "in > ";
        string input;
        cin >> input;

        if (string_matches(end_terms, input))
        {
            loop = false;
        }
    }
}