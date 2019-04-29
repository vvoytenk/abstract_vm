/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lexer.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:52:20 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/11/28 16:52:21 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Lexer.hpp"

Lexer::Lexer(){}

Lexer::~Lexer(){}

Lexer::Lexer(const Lexer &src)
{
	*this = src;
	return ;
}

Lexer &Lexer::operator=(const Lexer &src)
{
	line = src->line; //huinya
	return *this;
}


void	Lexer::start(const char *file)
{

	if (!file)
	{
		while(std::getline(std::cin, line))
		{

		}
	}
}