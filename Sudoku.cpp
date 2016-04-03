#include<cstdlib>
#include<fstream>
#include<iostream>
#include<ctime>
#include"Sudoku.h"
using namespace std;

void Sudoku::giveQuestion(){
		  int Map[81]={0,4,0,2,5,0,0,0,8,
			           0,3,0,4,0,9,1,7,0,
					   0,0,0,0,8,1,2,0,0,
					   0,0,6,0,0,0,7,2,0,
					   0,0,0,6,0,4,0,0,0,
					   0,1,2,0,0,0,3,0,0,
					   0,0,3,8,1,0,0,0,0,
					   0,6,4,9,0,2,0,1,0,
					   7,0,0,0,4,5,0,9,0};
		  int i;		   
			 for(i=0;i<=80;i++){
				cout<<Map[i]<<" ";
				if(i%9==8)
				cout<<endl;
										  		  	  	  
					    }
            }
void Sudoku::readIn(){
		for(int i=0;i<81;i++){
		cin>>Map[i];
		storeque[i]=Map[i];
						}
}


void Sudoku::transform(){
readIn();
change();
printOut(false);

}

void Sudoku::change(){

srand(time(NULL));
changeNum(rand()%10, rand()%10);
changeRow(rand()%3,rand()%3);
changeCol(rand()%3,rand()%3);
rotate(rand()%101);
flip(rand()%2);





}



void Sudoku::printOut(bool isAns){
int i;
if(!isAns)
	 for(i=0;i<sudokuSize;++i)
		 printf("%d%c",Map[i],(i+1)%9==0?'\n':' ');
    else
		for(i=0;i<sudokuSize;++i)
			printf("%d%c",Map[i],(i+1)%9==0?'\n':' ');


}

void Sudoku::changeNum(int a,int b){
int c;
  for(int i=0;i<81;i++){
    if(Map[i]==a){
	  c=Map[i];
	  Map[i]=b;
	}
   else if(Map[i]==b){
   Map[i]=c;
   }



  }

}

void Sudoku::changeRow(int a,int b){
int block[27]={0}; int i;
if(a==0){
   for( i=0;i<=26;i++){
   block[i]=Map[i];
     if(b==1){
	 for(i=0;i<=26;i++){
	 Map[i]=Map[i+27];
	 Map[i+27]=block[i];
	 
	  }
	 }
	 else if(b==2){
	   for(i=0;i<=26;i++){
		      Map[i]=Map[i+54];
		         Map[i+54]=block[i];
		    
				        }

	 
	 }
   }
}

if(a==1){
	     for(int i=0;i<=26;i++){
		      block[i]=Map[i+27];
		        if(b==0){
			          for(i=0;i<=26;i++){
					       Map[i+27]=Map[i];
					        Map[i]=block[i];
					   
						          }
				     }
				else if(b==2){
					        for(i=0;i<=26;i++){
						               Map[i]=Map[i+54];
						                  Map[i+54]=block[i];
						
					                         }
					
						
						      }

		        }
	  }

if(a==2){
	          for(int i=0;i<=26;i++){
	               block[i]=Map[i+54];
		                 if(b==0){
		                       for(i=0;i<=26;i++){
		                            Map[i+54]=Map[i];
		                             Map[i]=block[i];
		
		                                   }
		                      }
		                 else if(b==1){
		                             for(i=0;i<=26;i++){
		                                        Map[i+54]=Map[i+27];
		                                           Map[i+27]=block[i];
		                                   }
		
		
		                               }
		
		                 }
	       }


}


