/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IOperand.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:53:09 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/11/28 16:53:11 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

enum eOperandType
{
  Int8, Int16, Int32, Float, Double
};

class IOperand
{ 
    public:
    	virtual int getPrecision( void ) const = 0;
    	virtual eOperandType    getType(void) const = 0;
    	
    	virtual IOperand const * operator+(IOperand const & value) const = 0;
    	virtual IOperand const * operator-(IOperand const & value) const = 0;
    	virtual IOperand const * operator*(IOperand const & value) const = 0;
    	virtual IOperand const * operator/(IOperand const & value) const = 0;
    	virtual IOperand const * operator%(IOperand const & value) const = 0;

    	virtual std::string const & toString(void) const = 0;
    	virtual ~IOperand( void ) {}
};
