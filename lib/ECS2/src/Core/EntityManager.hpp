/*
** EPITECH PROJECT, 2023
** R-Type
** File description:
** EntityManager
*/

#ifndef ENTITYMANAGER_HPP_
#define ENTITYMANAGER_HPP_

#include <array>
#include <queue>
#include "ECS2/entity.h"

namespace ecs2
{
    class EntityManager
    {
    public:
        EntityManager();
        ~EntityManager();

        Entity createEntity();
        void destroyEntity(Entity entity);

    private:
        uint64_t _nbEntities;
    };
}

#endif /* !ENTITYMANAGER_HPP_ */
