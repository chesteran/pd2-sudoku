#include<cstdlib>
#include<fstream>
#include<iostream>
#include<ctime>
#include"Sudoku.h"
using namespace std;
void Sudoku::giveQuestion(){
		  int Map[9][9]={0,4,0,2,5,0,0,0,8,
			           0,3,0,4,0,9,1,7,0,
					   0,0,0,0,8,1,2,0,0,
					   0,0,6,0,0,0,7,2,0,
					   0,0,0,6,0,4,0,0,0,
					   0,1,2,0,0,0,3,0,0,
					   0,0,3,8,1,0,0,0,0,
					   0,6,4,9,0,2,0,1,0,
					   7,0,0,0,4,5,0,9,0,};
		  int i;int j;		   
			 for(i=0;i<=8;i++){
				 for(j=0;j<=8;j++){
				cout<<Map[i][j];
				if(j%9==8)
				cout<<endl;
				 }	  		  	  	  
					    }
            }
void Sudoku::readIn(){
	int i,j;
		for(i=0;i<=8;i++){
				 for(j=0;j<=8;j++){
		cin>>Map[i][j];
		
						}
    }		
}

void Sudoku::checkbgrowin(){
	int i,j;int c,b;
	
	for(i=0;i<=8;i++){
		int chrowandcol[9]={0};
		for(j=0;j<=8;i++)
		{   
	        
			if(Map[i][j]>0){
				c=Map[i][j];
				chrowandcol[c-1]=chrowandcol[c-1]-1;
				}
			
		}
		for(b=0;b<=8;b++){
			if(chrowandcol[b]<-1)
				cout<<"0";
			return;
			
		}
	}
	
	
}

void Sudoku::checkbgcolin(){
	int i,j,c,b;
	
	for(i=0;i<=8;i++){
		int chrowandcol[9]={0};
		for(j=0;j<=8;i++)
		{   
	        
			if(Map[j][i]>0){
				c=Map[j][i];
				chrowandcol[c-1]=chrowandcol[c-1]-1;
				
				
			}
			
		}
		for(b=0;b<=8;b++){
			if(chrowandcol[b]<-1)
			{cout<<"0";
			return;}
		
		
	   }
    }
}

void Sudoku::checkbgcellin(){
	
	int i,j,k;
	int c;
	int b=0;
	
		int block[9]={0};
	  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i][j]>0){
			c=Map[i][j];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			  cout<<"0";
			  return;
			  
		     }
		  
	      }
		  
		  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i][j+3]>0){
			c=Map[i][j+3];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			  cout<<"0";
			  return;
			  
		     }
		  
	      }
		  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i][j+6]>0){
			c=Map[i][j+6];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			  cout<<"0";
			  return;
			  
		     }
		  
	      }
		  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i+3][j]>0){
			c=Map[i+3][j];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			  cout<<"0";
			  return;
			  
		     }
		  
	      }
		  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i+6][j]>0){
			c=Map[i+6][j];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			  cout<<"0";
			  return;
			  
		     }
		  
	      }
		  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i+3][j+3]>0){
			c=Map[i+3][j+3];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			  cout<<"0";
			  return;
			  
		     }
		  
	      }
		  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i+3][j+6]>0){
			c=Map[i+3][j+6];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			  cout<<"0";
			  return;
			  
		     }
		  
	      }
		  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i+6][j+3]>0){
			c=Map[i+6][j+3];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			  cout<<"0";
			  return;
			  
		     }
		  
	      }
		  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i+6][j+6]>0){
			c=Map[i+6][j+6];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			  cout<<"0";
			  return;
			  
		     }
		  
	      }
		  
		  

	   			
				
	}

int Sudoku::checkbgrow(){
	int i,j;int c,b;
	
	for(i=0;i<=8;i++){
		int chrowandcol[9]={0};
		for(j=0;j<=8;i++)
		{   
	        
			if(Map[i][j]>0){
				c=Map[i][j];
				chrowandcol[c-1]=chrowandcol[c-1]-1;
				}
			
		}
		for(b=0;b<=8;b++){
			if(chrowandcol[b]<-1)
				
			return 0;
			
		}
	}
	
	return 1;
}

