/*
** EPITECH PROJECT, 2023
** R-Type
** File description:
** sparse_array
*/

#ifndef SPARSE_ARRAY_HPP_
    #define SPARSE_ARRAY_HPP_
    #include <vector>

    namespace ecs2
    {
        template <typename Component>
        class sparse_array
        {
            public:
                using size_type = typename std::vector<Component>::size_type;

            public:
                sparse_array(size_t size)
                {
                    _data = std::vector<Component>(size)
                };
                sparse_array(const sparse_array &);
                sparse_array(sparse_array &&) noexcept;
                ~sparse_array();

                sparse_array &operator=(const sparse_array &);
                sparse_array &operator=(sparse_array &&) noexcept;
                Component &operator[](size_t idx);
                const Component &operator[](size_t idx) const;

                std::vector<Component>::iterator begin();
                std::vector<Component>::const_iterator begin() const;
                std::vector<Component>::const_iterator cbegin() const;

                std::vector<Component>::iterator end();
                std::vector<Component>::const_iterator end() const;
                std::vector<Component>::const_iterator cend() const;

                Component &insert_at(size_type pos, const Component &);
                Component &insert_at(size_type pos, Component &&);

                void erase(size_type pos);

                size_type get_index(const Component &) const;
                size_type size() const;

                private :
                    std::vector<Component> _data;
        };
    }
#endif /* !SPARSE_ARRAY_HPP_ */
