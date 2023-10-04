/*
** EPITECH PROJECT, 2023
** B-CPP-500-PAR-5-1-rtype-hugo.raygade
** File description:
** LinuxSocket
*/

#ifndef LINUXSOCKET_HPP_
#define LINUXSOCKET_HPP_

#include "SocketManager/ISocketManager.hpp"

class LinuxSocket: public ISocketManager {
    public:
        LinuxSocket();

        void connect() override;

        ~LinuxSocket();

    protected:
    private:
};

#endif /* !LINUXSOCKET_HPP_ */