int Sudoku::checkbgcol(){
	int i,j,c,b;
	
	for(i=0;i<=8;i++){
		int chrowandcol[9]={0};
		for(j=0;j<=8;i++)
		{   
	        
			if(Map[j][i]>0){
				c=Map[j][i];
				chrowandcol[c-1]=chrowandcol[c-1]-1;
				
				
			}
			
		}
		for(b=0;b<=8;b++){
			if(chrowandcol[b]<-1)
			{
			return 0;}
		
		
	   }
    }
	return 1;
}

int Sudoku::checkbgcell(){
	int i,j,k;
	int c;
	int b=0;
	
		int block[9]={0};
	  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i][j]>0){
			c=Map[i][j];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			  
			  return 0;
			  
		     }
		  
	      }
		  
		  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i][j+3]>0){
			c=Map[i][j+3];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			 
			  return 0;
			  
		     }
		  
	      }
		  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i][j+6]>0){
			c=Map[i][j+6];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			  
			  return 0;
			  
		     }
		  
	      }
		  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i+3][j]>0){
			c=Map[i+3][j];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			  
			  return 0;
			  
		     }
		  
	      }
		  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i+6][j]>0){
			c=Map[i+6][j];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			  
			  return 0;
			  
		     }
		  
	      }
		  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i+3][j+3]>0){
			c=Map[i+3][j+3];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			  
			  return 0;
			  
		     }
		  
	      }
		  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i+3][j+6]>0){
			c=Map[i+3][j+6];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			  
			  return 0;
			  
		     }
		  
	      }
		  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i+6][j+3]>0){
			c=Map[i+6][j+3];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			  
			  return 0;
			  
		     }
		  
	      }
		  for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(Map[i+6][j+6]>0){
			c=Map[i+6][j+6];
			block[c-1]=block[c-1]-1;
			}
			
		}
	  }
	  for(b=0;b<=8;b++){
		  if(block[b]<-1){
			  return 0;
			  
		     }
		  
	      }
		  
	
	return 1;
	
	
	
   }


