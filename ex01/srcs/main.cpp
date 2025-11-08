/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliberal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:50:03 by tblaase           #+#    #+#             */
/*   Updated: 2025/11/08 02:30:40 by aliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

void ft_tolower(char &arr)
{
	arr = std::tolower(static_cast<unsigned char>(arr));
}

void ft_toupper(char &arr)
{
	arr = std::toupper(static_cast<unsigned char>(arr));
}

void ft_soma( int &nbr) {
	nbr += 10;
}

void ft_sub( int &nbr) {
	if (nbr - 1 < 0)
		nbr = 0;
	else
		nbr -= 2;
}

int main()
{
	{
		std::cout << "ARRAY CHAR" << std::endl;
		char a[] = {'A', 'B', 'C'};

		std::cout << "Original:" << std::endl << std::endl;
		for (size_t i = 0; i < 3 ; i++)
			std::cout << "a[" << i <<"]: " << a[i] << std::endl;

		iter(a, 3, ft_tolower);

		std::cout << std::endl;
		std::cout << "Changed - TOLOWER:" << std::endl << std::endl;
		for (size_t i = 0; i < 3 ; i++)
			std::cout << "a[" << i <<"]: " << a[i] << std::endl;
		std::cout << std::endl;

		iter(a, 3, ft_toupper);

		std::cout << std::endl;
		std::cout << "Changed - TOUPPER:" << std::endl << std::endl;
		for (size_t i = 0; i < 3 ; i++)
			std::cout << "a[" << i <<"]: " << a[i] << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "ARRAY INT" << std::endl;
		int a[] = {10, 2, 20, 33};

		std::cout << "Original:" << std::endl << std::endl;
		for (size_t i = 0; i < 4 ; i++)
			std::cout << "a[" << i <<"]: " << a[i] << std::endl;

		iter(a, 4, ft_soma);

		std::cout << std::endl;
		std::cout << "Changed - SOMA:" << std::endl << std::endl;
		for (size_t i = 0; i < 4 ; i++)
			std::cout << "a[" << i <<"]: " << a[i] << std::endl;
		std::cout << std::endl;
		
		iter(a, 4, ft_sub);

		std::cout << std::endl;
		std::cout << "Changed - SUB:" << std::endl << std::endl;
		for (size_t i = 0; i < 4 ; i++)
			std::cout << "a[" << i <<"]: " << a[i] << std::endl;
		std::cout << std::endl;
	}
}
