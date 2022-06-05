using namespace std;

#include <iostream>
#include <vector>

int SelectionSort(vector<int> &vetor)
{
  int tamanho = vetor.size();
  int trocas = 0;
  for (int indice = 0; indice < tamanho - 1; indice++)
  {
    int menor = indice;
    for (int i = indice + 1; i < tamanho; i++)
    {
      if (vetor[i] < vetor[menor])
      {
        menor = i;
      }
    }
    if (menor != indice)
    {
      swap(vetor[indice], vetor[menor]);
      trocas++;
    }
  }
  return trocas;
}

int main()
{
  int n;
  cin >> n;
  vector<int> vetor;
  vetor.resize(n);

  for (int i = 0; i < n; i++)
  {
    cin >> vetor[i];
  }

  int quantidadeTrocas = SelectionSort(vetor);

  cout << quantidadeTrocas << endl;

  return 0;
}