void Sudoku::fillorderinit(){
	
	
	int i,j,c;
	c=0;
	
	
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(Map[i][j]==0){
			block[i][j]=Map[i][j];
			}
			else {
				block[i][j]=1;
			} 
			
		}
		
	}
	
	for(i=0;i<=8;i++){
		c=c+block[0][i];
		c=c+block[i][0];
		
	}
	c=c-block[0][0];
	blockcheck[0][0]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[0][i];
		c=c+block[i][1];
		
	}
	c=c-block[0][1];
	blockcheck[0][1]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[0][i];
		c=c+block[i][2];
		
	}
	c=c-block[0][2];
	blockcheck[0][2]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[0][i];
		c=c+block[i][3];
		
	}
	c=c-block[0][3];
	blockcheck[0][3]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[0][i];
		c=c+block[i][4];
		
	}
	c=c-block[0][4];
	blockcheck[0][4]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[0][i];
		c=c+block[i][5];
		
	}
	c=c-block[0][5];
	blockcheck[0][5]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[0][i];
		c=c+block[i][6];
		
	}
	c=c-block[0][6];
	blockcheck[0][6]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[0][i];
		c=c+block[i][7];
		
	}
	c=c-block[0][7];
	blockcheck[0][7]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[0][i];
		c=c+block[i][8];
		
	}
	c=c-block[0][8];
	blockcheck[0][8]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[1][i];
		c=c+block[i][0];
		
	}
	c=c-block[1][0];
	blockcheck[1][0]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[1][i];
		c=c+block[i][1];
		
	}
	c=c-block[1][1];
	blockcheck[1][1]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[1][i];
		c=c+block[i][2];
		
	}
	c=c-block[1][2];
	blockcheck[1][2]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[1][i];
		c=c+block[i][3];
		
	}
	c=c-block[1][3];
	blockcheck[3][3]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[1][i];
		c=c+block[i][4];
		
	}
	c=c-block[1][4];
	blockcheck[1][4]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[1][i];
		c=c+block[i][5];
		
	}
	c=c-block[1][5];
	blockcheck[1][5]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[1][i];
		c=c+block[i][6];
		
	}
	c=c-block[1][6];
	blockcheck[1][6]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[1][i];
		c=c+block[i][7];
		
	}
	c=c-block[1][7];
	blockcheck[1][7]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[1][i];
		c=c+block[i][8];
		
	}
	c=c-block[1][8];
	blockcheck[1][8]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[2][i];
		c=c+block[i][0];
		
	}
	c=c-block[2][0];
	blockcheck[2][0]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[2][i];
		c=c+block[i][1];
		
	}
	c=c-block[2][1];
	blockcheck[2][1]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[2][i];
		c=c+block[i][2];
		
	}
	c=c-block[2][2];
	blockcheck[2][2]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[2][i];
		c=c+block[i][3];
		
	}
	c=c-block[2][3];
	blockcheck[2][3]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[2][i];
		c=c+block[i][4];
		
	}
	c=c-block[2][4];
	blockcheck[2][4]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[2][i];
		c=c+block[i][5];
		
	}
	c=c-block[2][5];
	blockcheck[2][5]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[2][i];
		c=c+block[i][6];
		
	}
	c=c-block[2][6];
	blockcheck[2][6]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[2][i];
		c=c+block[i][7];
		
	}
	c=c-block[2][7];
	blockcheck[2][7]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[2][i];
		c=c+block[i][8];
		
	}
	c=c-block[2][8];
	blockcheck[2][8]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[3][i];
		c=c+block[i][0];
		
	}
	c=c-block[3][0];
	blockcheck[3][0]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[3][i];
		c=c+block[i][1];
		
	}
	c=c-block[3][1];
	blockcheck[3][1]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[3][i];
		c=c+block[i][2];
		
	}
	c=c-block[3][2];
	blockcheck[3][2]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[3][i];
		c=c+block[i][3];
		
	}
	c=c-block[3][3];
	blockcheck[3][3]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[3][i];
		c=c+block[i][4];
		
	}
	c=c-block[3][4];
	blockcheck[3][4]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[3][i];
		c=c+block[i][5];
		
	}
	c=c-block[3][5];
	blockcheck[3][5]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[3][i];
		c=c+block[i][6];
		
	}
	c=c-block[3][6];
	blockcheck[3][6]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[3][i];
		c=c+block[i][7];
		
	}
	c=c-block[3][7];
	blockcheck[3][7]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[3][i];
		c=c+block[i][8];
		
	}
	c=c-block[3][8];
	blockcheck[3][8]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[4][i];
		c=c+block[i][0];
		
	}
	c=c-block[4][0];
	blockcheck[4][0]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[4][i];
		c=c+block[i][1];
		
	}
	c=c-block[4][1];
	blockcheck[4][1]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[4][i];
		c=c+block[i][2];
		
	}
	c=c-block[4][2];
	blockcheck[4][2]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[4][i];
		c=c+block[i][3];
		
	}
	c=c-block[4][3];
	blockcheck[4][3]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[4][i];
		c=c+block[i][4];
		
	}
	c=c-block[4][4];
	blockcheck[4][4]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[4][i];
		c=c+block[i][5];
		
	}
	c=c-block[4][5];
	blockcheck[4][5]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[4][i];
		c=c+block[i][6];
		
	}
	c=c-block[4][6];
	blockcheck[4][6]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[4][i];
		c=c+block[i][7];
		
	}
	c=c-block[4][7];
	blockcheck[4][7]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[4][i];
		c=c+block[i][8];
		
	}
	c=c-block[4][8];
	blockcheck[4][8]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[5][i];
		c=c+block[i][0];
		
	}
	c=c-block[5][0];
	blockcheck[5][0]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[5][i];
		c=c+block[i][1];
		
	}
	c=c-block[5][1];
	blockcheck[5][1]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[5][i];
		c=c+block[i][2];
		
	}
	c=c-block[5][2];
	blockcheck[5][2]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[5][i];
		c=c+block[i][3];
		
	}
	c=c-block[5][3];
	blockcheck[5][3]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[5][i];
		c=c+block[i][4];
		
	}
	c=c-block[5][4];
	blockcheck[5][4]=c;
	c=0;for(i=0;i<=8;i++){
		c=c+block[5][i];
		c=c+block[i][5];
		
	}
	c=c-block[5][5];
	blockcheck[5][5]=c;
	c=0;for(i=0;i<=8;i++){
		c=c+block[5][i];
		c=c+block[i][6];
		
	}
	c=c-block[5][6];
	blockcheck[5][6]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[5][i];
		c=c+block[i][7];
		
	}
	c=c-block[5][7];
	blockcheck[5][7]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[5][i];
		c=c+block[i][8];
		
	}
	c=c-block[5][8];
	blockcheck[5][8]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[6][i];
		c=c+block[i][0];
		
	}
	c=c-block[6][0];
	blockcheck[6][0]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[6][i];
		c=c+block[i][1];
		
	}
	c=c-block[6][1];
	blockcheck[6][1]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[6][i];
		c=c+block[i][2];
		
	}
	c=c-block[6][2];
	blockcheck[6][2]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[6][i];
		c=c+block[i][3];
		
	}
	c=c-block[6][3];
	blockcheck[6][3]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[6][i];
		c=c+block[i][4];
		
	}
	c=c-block[6][4];
	blockcheck[6][4]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[6][i];
		c=c+block[i][5];
		
	}
	c=c-block[6][5];
	blockcheck[6][5]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[6][i];
		c=c+block[i][6];
		
	}
	c=c-block[6][6];
	blockcheck[6][6]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[6][i];
		c=c+block[i][7];
		
	}
	c=c-block[6][7];
	blockcheck[6][7]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[6][i];
		c=c+block[i][8];
		
	}
	c=c-block[6][8];
	blockcheck[6][8]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[7][i];
		c=c+block[i][0];
		
	}
	c=c-block[7][0];
	blockcheck[7][0]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[7][i];
		c=c+block[i][1];
		
	}
	c=c-block[7][1];
	blockcheck[7][1]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[7][i];
		c=c+block[i][2];
		
	}
	c=c-block[7][2];
	blockcheck[7][2]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[7][i];
		c=c+block[i][3];
		
	}
	c=c-block[7][3];
	blockcheck[7][3]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[7][i];
		c=c+block[i][4];
		
	}
	c=c-block[7][4];
	blockcheck[7][4]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[7][i];
		c=c+block[i][5];
		
	}
	c=c-block[7][5];
	blockcheck[7][5]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[7][i];
		c=c+block[i][6];
		
	}
	c=c-block[7][6];
	blockcheck[7][6]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[7][i];
		c=c+block[i][7];
		
	}
	c=c-block[7][7];
	blockcheck[7][7]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[7][i];
		c=c+block[i][8];
		
	}
	c=c-block[7][8];
	blockcheck[7][8]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[8][i];
		c=c+block[i][0];
		
	}
	c=c-block[8][0];
	blockcheck[8][0]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[8][i];
		c=c+block[i][1];
		
	}
	c=c-block[8][1];
	blockcheck[8][1]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[8][i];
		c=c+block[i][2];
		
	}
	c=c-block[8][2];
	blockcheck[8][2]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[8][i];
		c=c+block[i][3];
		
	}
	c=c-block[8][3];
	blockcheck[8][3]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[8][i];
		c=c+block[i][4];
		
	}
	c=c-block[8][4];
	blockcheck[8][4]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[8][i];
		c=c+block[i][5];
		
	}
	c=c-block[8][5];
	blockcheck[8][5]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[8][i];
		c=c+block[i][6];
		
	}
	c=c-block[8][6];
	blockcheck[8][6]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[8][i];
		c=c+block[i][7];
		
	}
	c=c-block[8][7];
	blockcheck[8][7]=c;
	c=0;
	for(i=0;i<=8;i++){
		c=c+block[8][i];
		c=c+block[i][8];
		
	}
	c=c-block[8][8];
	blockcheck[8][8]=c;
	c=0;
	
}



