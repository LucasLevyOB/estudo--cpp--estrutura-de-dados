using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

int contarRepetidos(vector<int> &Vetor) {
  int tamanhoOriginal = Vetor.size();
  sort(Vetor.begin(), Vetor.end());
  vector<int>::iterator nV;
  nV = unique(Vetor.begin(), Vetor.end());
  return tamanhoOriginal - distance(Vetor.begin(), nV);
}

int main() {
  int n;
  cin >> n;
  vector<int> vetor;
  vetor.resize(n);

  for (int i = 0; i < n; i++)
  {
    cin >> vetor[i];
  }

  int totalRepetidos = contarRepetidos(vetor);
  cout << totalRepetidos << endl;
  return 0;
}