/*
** EPITECH PROJECT, 2023
** R-Type
** File description:
** EntityManager
*/

#include "EntityManager.hpp"

ecs2::EntityManager::EntityManager() :
    _nbEntities(0)
{
}

ecs2::EntityManager::~EntityManager()
{
}

ecs2::Entity ecs2::EntityManager::createEntity()
{
    return Entity();
}

void ecs2::EntityManager::destroyEntity(Entity entity)
{
}
