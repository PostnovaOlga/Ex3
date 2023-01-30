#include <iostream>

using namespace std;

void zapoln(int** arr, int strok) {
    for (int i = 0; i < strok; i++)
    {
        for (int k = 0; k < strok; k++)
        {
            srand((unsigned)time(0));
            arr[i][k] = (rand() % 70) + 1;
        }
    }
}

void print(int** arr, int strok) {
    for (int i = 0; i < strok; i++)
    {
        for (int k = 0; k < strok; k++)
        {
            cout << arr[i][k];
        }
        cout << " " << endl;
    }
}
int sum(int** arr, int strok) {
    int sum = 0;
    for (int i = 0; i < strok; i++)
    {
        sum = sum + arr[i][strok - i];
    }
    return sum;
}

int main()
{

    int strok;
    cout << "Number of stroky ";
    cin >> strok;
    int** array = new int* [strok];

    zapoln(array, strok);
    print(array, strok);
    cout << sum(array, strok);

    for (int k = 0; k < strok; k++) {
        delete[] array[k];
    }
    delete array;


    return 0;
}
