/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:59:55 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/11/28 16:59:57 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>
#include "IOperand.hpp"


template<class T>
class Type : public IOperand
{
    public:
        Template();
        ~Template();

        IOperand const * operator+(IOperand const & value) const
        {

        }
        IOperand const * operator-(IOperand const & value) const
        {
        	
        }
        IOperand const * operator*(IOperand const & value) const
        {
        	
        }
        IOperand const * operator/(IOperand const & value) const
        {
        	
        }
        IOperand const * operator%(IOperand const & value) const
        {
        	
        }




};

#endif

