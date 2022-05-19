using namespace std;

#include <iostream>
#include <vector>

int bubbleSort(vector<int> &A) {
  int count = 0;
  int tamanho = A.size() - 1;
  bool fim = false;

  while (fim != true)
  {
    fim = true;
    count = count + 1;
    for (int i = 0; i < tamanho; i++)
    { 

      if (A[i] > A[i + 1]) {
        swap(A[i], A[i + 1]);
        fim = false;
        cout << i << " " << i + 1 << endl;
      }
    }
  }
  return count;
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

  int total = bubbleSort(vetor);
  cout << total << endl;
  return 0;
}