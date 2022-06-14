#include <iostream>
#include <vector>

using namespace std;

int buscaBinaria(vector<int> &vetor, int n, int item)
{
  int contador = 0;
  int inicio = 0;
  int fim = n - 1;

  while (inicio <= fim)
  {
    contador++;
    int meio = (inicio + fim) / 2;
    if (vetor[meio] == item)
      break;
    else
    {
      if (vetor[meio] > item)
        fim = meio - 1;
      else
        inicio = meio + 1;
    }
  }

  return contador;
}

int main()
{
  int n, m;
  vector<int> vetor, itens;
  cin >> n >> m;
  vetor.reserve(n);
  itens.reserve(m);

  for (int i = 0; i < n; i++)
    cin >> vetor[i];
  for (int i = 0; i < m; i++)
    cin >> itens[i];

  cout << buscaBinaria(vetor, n, itens[0]);

  for (int i = 1; i < m; i++)
  {
    cout << " " << buscaBinaria(vetor, n, itens[i]);
  }

  cout << endl;

  return 0;
}