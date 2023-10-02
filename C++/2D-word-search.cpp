#include <bits/stdc++.h>
using namespace std;

int x[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool search2D(char *grid, int row, int col,
              string word, int R, int C)
{
    if (*(grid + row * C + col) != word[0])
        return false;

    int len = word.length();

    for (int dir = 0; dir < 8; dir++)
    {

        int k, rd = row + x[dir], cd = col + y[dir];

        for (k = 1; k < len; k++)
        {

            if (rd >= R || rd < 0 || cd >= C || cd < 0)
                break;

            if (*(grid + rd * C + cd) != word[k])
                break;

            rd += x[dir], cd += y[dir];
        }

        if (k == len)
            return true;
    }
    return false;
}

void patternSearch(char *grid, string word,
                   int R, int C)
{
    for (int row = 0; row < R; row++)
        for (int col = 0; col < C; col++)
            if (search2D(grid, row, col, word, R, C))
                cout << "pattern found at "
                     << row << ", "
                     << col << endl;
}

int main()
{
    int R = 3, C = 13;
    char grid[R][C] = {"THISISAFUNPROGRAM",
                       "WELEARNTHROGHCODE",
                       "CODINGISVERYFUNEE"};

    patternSearch((char *)grid, "FUN", R, C);
    cout << endl;
    patternSearch((char *)grid, "CODING", R, C);

    return 0;
}
