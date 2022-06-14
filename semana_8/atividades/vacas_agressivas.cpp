#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool ePossivel(vector<int> &baias, int menorDistancia, int qtdeVacas)
{
  int ultimaPosicao = baias[0];
  int vacas = 1;
  for (int i = 1; i < baias.size(); i++)
  {
    if (baias[i] - ultimaPosicao >= menorDistancia)
    {
      ultimaPosicao = baias[i];
      vacas++;
      if (vacas >= qtdeVacas)
        return true;
    }
  }
  return false;
}

int vacasAgressivas(vector<int> &baias, int qtdeVacas)
{
  int tamVetor = baias.size();
  int resposta, menor = 1;

  sort(baias.begin(), baias.end());

  int maior = baias[tamVetor - 1] - baias[0];

  while (menor <= maior)
  {
    int meio = (menor + maior) / 2;
    if (ePossivel(baias, meio, qtdeVacas))
    {
      resposta = meio;
      menor = meio + 1;
    }
    else
      maior = meio - 1;
  }
  return resposta;
}

int main()
{
  int qtdeBaias, qtdeVacas;
  vector<int> baias;

  cin >> qtdeBaias >> qtdeVacas;

  baias.resize(qtdeBaias);
  for (int i = 0; i < qtdeBaias; i++)
    cin >> baias[i];

  int resposta = vacasAgressivas(baias, qtdeVacas);

  cout << resposta << endl;

  return 0;
}