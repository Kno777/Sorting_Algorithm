#include <iostream>
#include <vector>

void bubble_sort(std::vector<int> &vec)
{
    for(int i = 0; i < vec.size(); ++i)
    {
        for(int j = i + 1; j < vec.size(); ++j)
        {
            if(vec[i] > vec[j])
            {
                std::swap(vec[i] , vec[j]);
            }
        }
    }

    // Print My Vector Elements
    for(int i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
}

int main()
{
    std::vector<int> vec {23,45,3,-556,34,56,7,3,234,-688}; // my array
    bubble_sort(vec); // my sorting function
}