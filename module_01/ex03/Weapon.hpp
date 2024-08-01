/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:46:52 by tcampbel          #+#    #+#             */
/*   Updated: 2024/08/01 14:30:29 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_H
#define	WEAPON_H

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(const char* club);
	const std::string& 	getType();
	void				setType(const char *type);
	void				setWeapon(Weapon *club);
	~Weapon();
};

#endif