/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 05:49:24 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 22:32:15 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

const char g_randomNames[] =
	"0123456789"
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	"abcdefghijklmnopqrstuvwxyz";

ZombieEvent::ZombieEvent(void) {
	return ;
}

ZombieEvent::~ZombieEvent(void) {
	return ;
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

void	ZombieEvent::randomChump( void ) {
	Zombie *zombie;
	char name[9];
	int i = 0;

	for (i = 0; i < 8; i++) {
		name[i] = g_randomNames[rand() % sizeof(g_randomNames) - 1];
	}
	name[i] = 0;

	zombie = new Zombie(name, this->_type);
	zombie->announce();
	delete zombie;
	return ;
}

Zombie	*ZombieEvent::newZombie(std::string name) {
	Zombie	*ptr;

	ptr = new Zombie(name, this->_type);
	return (ptr);
}
