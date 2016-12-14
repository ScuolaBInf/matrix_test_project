#include <iostream>
using namespace std;

class matrix
	{
		private:
			int** matrice;
			int dimX, dimY;
			
		public:
			matrix(int dimY, int dimX, bool iniz = true);
			inizializeMatrix(int val = 0);
			allocMatrix(int, int, bool iniz = true);
			printfMatrix();
			scanfMatrix();
			changeSingleElement(int, int, int);
			
			matrix operator +(matrix m)
				{
					matrix r(dimX, dimY);
					if (dimX == m.dimX and dimY == m.dimY)
						{
							for (int i = 0; i < dimX; i++)
								{			
									for (int j = 0; j < dimY; j++)
										{
											r.matrice[i][j] = matrice[i][j] + m.matrice[i][j];	
										}
								}
						}
					else
						{
							cout<<"Error";
						}
						
					return r;
				}
				
			matrix operator -(matrix m)
				{
					matrix r(dimX, dimY);
					if (dimX == m.dimX and dimY == m.dimY)
						{
							for (int i = 0; i < dimX; i++)
								{			
									for (int j = 0; j < dimY; j++)
										{
											r.matrice[i][j] = matrice[i][j] - m.matrice[i][j];	
										}
								}
						}
					else
						{
							cout<<"Error";
						}
						
					return r;
				}
	};
	
main ()
	{
		matrix a(8,8), b(8,8), c(8,8);
		a.inizializeMatrix(2);
		c = a + b;		
		c.printfMatrix();
	}

matrix::matrix(int dimY, int dimX, bool iniz)
	{
		this -> dimX = dimX;
		this -> dimY = dimY;
		matrice = new int*[dimX];
		for (int i = 0; i < dimX; i++)
			{					
				matrice[i] = new int[dimY];
			}
		if (iniz == true)
		this -> inizializeMatrix();
	}

matrix::inizializeMatrix(int val)
	{
		for (int i = 0; i < dimX; i++)
			{
				for (int j = 0; j < dimY; j++)
					{
						matrice[i][j] = val;
					}
			}
	}
	
matrix::printfMatrix()
	{
		for (int i = 0; i < dimX; i++)
			{
				for (int j = 0; j < dimY; j++)
					{
						cout << matrice[i][j] << ' ';	
					}
				cout << endl;
			}					
	}		

matrix::scanfMatrix()
	{
		for (int i = 0; i < dimX; i++)
			{
				for (int j = 0; j < dimY; j++)
					{
						cin >> matrice[i][j];	
					}
			}	
	}
	
matrix::allocMatrix(int dimY, int dimX, bool iniz)
	{
		this -> dimX = dimX;
		this -> dimY = dimY;
		matrice = new int*[dimX];
		for (int i = 0; i < dimX; i++)
			{					
				matrice[i] = new int[dimY];
			}
		if (iniz == true)
		this -> inizializeMatrix();
	}
	
matrix::changeSingleElement(int dimY, int dimX, int value)
	{
		if (!(dimX >= this -> dimX || dimY >= this -> dimY))
			{
				matrice[dimX][dimY] = value;
			}
	}