void Sudoku::changeCol(int a,int b){

int block1[9]={0}; int block2[9]={0}; int block3[9]={0}; int i;
  if(a==0){
	    for(i=0;i<=8;i++){
		block1[i]=Map[9*i];
		block2[i]=Map[9*i+1];
		block3[i]=Map[9*i+2];
		
		}
		if(b==1){
		for(i=0;i<=8;i++){
		Map[9*i]=Map[9*i+3];
		Map[9*i+1]=Map[9*i+4];
		Map[9*i+2]=Map[9*i+5];
		 Map[9*i+3]=block1[i];
         Map[9*i+4]=block2[i];
		 Map[9*i+5]=block3[i];
		    }
		
		  }
       else if(b==2){
	   
	   for(i=0;i<=8;i++){
		            Map[9*i]=Map[9*i+6];
		            Map[9*i+1]=Map[9*i+7];
		            Map[9*i+2]=Map[9*i+8];
		             Map[9*i+6]=block1[i];
		             Map[9*i+7]=block2[i];
		             Map[9*i+8]=block3[i];
		                }

	   
	   
	   
	   }


		}
				 

  if(a==1){
	         for(i=0;i<=8;i++){
	         block1[i]=Map[9*i+3];
	         block2[i]=Map[9*i+4];
	         block3[i]=Map[9*i+5];
	
	         }
	         if(b==0){
	         for(i=0;i<=8;i++){
	         Map[9*i+3]=Map[9*i];
	         Map[9*i+4]=Map[9*i+1];
	         Map[9*i+5]=Map[9*i+2];
	          Map[9*i+1]=block1[i];
	          Map[9*i+2]=block2[i];
	          Map[9*i+3]=block3[i];
	             }
	
	           }
	        else if(b==2){
	
	        for(i=0;i<=8;i++){
	                     Map[9*i+3]=Map[9*i+6];
	                     Map[9*i+4]=Map[9*i+7];
	                     Map[9*i+5]=Map[9*i+8];
	                      Map[9*i+6]=block1[i];
	                      Map[9*i+7]=block2[i];
	                      Map[9*i+8]=block3[i];
	                         }
	
	
	
	
	        }
	  
		  
		           }

if(a==2){
         for(i=0;i<=8;i++){
         block1[i]=Map[9*i+6];
         block2[i]=Map[9*i+7];
         block3[i]=Map[9*i+8];

         }
         if(b==1){
         for(i=0;i<=8;i++){
         Map[9*i+6]=Map[9*i+3];
         Map[9*i+7]=Map[9*i+4];
         Map[9*i+8]=Map[9*i+5];
          Map[9*i+3]=block1[i];
          Map[9*i+4]=block2[i];
          Map[9*i+5]=block3[i];
             }

           }
        else if(b==0){

        for(i=0;i<=8;i++){
                     Map[9*i+6]=Map[9*i];
                     Map[9*i+7]=Map[9*i+1];
                     Map[9*i+8]=Map[9*i+2];
                      Map[9*i]=block1[i];
                      Map[9*i+1]=block2[i];
                      Map[9*i+2]=block3[i];
                         }




        }

	
	         }



				      }
	
void Sudoku::rotate(int n){
	
int block[81]={0};int i;
for(i=0;i<=80;i++){
block[i]=Map[i];

}
if(n%4==1){
for(i=0;i<=8;i++){
Map[9*i+8]=block[i];
Map[9*i+7]=block[i+9];
Map[9*i+6]=block[i+18];
Map[9*i+5]=block[i+27];
Map[9*i+4]=block[i+36];
Map[9*i+3]=block[i+45];
Map[9*i+2]=block[i+54];
Map[9*i+1]=block[i+63];
Map[9*i]=block[i+72];


}


}

else if(n%4==2){

for(i=0;i<=8;i++){
Map[i]=block[i+72];
Map[i+9]=block[i+63];
Map[i+18]=block[i+54];
Map[i+27]=block[i+45];
Map[i+36]=block[i+36];
Map[i+45]=block[i+27];
Map[i+54]=block[i+18];
Map[i+63]=block[i+9];
Map[i+72]=block[i];
}

}

else if(n%4==3){
for(i=0;i<=8;i++){
Map[9*i+8]=block[9*i];
Map[9*i+7]=block[9*i+1];
Map[9*i+6]=block[9*i+2];
Map[9*i+5]=block[9*i+3];
Map[9*i+4]=block[9*i+4];
Map[9*i+3]=block[9*i+5];
Map[9*i+2]=block[9*i+6];
Map[9*i+1]=block[9*i+7];
Map[9*i]=block[9*i+8];

}

}

}
void Sudoku::flip(int n){

int block[81]={0};int i;
 for(i=0;i<=80;i++){
	
	 block[i]=Map[i];
	
		 }
 if(n==0){
	 for(i=0;i<=8;i++){
		 Map[9*i+8]=block[i];
		 Map[9*i+7]=block[i+9];
		 Map[9*i+6]=block[i+18];
		 Map[9*i+5]=block[i+27];
		 Map[9*i+4]=block[i+36];
		 Map[9*i+3]=block[i+45];
		 Map[9*i+2]=block[i+54];
		 Map[9*i+1]=block[i+63];
		 Map[9*i]=block[i+72];
		
			
			 }
	
	
		 }



}

