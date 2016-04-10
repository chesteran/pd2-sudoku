 #include<iostream>
   using namespace std;
     class Sudoku{
		    public:        
			       bool checkUnity(int arr[]);
				   bool isCorrect();
				   static const int sudokuSize =81 ;
				   void giveQuestion();
				   void readIn();
				   bool  Solvefill(int y);
				   void  solve();
				   int iszeroelement();
				   void changeNum(int a,int b);
				   void changeRow(int a,int b);
				   void changeCol(int a,int b);
				   void rotate(int n);
				   void flip(int n);
				   void transform();
				   void change();
				   void printOut(bool isAns);  
				   int transmap[sudokuSize];
                                   void transMap();
							  private:
						          int Map[sudokuSize];
						          int storeque[sudokuSize];
						          int transmap[sudokuSize];
							 
								  
								            };
