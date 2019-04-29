/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lexer.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:52:14 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/11/28 16:52:16 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEXER_HPP
#define LEXER_HPP

#include <iostream>
#include <string>

class Lexer
{
    public:
        Lexer();
        Lexer(const Lexer &src);
        ~Lexer();

        Lexer &operator=(Lexer const &src);

        void	start(const char *file);
    private:
    	std::string line;
    
};

#endif
