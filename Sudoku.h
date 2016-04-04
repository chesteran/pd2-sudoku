#include<iostream>
   using namespace std;
     class Sudoku{
		    public:        
			     
				   static const int sudokuROW =9 ;
				   static const int sudokuCOL =9 ;
				   void giveQuestion();
				   void readIn();
				   void checkbgrowin();
				   void checkbgcolin();
				   void checkbgcellin();
				   
				    int checkbgrow();
				    int checkbgcol();
				   int checkbgcell();
				   
				   void checkrow();
				   void checkcol();
				   void checkcell();
				   void fillorder();
				   void fill();
				   void fillorderinit();
				   
				   
				   void  solve();
				   
				   void changeNum(int a,int b);
				   void changeRow(int a,int b);
				   void changeCol(int a,int b);
				   void rotate(int n);
				   void flip(int n);
				   void transform();
				   void change();
				   void printOut();  
				   
							  private:
						          int Map[sudokuROW][sudokuCOL];
						          int Order[sudokuROW];
						          int block[sudokuROW][sudokuCOL];			 
								  int blockcheck[sudokuROW][sudokuCOL];
								  int Ans1[sudokuROW][sudokuCOL];
								  int Ans2[sudokuROW][sudokuCOL];
								            };
