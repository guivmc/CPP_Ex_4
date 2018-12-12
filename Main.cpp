// ExDeSexta4.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <map>
#include <algorithm>


void test(int size, int now)
{
	if (size < 1 || size > 100) return;

	std::vector<std::string> myListNames;
	std::vector<int> myListGrades;
	std::vector<int> Aux(size);

	int small = INT_MAX, pos = 0, aux = 0;

	for (int i = 0; i < size; i++)
	{
		std::string name;
		std::cin >> name;
		name = name.substr(0, 19);

		myListNames.push_back(name);

		int grade;
		std::cin >> grade;

		myListGrades.push_back(grade);
	}

	for (int i = 0; i < size; i++)
	{
		if (small > myListGrades.at(i))
		{
			small = myListGrades.at(i);
			pos = i;
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (small == myListGrades[i])
		{
			Aux.at(aux++) = i;
		}
	}

	if (aux > 1)
	{
		char theChar = myListNames.at(pos).at(0);

		std::cout << theChar;

		for (int i = 0; i < aux; i++)
		{
			if (theChar < myListNames.at(Aux.at(i)).at(0)) 
			{
				theChar = myListNames.at(Aux.at(i)).at(0);
				pos = Aux.at(i);
			}
		}
	}

	if (size != 0)
	{
		std::cout << "Instance: ";
		std::cout << now << std::endl;
		std::cout << "Failed: " + myListNames.at(pos) << std::endl;
	}

}

int main()
{
	int size = 1, now = 1;

	while (size > 0)
	{
		std::cin >> size;

		test(size, now);

		now++;
	}
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
