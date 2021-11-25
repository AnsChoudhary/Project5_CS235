#include <string>

#include "DoublyLinkedList.hpp"
#include "ITComparator.h"
#include "Solutions.cpp"

using namespace std;

int main()
{
    int numbers[10] = { 66, 1, 69, 2, 85, 100, 3, 63, 14, 32 };

    DoublyLinkedList<int> list1, list2, list3;

   for (size_t i = 0; i < 10; i++)
    {
        list1.insert(numbers[i], i + 1);
        list2.insert(numbers[i], i + 1);
        list3.insert(numbers[i], i + 1);
    }


   list1.display();

   /* solutions::bubbleSort(list1, LessThan<int>());
    list1.display();

    cout << endl;*/

    /*solutions::insertionSort(list2, LessThan<int>());
    list2.display();*/

    cout << endl;

    //solutions::mergeSort(list3, LessThan<int>());
    //list3.display();

    return 0;
}