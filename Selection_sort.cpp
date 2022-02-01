#include <iostream>
#include <vector>


void Selection_sort(std::vector<int> &v)
{
    int i , j, min_ind;
    for(i = 0; i < v.size(); ++i)
    {
        min_ind = i;
        for(j = i+1; j < v.size(); ++j)
        {
            if(v[min_ind] > v[j])
            {
                min_ind = j;
            }
        }
        std::swap(v[min_ind],v[i]);
    } 

    //Print my sorting array
    for(int i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << " ";
    }
}

int main()
{
    std::vector<int> array{23,45,9,76,454,2,-56556,343,678,-566,32,234};
    Selection_sort(array);
}