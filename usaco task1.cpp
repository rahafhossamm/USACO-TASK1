
/*
ID: r
LANG: C
TASK: ride
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int hash(char*s)
{
	int h=1;
	for(int i=0;s[i]!='\0';i++){
	h=((s[i]-'A'+1)*h);
	//printf("%d",i);
	}
	return h%47;
	
}
  main () {
  
  char comet[100];
  char group[100];
  FILE *fin  = fopen ("ride.in", "r");
  FILE *fout = fopen ("ride.out", "w");

    int x= strlen(comet);
    int y= strlen(group);
    fscanf (fin,"%s%s", comet, group);      /* the two input integers */
    //printf("%s %s",comet,group);
    //fprintf (fout, "%d\n %d\n",hash(comet),hash(group));
    
    
    if(hash(comet)==hash(group))
     fprintf(fout,"GO\n");
     else 
      fprintf(fout,"STAY\n");
       return 0;
   }
