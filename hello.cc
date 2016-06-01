#include <iostream>
#include <mpi.h>

int main(int argc, char **argv)
{
  int p, rank;

  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &p);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);

  std::cout << "Hello from " << rank << std::endl; 

  MPI_Finalize();

  return 0;
}
