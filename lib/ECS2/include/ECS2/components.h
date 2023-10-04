/*
** EPITECH PROJECT, 2023
** rtype
** File description:
** Components
*/

#ifndef COMPONENTS_H_
    #define COMPONENTS_H_

    #include <cstdint>
    #include "maths.h"

    namespace ecs2
    {
        using ComponentType = std::uint8_t;
        const std::uint8_t MAX_COMPONENTS = 32;

        struct Transform
        {
            Vector3 position;
            Vector3 rotation;
            Vector3 scale;
        };

        struct Sprite
        {
            char *texture;
        };

        struct BoxCollider
        {
            Vector3 size;
        };

        struct RigidBody
        {
            Vector3 velocity;
            Vector3 acceleration;
            Vector3 force;
            int mass;
        };

        struct Gravity
        {
            Vector3 force;
        };
    }

#endif /* !COMPONENTS_H_ */
