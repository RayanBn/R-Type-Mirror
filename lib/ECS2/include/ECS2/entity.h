/*
** EPITECH PROJECT, 2023
** R-Type
** File description:
** entity
*/

#ifndef ENTITY_H_
    #define ENTITY_H_
    #include <cstdint>
    #include <bitset>
    #include "components.h"

    namespace ecs2
    {
        using Entity = std::uint32_t;
        const uint32_t MAX_ENTITIES = 25;

        using Signature = std::bitset<MAX_COMPONENTS>;
    }

#endif /* !ENTITY_H_ */
