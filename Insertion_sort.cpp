#include <iostream>
#include <vector>

void Insertion_sort(std::vector<int> &v)
{
    int i = 0, j = 0 , key = 0;
    for(i = 1; i < v.size(); ++i)
    {
        key = v[i];
        j = i - 1;
        while(j >= 0 && v[j] > key)
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }

    // Print my sorting array
    for(int i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << " ";
    }
}

int main()
{
    std::vector<int> array{23,45,9,76,454,2,-56556,343,678,-566,32,234};
    Insertion_sort(array);
}