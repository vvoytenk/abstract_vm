/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:52:31 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/11/28 16:52:33 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_HPP
#define PARSER_HPP

#include <iostream>

class Parser
{
    public:
        Parser();
        Parser(const Parser &src);
        ~Parser();

        Parser &operator=(Parser const &src);

};

#endif
