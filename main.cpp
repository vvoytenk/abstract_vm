/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:52:46 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/11/28 16:52:47 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Lexer.hpp"
#include "Parser.hpp"

int main(const int argc, const char* argv[])
{
	Lexer	l;
	Parser	p;

	if (argc == 1)
	{
		l.start(NULL);
	}
	if (argc == 2)
	{
		l.start(argv[1]);
	}
    return 0;
}
