#include <stdio.h>                                                                
#include <unistd.h>
#define BLACK "\033[30m"                
#define RED "\e[0;31m"                                                            
#define BLUE "\e[0;34m"                                                           
#define GREEN "\e[0;32m"
#define WHITE "\033[37m"                                                         
int main()                                                                        
{                                                                                 
  int i=0;                                                                        
  char bar[102]={0};                                                            
  char circle[4]={'-','/','|','\\'};                                           
  for(i=0;i<=100;i++)                                                             
  {
    printf(BLACK "[%d%%] ",i);                                                                                
    if(i<=30)                                                                     
      printf(RED" [%c] [%-100s]\r",circle[i%4],bar);      
    else if(i>30&&i<=70)                                                         
      printf(BLUE" [%c] [%-100s]\r",circle[i%4],bar);                        
    else                                   
      printf(GREEN " [%c] [%-100s]\r",circle[i%4],bar);       
    fflush(stdout);                                                              
    bar[i]='=';                           
    usleep(100*1000);                    
  }                                             
  printf(BLACK"\n");                
  return 0;                                                                       
}     
