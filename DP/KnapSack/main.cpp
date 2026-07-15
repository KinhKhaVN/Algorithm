#include <iostream>
#include <math.h>


#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FORR(i, a, b) for (int i = a; i > b; i--)
#define ll long long

int n = 5, W = 10;

int weight[6] = {0, 3, 1, 5, 4, 2};
int value[6] = {0, 10, 1, 2, 4, 3};

int dp[100][100];

void init()
{

        FOR(i, 0, n + 1)
                FOR(j, 0, W + 1)
                        dp[i][j] = 0;

        FOR(i, 1, n + 1)
                FOR(j, 1, W + 1)
                {
                        if (weight[i] > j)
                                dp[i][j] = dp[i - 1][j];
                        else
                         dp[i][j] = std::max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
                }

}

void printTable()
{
        FOR(i, 0, n + 1)
        {
                FOR(j, 0, W + 1)
                {
                        std::cout << dp[i][j] << " ";
                }
                std::cout << '\n';
        }
}

void Choose()
{
        int MAX = -1, column;

        FOR(j, 0, W + 2)
        {
                if (dp[n][j] > MAX)
                {
                        MAX = dp[n][j];
                        column = j;
                }
        }
        std::cout  << "MAX: " << MAX << '\n';
        std::cout  << "column: " << column << '\n';

        FORR(i, n, 0)
        {
                if (dp[i][column] != dp[i - 1][column]) 
                {
                        std::cout << "Item: " << i << " - ";
                        std::cout << "weight: " << weight[i] << " - ";
                        std::cout << "value: " << value[i] << '\n';

                        column -= weight[i];
                }
        }
}

int main ()
{

        init();

        printTable();

        Choose();


        return 0;

}
