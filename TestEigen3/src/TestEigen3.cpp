//============================================================================
// Name        : TestEigen3.cpp
// Author      : Jugnu Jethi
// Version     :
// Copyright   : GPLv3
// Description : Hello World in C++, Ansi-style
//============================================================================



#include <ctime>
#include <iostream>
#include <eigen3/Eigen/SparseCore>



#define NNZ_SIZE 10
#define SM_ROWS 10
#define SM_COLS 10
#define SCALE ( SM_ROWS * SM_COLS * NNZ_SIZE )



using namespace Eigen;



int main(){

	std::cout << "!!!Hello World!!!" << std::endl;

	SparseMatrix<int,RowMajor> sm1( SM_ROWS, SM_COLS );
	sm1.reserve( NNZ_SIZE );

	srand( time( NULL ) );
	for( unsigned int ictr = 0; ictr < NNZ_SIZE; ictr++ ){

		int row = rand() % SM_ROWS;
		int col = rand() % SM_COLS;
		int value = rand() % SCALE;
		std::cout << "Row: " << row << " Col: " << col << " Value: " << value << std::endl;
		sm1.coeffRef( row, col ) = value;
	}

	std::cout << sm1 << std::endl;

	return 0;
}
