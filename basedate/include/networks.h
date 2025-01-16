#pragma once

#include "includes.h"
#include "commands.h"

#define PORT 7432

int server, new_socket; // идентификатор сокетов сервера и нового(для взаимодействия)
struct sockaddr_in server_address; // информация о адресе сервера
int addrlen = sizeof(server_address);
int opt = 1; // переменная для настройки сокета

void createServer(BaseDate& shopNet); 
void createSocket(); // ф-ия создания сокета сервера
void connectClient(BaseDate& shopNet); // ф-ия прослушивания и принятия входящих соединений
void procOfReq(int client_socket, BaseDate& shopNet, mutex& mx); // ф-ия обработки запроса от клиента

#include "../src/networks.cpp"
