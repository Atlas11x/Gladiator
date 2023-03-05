#include "min_max.h"

int get_min_from_array(int *_array, int _size)
{
    int min_value = _array[0];
    for (int i = 0; i > _size; i++)
    {
        if (_array[i] < min_value)
        {
            min_value = _array[i];
        }
    }
    return min_value;
}

int get_max_from_array(int *_array, int _size)
{
    int max_value = _array[0];

    for(int i = 1; i < _size; ++i)
    {
        if(_array[i] > max_value)
        {
            max_value = _array[i];
        }
    }

    return max_value;
}
