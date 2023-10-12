#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int dirs[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

bool search2D(vector<string> &grid, int row, int col,
              const string &word, int gridRows, int gridCols)
{

    if (grid[row][col] != word[0])
    {
        return false;
    }

    int wordLen = word.length();

    for (auto dir : dirs)
    {

        int r = row + dir[0];
        int c = col + dir[1];
        bool found = true;

        for (int i = 1; i < wordLen; i++)
        {

            if (r >= gridRows || r < 0 || c >= gridCols || c < 0)
            {
                found = false;
                break;
            }

            if (grid[r][c] != word[i])
            {
                found = false;
                break;
            }

            r += dir[0];
            c += dir[1];
        }

        if (found)
        {
            return true;
        }
    }

    return false;
}

void searchPattern(vector<string> &grid, const string &word,
                   int gridRows, int gridCols)
{

    for (int r = 0; r < gridRows; r++)
    {
        for (int c = 0; c < gridCols; c++)
        {
            if (search2D(grid, r, c, word, gridRows, gridCols))
            {
                cout << "Pattern found at " << r << ", " << c << "\n";
            }
        }
    }
}

int main()
{

    vector<string> grid{
        "THISISAFUNPROGRAM",
        "WELEARNTHROGHCODE",
        "CODINGISVERYFUNEE"};

    searchPattern(grid, "FUN", 3, 13);

    cout << "\n";

    searchPattern(grid, "CODING", 3, 13);

    return 0;
}