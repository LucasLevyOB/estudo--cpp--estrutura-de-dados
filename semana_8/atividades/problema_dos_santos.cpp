#include <iostream>
#include <iomanip>

using namespace std;

float calculaDinheiroInicial(int qtdeIgrejas, int qtdeDoada)
{
  float valor = 0;
  int divisor = 1;

  for (int i = 1; i <= qtdeIgrejas; i++)
  {
    valor = valor * 2 + qtdeDoada;
    divisor *= 2;
  }

  return valor / divisor;
}

int main()
{
  int qtdeIgrejas, qtdeDoada;
  cin >> qtdeIgrejas >> qtdeDoada;

  float dinheiroInicial = calculaDinheiroInicial(qtdeIgrejas, qtdeDoada);

  cout << fixed << setprecision(2) << dinheiroInicial << endl;

  return 0;
}