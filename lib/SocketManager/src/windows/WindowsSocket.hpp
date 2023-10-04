/*
** EPITECH PROJECT, 2023
** B-CPP-500-PAR-5-1-rtype-hugo.raygade
** File description:
** WindowsSocket
*/

#ifndef WINDOWSSOCKET_HPP_
#define WINDOWSSOCKET_HPP_

#include "SocketManager/ISocketManager.hpp"

class WindowsSocket: public ISocketManager {
    public:
        WindowsSocket();

        void connect() override;

        ~WindowsSocket();

    protected:
    private:
};

#endif /* !WINDOWSSOCKET_HPP_ */
