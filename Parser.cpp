/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:52:40 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/11/28 16:52:41 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parser.hpp"

Parser::Parser(){}

Parser::~Parser(){}

Parser::Parser(const Parser &src)
{
	*this = src;
	return ;
}

Parser &Parser::operator=(const Parser &src)
{

	return *this;
}