void Sudoku::fill(){

	checkbgrowin();
	checkbgrowin();
	checkbgrowin();
	fillorderinit();
	
	
	checkrow();
	checkcol();
	checkcell();
	
	
	
	
}

void Sudoku::checkrow(){
	int i,j,k,b,l; 
	int  w,s,x;
	int r=0;
	w=0;s=0;x=0;l=0;
	int count[9]={0};
	for(i=1;i<=9;i++){
		count[i-1]=i;
		
		
	}
	for(k=0;k<=8;k++){
		for(b=0;b<=8;b++){
	while(blockcheck[k][b]==17-l && Map[k][b]==0  && l<17){
		for(i==0;i<=8;i++){
		for(j==0;j<=8;j++){
		if(count[i]==Map[k][j]){
			count[i]=0;
			
		          }
			
		
		        }
		      }
			  
				  
				 while(count[i]!=0||r!=9){
			      Map[k][b]=count[i];
				
				r++;
				 }
			  
	                           l++;            }
	
	}
	
}
checkcol();
for(i=0;i<=8;i++){
	for(j=0;j<=8;j++)
		Ans1[i][j]=Map[i][j];
	
}
}
void Sudoku::checkcol()
{
	int i,j,k,b; 
	int w,s,x,l;
	int r=0;
	w=0;s=0;x=0;l=0;
	int count[9]={0};
	for(i=1;i<=9;i++){
		count[i-1]=i;
		
		
	}
	for(k=0;k<=8;k++){
		for(b=0;b<=8;b++){
	if(blockcheck[k][b]==17-l && Map[k][b]==0 && l<17){
		for(i==0;i<=8;i++){
		for(j==0;j<=8;j++){
		if(count[i]==Map[j][b]){
			count[i]=0;
			
		          }
			
		
		        }
		      }
			  
				 while(count[i]!=0||r!=9){
			      Map[k][b]=count[i];
			    
				 i++;
				 
				 }
			  
	                          l++;  
							  }
												   
										   
										   
										   
										   
										   
										   
										   
										   
										   
										   
										   
										   
										   
										   
										   
		}
	}
	
	
	
	checkrow();
	for(i=0;i<=8;i++){
	for(j=0;j<=8;j++)
		Ans2[i][j]=Map[i][j];
	
}
	
	
}

