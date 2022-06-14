#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void escreveVetor(vector<int> &vetor)
{
  cout << vetor[0];
  for (int i = 1; i < vetor.size(); i++)
  {
    cout << " " << vetor[i];
  }
  cout << endl;
}

void inverterVetor(vector<int> &vetor, int tam)
{
  for (int i = 0; i < tam; i++, tam--)
  {
    swap(vetor[i], vetor[tam]);
  }
}

int pegarMaior(vector<int> &vetor, int fim)
{
  int maior = 0;
  for (int i = 0; i < fim; i++)
    if (vetor[i] > vetor[maior])
      maior = i;
  return maior;
}

void tapiocaSort(vector<int> &vetor)
{
  int tam = vetor.size() - 1;
  while (tam > 0)
  {
    int maior = pegarMaior(vetor, tam + 1);
    if (maior < tam)
    {
      // cout << "Maior: " << maior << " Tam: " << tam << endl;
      // cout << "Normal" << endl;
      // escreveVetor(vetor);
      if (maior > 0)
      {
        // cout << "Maior 1: ";
        cout << vetor.size() - maior << "a ";
      }
      inverterVetor(vetor, maior);
      // cout << "Inv1" << endl;
      // escreveVetor(vetor);
      inverterVetor(vetor, tam);
      // cout << "Inv2" << endl;
      // escreveVetor(vetor);
      // cout << "Maior 2: ";
      cout << vetor.size() - pegarMaior(vetor, tam + 1) << "b ";
    }
    tam--;
  }
  cout << 0 << endl;
}

int main()
{
  int n;
  vector<int> vetor;
  cin >> n;
  vetor.resize(n);
  for (int i = 0; i < n; i++)
    cin >> vetor[i];

  tapiocaSort(vetor);
  escreveVetor(vetor);

  return 0;
}
