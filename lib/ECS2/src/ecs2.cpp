/*
** EPITECH PROJECT, 2023
** R-Type
** File description:
** ecs2
*/

#include <iostream>
#include "Core/EntityManager.hpp"
#include "ECS2/components.h"

int initECS(int id)
{
    ecs2::EntityManager eManager;

    eManager.createEntity();
    eManager.createEntity();
    eManager.createEntity();
    eManager.createEntity();
    eManager.createEntity();
    eManager.createEntity();
    eManager.createEntity();
    eManager.createEntity();
    eManager.destroyEntity(15);
    eManager.destroyEntity(1);
    eManager.destroyEntity(6);
    eManager.destroyEntity(4);
    eManager.createEntity();
    eManager.createEntity();
    eManager.createEntity();
    std::cout << "Init: the id is " << id << std::endl;
     return 0;
}

int destroyECS(int id)
{
    std::cout << "Destroy: the id is " << id << std::endl;
    return 0;
}
