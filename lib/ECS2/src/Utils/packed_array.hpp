/*
** EPITECH PROJECT, 2023
** R-Type
** File description:
** packed_array
*/

#ifndef PACKEDARRAY_HPP_
#define PACKEDARRAY_HPP_
#include <vector>
#include <cstdint>

namespace ecs2
{
    template <typename T>
    class packed_array
    {
    public:
        packed_array(){};
        ~packed_array() = default;

        size_t addItem(const T &item)
        {
            _items.push_back(item);
            return _items.size() - 1 > 0 ? _items.size() - 1 : 0;
        }

        bool removeItem(size_t index)
        {
            if (index < 0 || index >= _items.size())
                return false;
            _items.at(index) = _items.back();
            _items.pop_back();
            return true;
        }

        size_t size()
        {
            return _items.size();
        }

    protected:
    private:
        std::vector<T> _items;
    };
}

#endif /* !PACKEDARRAY_HPP_ */