void Sudoku::checkcell(){
	
	int a;
	a=checkbgcell();
	if(a==0){
		checkrow();
		checkcol();
		
	}
	else
		cout<<"1";
	
	
}


void  Sudoku::solve(){
	
	int t;
	t=0;
	int i,j;
	
	for(i=0;i<=8;i++)
	{
		for(j=0;j<=8;j++){
           if(Map[i][j]!=0)	{
			   t++;
		   }
	  }
	
	}
	if(t<17)
	{
		cout<<"2";
	}
	else{
	fill();
	for(i=0;i<=8;i++){
		for(j=0;j<=8;j++){
	if (Ans1[i][j]!=Ans2[i][j])
		cout<<"2"<<endl;
		}
	for(i=0;i<=8;i++)
	{
		for(j=0;j<=8;j++){
			if (Ans1[i][j]=Ans2[i][j])
		       cout<<Ans1[i][j];
		   if(j==8)
				cout<<endl;
		}
	}
	}
	
}

}

void Sudoku::transform(){
readIn();
change();
printOut();

}

void Sudoku::change(){

srand(time(NULL));
changeNum(rand()%10, rand()%10);
changeRow(rand()%3,rand()%3);
changeCol(rand()%3,rand()%3);
rotate(rand()%101);
flip(rand()%2);





}

