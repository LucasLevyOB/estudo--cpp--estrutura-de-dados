using namespace std;

#include <iostream>
#include <vector>

void inserirOrdenar(vector<int> &vetor, int valor)
{
  vetor.push_back(valor);
  int i = vetor.size() - 1;
  while (i > 0)
  {
    if (vetor[i] < vetor[i - 1])
    {
      swap(vetor[i], vetor[i - 1]);
    }
    else
    {
      break;
    }
    i--;
  }
}

void algoritmoOnline(int n, int contador, vector<int> &vetor, vector<int> &saidas)
{
  if (contador <= n)
  {
    int acao;
    int valor;
    cin >> acao;
    cin >> valor;
    if (acao == 1)
    {
      inserirOrdenar(vetor, valor);
      // cout << "----------\n";
      // cout << vetor[0];
      // for (int i = 1; i < vetor.size(); i++)
      // {
      //   cout << " " << vetor[i];
      // }
      // cout << "\n----------" << endl;
    }
    else
    {
      saidas.push_back(vetor[valor]);
      // cout << "---\n"
      //      << vetor[valor] << "\n----" << endl;
    }
    algoritmoOnline(n, contador + 1, vetor, saidas);
  }
}

int main()
{
  int n;
  vector<int> vetor;
  vector<int> saidas;
  int contador = 1;
  cin >> n;

  algoritmoOnline(n, contador, vetor, saidas);

  for (int i = 0; i < saidas.size(); i++)
  {
    cout << saidas[i] << endl;
  }

  return 0;
}