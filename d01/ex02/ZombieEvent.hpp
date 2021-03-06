/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 05:49:29 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 21:41:48 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <cstdlib>
# include "Zombie.hpp"

class ZombieEvent {

public:
	ZombieEvent( void );
	~ZombieEvent( void );

	void	setZombieType( std::string type );
	void	randomChump( void );
	Zombie	*newZombie( std::string name );

private:
	std::string	_type;
};

#endif
