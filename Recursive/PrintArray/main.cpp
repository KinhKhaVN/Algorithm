#include <iostream>
#include <unistd.h>
#include <iomanip>
void printDashed();
void printArray(int A[], int n, int OPTION);

enum State
{
        FOR_WARD = 1,
        BACK_WARD = -1
};


int main () 
{

        int A[5] = {1, 2, 3, 4, 5};

        int OPTION;
        int n = sizeof(A) / sizeof(A[0]);

        std::cout << "OPTION: ";

        do {
                std::cin >> OPTION;
        
                printDashed();
                printArray(A, n - 1, OPTION);
                printDashed();

                std::cout << "OPTION: ";
        }while (OPTION == 1 || OPTION == -1);





        return 0;
};

void printDashed()
{
        std::cout << "--------------------\n";
}

void printArray(int A[], int n, int OPTION)
{
        switch (OPTION)
        {       
                case State::FOR_WARD:
                        if (n < 0) {
                                return;
                        }
                        else {
                                printArray(A, n - 1, OPTION);
                                std::cout << std::setw(10);
                                std::cout << A[n] << '\n';
                        }
                        break;

                case State::BACK_WARD:
                        if (n < 0) {
                                return;
                        }
                        else {
                                std::cout << std::setw(10);
                                std::cout << A[n] << '\n';
                                printArray(A, n - 1, OPTION);
                        }
                        break;
                default:
                        std::cout << "INVALID OPTION!!!\n";
                        std::cout << "APPLICATION IS CLOSING\n";

                        for (int time = 3; time > 0; time--)
                        {
                                std::cout << time << " ";
                                sleep(time / 2);
                        }
                        std::cout << '\n';
        }
}
