/*
** EPITECH PROJECT, 2023
** B-CPP-500-PAR-5-1-rtype-hugo.raygade
** File description:
** SocketManager
*/

#ifndef SOCKETMANAGER_HPP_
#define SOCKETMANAGER_HPP_

#include "ISocketManager.hpp"
#include "WindowsSocket.hpp"
#include "LinuxSocket.hpp"

class SocketManager {
    ISocketManager *_socket;

    public:
        SocketManager() {
            #ifdef _WIN32
                _socket = new WindowsSocket();
            #elif defined(__linux__)
                _socket = new LinuxSocket();
            #endif
        }
        
        ISocketManager* getSocket() {
            return _socket;
        }
};

#endif /* !SOCKETMANAGER_HPP_ */
