/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 05:49:31 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 22:31:50 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

std::string		itoa(int i)
{
    std::stringstream s;
    s << i;
    return (s.str());
}

void			ZombieOnTheHeap(ZombieEvent &event) {
	Zombie		*ptr;
	int			i = 0;

	event.setZombieType("HeapZombies");
	while (i < 4) {
		ptr = event.newZombie("Zombie" + itoa(i));
		ptr->announce();
		delete ptr;
		i++;
	}
}

int main(void)
{
	ZombieEvent event;
	ZombieOnTheHeap(event);
	event.setZombieType("RandomChump");
	event.randomChump();
	event.randomChump();
	event.randomChump();

	Zombie zombie1("Zombie0", "StackZombies");
	zombie1.announce();
	return (0);
}
