//Ans Choudhary
//4/24/21
//Ans.Choudhary35@myhunter.cuny.edu

#ifndef SOLUTIONS_H
#define SOLUTIONS_H
#include "DoublyLinkedList.hpp"
namespace solutions
{
    /* Bubblesort */
    template <typename Comparable, typename Comparator>
    void bubbleSort(DoublyLinkedList<Comparable> &a_list, const Comparator &comp)
    {
        int i, j;
        for (i = 1; i < a_list.getSize(); ++i)
        {
            for (j = 1; j < a_list.getSize(); ++j)
            {
                if (comp(a_list.getAtPos(j + 1)->getItem(), a_list.getAtPos(j)->getItem()))
                    a_list.swap(j, j + 1);
            }

        }

    }

    /* Insertionsort */
    template <typename Comparable, typename Comparator>
    void insertionSort(DoublyLinkedList<Comparable> &a_list, const Comparator &comp)
    {
        int i, j;

        Comparable temp;

        for (i = 1; i <= a_list.getSize(); i++)
        {
            temp = a_list.getAtPos(i)->getItem();

            j = i;

            while (j > 1 && (comp(temp, a_list.getAtPos(j - 1)->getItem())))
            {
                a_list.swap(j, j-1);

                j--;
            }

        }
    }

    /* Merge */
    template <typename Comparable, typename Comparator>
    void merge(DoublyLinkedList<Comparable> &a_list, int left_index, int middle_index, int right_index, const Comparator &comp) {
int i1 = left_index;
int i2= middle_index+1;
int cnt=middle_index-left_index+1;
int i=0;
while ((i<cnt) && (i2 <= right_index)){
    if(comp(a_list.getAtPos(i2+1)->getItem(),a_list.getAtPos(i1+1)->getItem())){
        int v=a_list.getAtPos(i2+1)->getItem();
        a_list.remove(i2+1);
        a_list.insert(v,i1+1);
        i2++;
        i1++;
    }
    else{
        i1++;
        i++;
    }
}
    }
    /* Mergesort */
    template <typename Comparable, typename Comparator>
    void mergeSort(DoublyLinkedList<Comparable> &a_list, int left_index, int right_index, const Comparator &comp)
    {
        if (left_index >= right_index)
            return;

        int middle_index =  (left_index + right_index)  / 2;
        //int middle_index = left_index + ((right_index-1) / 2);


        mergeSort(a_list, left_index, middle_index, comp);
        mergeSort(a_list, middle_index + 1, right_index, comp);
        merge(a_list, left_index, middle_index, right_index, comp);
    }

    /* Mergesort Wrapper */
    template <typename Comparable, typename Comparator>
    void mergeSort(DoublyLinkedList<Comparable> &a_list, const Comparator &comp)
    {
        if (nullptr == a_list.getHeadPtr() || nullptr == a_list.getHeadPtr()->getNext())
            return;

        int size = a_list.getSize()-1 ;

        mergeSort(a_list, 0, size, comp);

    }

// namespace solutions

/* DO NOT USE THESE:
	* Shellsort *
	template <typename Comparable, typename Comparator>
	void shellSort(DoublyLinkedList<Comparable> &a_list, const Comparator &comp)
	{
	}
	* Quicksort *
	template <typename Comparable, typename Comparator>
	void quicksort(DoublyLinkedList<Comparable> &a_list, int left_index, int right_index, const Comparator &comp)
	{
	}
	* Quicksort Wrapper *
	template <typename Comparable, typename Comparator>
	void quickSort(DoublyLinkedList<Comparable> &a_list, const Comparator &comp)
	{
	}
*/

}; // namespace solutions

#endif // !SOLUTIONS_H


