#include <stdio.h>
#include <stdlib.h>
#include <uep_wide.h>

char *pTest;

int main(int argc,char *argv[])
{
  InitCSSMWIDE("fr_BE.UTF-8");
  
  wprintf(L"\nTest deux caractères UTF8\n");
  pTest=getnchar(2);  	
  
  wprintf(L"\n");  
  
  exit(0);
}