bool Sudoku::checkUnity(int arr[])
	 {
		    int counter[9];

			 for(int i=0; i<9; i++)
			 counter[i] = 0; 
             for(int i=0; i<9; i++){
						     if(arr[i]>0)
							 counter[i]=1; 
						    else if(arr[i]==0){
							counter[i]=0; 
										     }
								    }
					    for(int i=0; i<9; ++i){
							    if(counter[i]!=1 )
									     return false;
								  }
						 return true; 
	 }



bool Sudoku::isCorrect(){
		bool result;
	    int check[9]={0};
		int i,j;
		int location=0;
		for(i=0;i<9;i++){   
			for(j=0;j<9;j++)
			check[j]=Map[i+j];
		result = checkUnity(check);
			if(result == false)
					return false;
																
     							}
		for(int i=0; i<9; i++) {
			for(int j=0; j<9; j++)
			check[j] = Map[i+9*j];
			result = checkUnity(check);
			if(result == false)
			return false;
																			}
		for(int i=0; i<9; i++) {
			for(int j=0; j<9; j++){
			location = 27*(i/3) + 3*(i%3)+9*(j/3) + (j%3);
			check[j] = Map[location];
			result = checkUnity(check);
		      if(result == false)
			return false;
																		     }
								   
			return true;
	
  }
	
}
int Sudoku::iszeroelement(){
		
		for(int i=0;i<sudokuSize;i++){
			   if(Map[i] == 0)
				       return i;
			      }
		   return -1;
}
	
	
bool Sudoku::Solvefill(int y)
{

	int i=0,j=0;
	int a=0,b=0;
	int ac[9];
	int u=0;
	int zeroin;

	zeroin=iszeroelement();


	if(zeroin==-1){ 
		  if(isCorrect())
			     return true;
		    else
				   return false;
	}

	else{

		  
		 for(int k=0;k<9;k++)
		   ac[k];
		   i=zeroin/9;
		   j=zeroin%9;

			   for(int k=0; k<9; k++){  
				        if(Map[9*i+k]>0)
							      ac[Map[9*i+k]-1]++;
						   }
			   for(int k=0; k<9; k++){  
					       if(Map[9*k+j]>0)
							          ac[Map[9*k+j]-1]++;
						      }
			   for(int k=0; k<9; k++){
					          a=k/3;
							  b=k%3;
							  if(Map[zeroin-9*(i%3)-(j%3)+9*a+b]>0)
								ac[Map[zeroin-9*(i%3)-(j%3)+9*a+b]-1]++;
										     }
				         
			   for(int k=0; k<9; k++){     
						     if(y==1){
								   if(ac[k]==0){
								    Map[zeroin]=k+1;
										if(Solvefill(1))
											return true;
												else
													Map[zeroin]=0;
																        }
									       }
							     if(y==2){
									      if(ac[8-k]==0){
											         Map[zeroin]=9-k;
													         if(Solvefill(2))
																           return true;
															         else
																		           Map[zeroin]=0;
																	       }
										      }
								   } 
					  }
	return false;
      
	}	
	



void Sudoku::solve(){
		int checkelement=0;
		for(int i=0;i<81;i++){
			if(Map[i]!=0)
				{
				checkelement++;
															}
							}
				if(checkelement<17){
							cout<<"2";
							return;
								}
					
					
		bool a,b;
		int q=0;
	    int storeansone[81]={0};
             a=Solvefill(1);

		for(int n=0;n<81;n++){
					storeansone[n]=Map[n];
											    }
		for(int n=0;n<81;n++)
			Map[n]=storeque[n];

		    b=Solvefill(2);

			if(!a)
				cout<<"0"<<endl;
				else{
					for(int i=0;i<81;i++){
						if(storeansone[i]!=Map[i]){
							q++;
							break;    
												  }
																     }  
			if(q==0){
					cout<<"1"<<endl;
					for(int i=0;i<81;++i ){
						cout<<Map[i]<<" ";
						if(i%9==8)
							cout<<endl;   
													    else
																	    cout<<"2"<<endl;
																 }
												   	
												   	
												   	
												   	
}

} 

}
