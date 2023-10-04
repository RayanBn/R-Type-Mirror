/*
** EPITECH PROJECT, 2023
** rtype
** File description:
** main
*/

#include <iostream>
#include "SocketManager/SocketManager.hpp"

int main()
{
	SocketManager socketManager;

	socketManager.getSocket()->connect();
	return 0;
}