void Sudoku::changeNum(int a,int b){
	int i,j;
	if(a>=0 && b>=0){
	for(i=0;i<9;i++){
		 for(j=0;j<9;j++){
			if (Map[i][j]==a ){
				
				Map[i][j]=b;
				
			}
			else if(Map[i][j]==b){
				Map[i][j]=a;
				
			}
			 
		 }
	}
	
	}
}

void Sudoku::changeRow(int a,int b){
	int i;
	int chblock[9]={0};
	if(a>=0 && b>=0){
	if(a==0){
		if(b==1){
			for(i=0;i<=8;i++){
				chblock[i]=Map[0][i];
				Map[0][i]=Map[3][i];
				Map[3][i]=chblock[i];
				
				chblock[i]=Map[1][i];
				Map[1][i]=Map[4][i];
				Map[4][i]=chblock[i];
				
				chblock[i]=Map[2][i];
				Map[2][i]=Map[5][i];
				Map[5][i]=chblock[i];
				
			}
		}
		else if(b==2)
		{
			for(i=0;i<=8;i++){
				chblock[i]=Map[0][i];
				Map[0][i]=Map[6][i];
				Map[6][i]=chblock[i];
				
				chblock[i]=Map[1][i];
				Map[1][i]=Map[7][i];
				Map[7][i]=chblock[i];
				
				chblock[i]=Map[2][i];
				Map[2][i]=Map[8][i];
				Map[8][i]=chblock[i];
				
			}
			
			
		}
	}
	
	if(a==1){
		if(b==0){
			for(i=0;i<=8;i++){
				chblock[i]=Map[3][i];
				Map[3][i]=Map[0][i];
				Map[0][i]=chblock[i];
				
				chblock[i]=Map[4][i];
				Map[4][i]=Map[1][i];
				Map[1][i]=chblock[i];
				
				chblock[i]=Map[5][i];
				Map[5][i]=Map[2][i];
				Map[2][i]=chblock[i];
				
			}
		}
		else if(b==2)
		{
			for(i=0;i<=8;i++){
				chblock[i]=Map[3][i];
				Map[3][i]=Map[6][i];
				Map[6][i]=chblock[i];
				
				chblock[i]=Map[4][i];
				Map[4][i]=Map[7][i];
				Map[7][i]=chblock[i];
				
				chblock[i]=Map[5][i];
				Map[5][i]=Map[8][i];
				Map[8][i]=chblock[i];
				
			}
			
			
		}
	}
	
	if(a==2){
		if(b==0){
			for(i=0;i<=8;i++){
				chblock[i]=Map[6][i];
				Map[6][i]=Map[0][i];
				Map[0][i]=chblock[i];
				
				chblock[i]=Map[7][i];
				Map[7][i]=Map[1][i];
				Map[1][i]=chblock[i];
				
				chblock[i]=Map[8][i];
				Map[8][i]=Map[2][i];
				Map[2][i]=chblock[i];
				
			}
		}
		else if(b==1)
		{
			for(i=0;i<=8;i++){
				chblock[i]=Map[6][i];
				Map[6][i]=Map[3][i];
				Map[3][i]=chblock[i];
				
				chblock[i]=Map[7][i];
				Map[7][i]=Map[4][i];
				Map[4][i]=chblock[i];
				
				chblock[i]=Map[8][i];
				Map[8][i]=Map[5][i];
				Map[5][i]=chblock[i];
				
			}
			
			
		}
	}
}
}
void Sudoku::changeCol(int a,int b){
	
	if (a>=0 && b>=0){
	int i;
	
	int chblock[9]={0};
	if(a==0){
		if(b==1){
			for(i=0;i<=8;i++){
				chblock[i]=Map[i][0];
				Map[i][0]=Map[i][3];
				Map[i][3]=chblock[i];
				
				chblock[i]=Map[i][1];
				Map[i][1]=Map[i][4];
				Map[i][4]=chblock[i];
				
				chblock[i]=Map[i][2];
				Map[i][2]=Map[i][5];
				Map[i][5]=chblock[i];
				
			}
		}
		else if(b==2)
		{
			for(i=0;i<=8;i++){
				chblock[i]=Map[i][0];
				Map[i][0]=Map[i][6];
				Map[i][6]=chblock[i];
				
				chblock[i]=Map[i][1];
				Map[i][1]=Map[i][7];
				Map[i][7]=chblock[i];
				
				chblock[i]=Map[i][2];
				Map[i][2]=Map[i][8];
				Map[i][8]=chblock[i];
				
			}
			
			
		}
	}
	
	if(a==1){
		if(b==0){
			for(i=0;i<=8;i++){
				chblock[i]=Map[i][3];
				Map[i][3]=Map[i][0];
				Map[i][0]=chblock[i];
				
				chblock[i]=Map[i][4];
				Map[i][4]=Map[i][1];
				Map[i][1]=chblock[i];
				
				chblock[i]=Map[i][5];
				Map[i][5]=Map[i][2];
				Map[i][2]=chblock[i];
				
			}
		}
		else if(b==2)
		{
			for(i=0;i<=8;i++){
				chblock[i]=Map[i][3];
				Map[i][3]=Map[i][6];
				Map[i][6]=chblock[i];
				
				chblock[i]=Map[i][4];
				Map[i][4]=Map[i][7];
				Map[i][7]=chblock[i];
				
				chblock[i]=Map[i][5];
				Map[i][5]=Map[i][8];
				Map[i][8]=chblock[i];
				
			}
			
			
		}
	}
	
	if(a==2){
		if(b==0){
			for(i=0;i<=8;i++){
				chblock[i]=Map[i][6];
				Map[i][6]=Map[i][0];
				Map[i][0]=chblock[i];
				
				chblock[i]=Map[i][7];
				Map[i][7]=Map[i][1];
				Map[i][1]=chblock[i];
				
				chblock[i]=Map[i][8];
				Map[i][8]=Map[i][2];
				Map[i][2]=chblock[i];
				
			}
		}
		else if(b==1)
		{
			for(i=0;i<=8;i++){
				chblock[i]=Map[i][6];
				Map[i][6]=Map[i][3];
				Map[i][3]=chblock[i];
				
				chblock[i]=Map[i][7];
				Map[i][7]=Map[i][7];
				Map[i][4]=chblock[i];
				
				chblock[i]=Map[i][8];
				Map[i][8]=Map[i][5];
				Map[i][5]=chblock[i];
				
			}
			
			
		}
	}
	
	}
}

void Sudoku::rotate(int n){

	int i,j;
	if(n%4==1&& n>=0){
		for(i=0;i<=8;i++){
			for(j=0;j<=8;j++){
			
		Map[i][j]=Map[j][8-i];
		
			}
		}
		
	}
	else if(n%4==2&& n>=0){
		for(i=0;i<=8;i++){
			for(j=0;j<=8;j++){
			
		Map[i][j]=Map[8-i][8-j];
		
			}
		}
		
		
		
	}
	
	else if(n%4==3&& n>=0){
		for(i=0;i<=8;i++){
			for(j=0;j<=8;j++){
			
		Map[i][j]=Map[8-j][i];
		
			}
		}
		
		
		
	}
	
}


void Sudoku::flip(int n){
	
	int i,j;

	if(n==0){
		for(i=0;i<=8;i++){
			for(j=0;j<=8;j++){
			
		Map[i][j]=Map[j][8-i];
		
			}
		}
		
	}
	
	
	
	
	
}



void Sudoku::printOut(){
int i,j;

	 for(i=0;i<9;i++){
		 for(j=0;j<9;j++){
        cout<<Map[i][j];
		if(j==8)
			cout<<endl;

  }

  }

   
}
