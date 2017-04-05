#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define tamanho 1000
#define keyMAx 9999


FILE *saida; 

int main()
{
	saida = fopen("C:\\Users\\Sidnei\\Source\\Repos\\NewRepo\\ExercicioColisao\\ExercicioColisao\\saida.txt", "wt");

	int vet[tamanho], vet2[tamanho], vet3[tamanho],key = 1, contColision = 0, modKey = 0;

	//Chaves colocadas no vetor de 1 até 999
	for (int i = 0; i < tamanho; i++)
	{
		key = i;
		vet[i] = key;
		vet3[i] = 0;
	}

	key = 0;
	//While para as chaves
	//For para percorrer o vetor com essa chave
	//Volta pro while e soma a chave

	while (key <= keyMAx)
	{
		for (int i = 0; i < tamanho; i++)
		{
			modKey = key % tamanho;

			//if (modKey % modKey == 1 && modKey % 1 == modKey)
			//{
				vet2[i] = modKey;
				if (vet[i] == vet2[i])
				{
					vet3[i] += 1;
				}
			//}
			key += 1;
		 }

	}
	for (int i = 0; i < tamanho; i++)
	{
		//std::cout << "Colisoes: " << vet3[i] << std::endl;
		fprintf(saida, "Colisoes por chave <%d>: \t%d\n", i ,vet3[i]);
	}

	fclose(saida);

	return 0;
}