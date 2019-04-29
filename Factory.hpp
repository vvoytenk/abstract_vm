/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Factory.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:02:50 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/11/28 17:03:00 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FACTORY_HPP
#define FACTORY_HPP

#include <iostream>
#include "IOperand.hpp"

class Factory
{
    public:
        Factory();
        Factory(const Factory &src);
        ~Factory();

        Factory &operator=(Factory const &src);

        IOperand const * createOperand( eOperandType type, std::string const & value ) const;
    private:
    	IOperand const * createInt8( std::string const & value ) const;
		IOperand const * createInt16( std::string const & value ) const;
		IOperand const * createInt32( std::string const & value ) const;
		IOperand const * createFloat( std::string const & value ) const;
		IOperand const * createDouble( std::string const & value ) const;

		std::map<eOperandType, IOperand const *> map;
};

#endif

