#include <iostream>
#include <vector>

using namespace std;

int merge(vector<int> &A, int start, int mid, int end)
{
    // Criei o meu vetor auxiliar
    vector<int> B;
    B.resize(end - start + 1);
    int quantidade = 0;

    int start1 = start;
    int start2 = mid + 1;
    int start3 = 0;

    while (start1 <= mid && start2 <= end)
    {
        if (A[start1] <= A[start2])
        {
            B[start3++] = A[start1++];
            quantidade += 1;
        }
        else
        {
            B[start3++] = A[start2++];
            quantidade += 1;
        }
    }

    while (start1 <= mid)
    {
        B[start3++] = A[start1++];
    }

    while (start2 <= end)
    {
        B[start3++] = A[start2++];
    }

    for (int i = start, j = 0; i <= end; i++, j++)
    {
        A[i] = B[j];
    }
    return quantidade;
}

int mergesort(vector<int> &A, int start, int end)
{
    int quantidade = 0;
    if (end > start)
    {
        int mid = (start + end) / 2;
        mergesort(A, start, mid);
        mergesort(A, mid + 1, end);
        quantidade = merge(A, start, mid, end);
    }
    return quantidade;
}

int main()
{
    vector<int> A({3, 5, 2, 4, 6, 8});
    int quantidade = mergesort(A, 0, A.size() - 1);
    cout << quantidade << endl;
}
