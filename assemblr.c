#include <stdio.h>
void main(){
FILE *dosya;
char karakter[400];
char ka1[400];
int i;
i=0;
int j,k;
j=0;
k=0;
char fnamer[100]="";	
printf("Dosyanizin yerini ve ismini duzgunce yaziniz: \n");
printf("ornek gosterim  c:\\gokce.txt   ");
scanf("%s",&fnamer);
char no;
 
if ((dosya=fopen(fnamer,"r")) == NULL)
    printf("Surucu veya dosya bulunamadi.\n");
else{ 
    while (fscanf(dosya,"%c",&no)!=EOF){
     //	printf("%c",no);
		
			
			if (no!='\n'||no!=32){
	    	karakter[i]=no;
        
         	}
         	i++;
         	
     }  
  fclose(dosya);
//  for(j=0;j<i;j++){
//  	printf("karakter[%c]%d\n",karakter[j],j);
// }
  int RAM[256];
  char AX[40];
  char BX[40];
   char CX[40];
  char DX[40];
  int valA,ramA,c,d,a;
  int valB,b;
  int valC;
  int valD;
  
  int valR1;
  int valR2;
  int valR;
  int top;
  int cik;
  int crp;
  int bol;
  char dizi[20];

int m,g;
m=0;
for(m;m<i;j++){

	if(karakter[m]=='A'){
		
			if(karakter[m+4]=='A'){
				if(karakter[m+7]=='['||karakter[m+7]==91){
					
					if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
				
					valA=atoi(RAM[karakter[m+8]]);
					printf("AX=%d\n",valA);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valA=atoi(RAM[karakter[m+8],karakter[m+9]]);
					printf("AX=%d\n",valA);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
						
					valA=atoi(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					printf("AX=%d\n",valA);
					m=m+13;
					}
					
				}
				else{
					if(karakter[m+8]=='\n'){//tek basamk
					  AX[0]=karakter[m+7];
					  AX[1]='\0';
					  AX[2]='\0';
					  valA = atoi(AX);
					  printf("AX=%d\n",valA);
					  m=m+9;
					 
					}
					else if(karakter[m+9]=='\n'){//iki basamaklı
						AX[0]=karakter[m+7];
						AX[1]=karakter[m+8];
						AX[2]='\0';
						 valA = atoi(AX);
					  printf("AX=%d\n",valA);
					  m=m+10;
					}
						else if(karakter[m+10]=='\n'){//3 basamaklı
						AX[0]=karakter[m+7];
						AX[1]=karakter[m+8];
						AX[2]=karakter[m+9];
						AX[3]='\0';
						 valA = atoi(AX);
					  printf("AX=%d\n",valA);
					  m=m+11;
					}
						else if(karakter[m+11]=='\n'){//4 basamaklı
						AX[0]=karakter[m+7];
						AX[1]=karakter[m+8];
						AX[2]=karakter[m+9];
						AX[3]=karakter[m+10];
						 valA = atoi(AX);
					  printf("AX=%d\n",valA);
					  m=m+12;
					}
					
					
				}
				
			}
	
		
		else if(karakter[m+4]=='D'){
					if(karakter[m+7]=='['||karakter[m+7]==91){
					
					if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
				
					valD=atoi(RAM[karakter[m+8]]);
					printf("DX=%d\n",valD);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					
					valD=atoi(RAM[karakter[m+8],karakter[m+9]]);
					printf("DX=%d\n",valD);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					
					valD=atoi(RAM[karakter[m+8]],karakter[m+9],karakter[m+10]);
					printf("DX=%d\n",valD);
					m=m+13;
					}
					
				}
				else{
					if(karakter[m+8]=='\n'){//tek basamk
					  DX[0]=karakter[m+7];
					  DX[1]='\0';
					  DX[2]='\0';
					    valD = atoi(DX);
					  printf("DX=%d\n",valD);
					  m=m+9;
					 
					}
					else if(karakter[m+9]=='\n'){//iki basamaklı
						DX[0]=karakter[m+7];
						DX[1]=karakter[m+8];
						  valD = atoi(DX);
					  printf("DX=%d\n",valD);
					  m=m+10;
					}
						else if(karakter[m+10]=='\n'){//3 basamaklı
						DX[0]=karakter[m+7];
						DX[1]=karakter[m+8];
						DX[2]=karakter[m+9];
						  valD = atoi(DX);
					  printf("DX=%d\n",valD);
					  m=m+11;
					}
						else if(karakter[m+11]=='\n'){//4 basamaklı
						DX[0]=karakter[m+7];
						DX[1]=karakter[m+8];
						DX[2]=karakter[m+9];
						DX[3]=karakter[m+10];
						  valD = atoi(DX);
					  printf("DX=%d\n",valD);
					  m=m+12;
					}}			
					
				}		
	
		else if(karakter[m+4]=='B'){
					if(karakter[m+7]=='['||karakter[m+7]==91){
					
					if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
					valB=atoi(RAM[karakter[m+8]]);
					printf("BX=%d\n",valB);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valB=atoi(RAM[karakter[m+8],karakter[m+9]]);
					printf("BX=%d\n",valB);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valB=atoi(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					printf("BX=%d\n",valB);
					m=m+13;
					}		}
				else{
					if(karakter[m+8]=='\n'){//tek basamk
					  BX[0]=karakter[m+7];
					   valB = atoi(BX);
					  printf("BX=%d\n",valB);
					  m=m+9;
					 
					}
					else if(karakter[m+9]=='\n'){//iki basamaklı
						BX[0]=karakter[m+7];
						BX[1]=karakter[m+8];
						 valB = atoi(BX);
					  printf("BX=%d\n",valB);
					  m=m+9;
					}
						else if(karakter[m+10]=='\n'){//3 basamaklı
						BX[0]=karakter[m+7];
						BX[1]=karakter[m+8];
						BX[2]=karakter[m+9];
							 valB = atoi(BX);
					  printf("BX=%d\n",valB);
					  m=m+9;
					}
						else if(karakter[m+11]=='\n'){//4 basamaklı
						BX[0]=karakter[m+7];
						BX[1]=karakter[m+8];
						BX[2]=karakter[m+9];
						BX[3]=karakter[m+10];
							 valB = atoi(BX);
					  printf("BX=%d\n",valB);
					  m=m+9;
					}
					
					
				}}
				
				
				else if(karakter[m+4]=='C'){
					if(karakter[m+7]=='['||karakter[m+7]==91){	
					if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
					valC=atoi(RAM[karakter[m+8]]);
					printf("CX=%d\n",valC);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valC=atoi(RAM[karakter[m+8],karakter[m+9]]);
					printf("CX=%d\n",valC);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valC=atoi(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					printf("CX=%d\n",valC);
					m=m+13;
					}
					
				}
				else{
					if(karakter[m+8]=='\n'){//tek basamk
					  CX[0]=karakter[m+7];
					    valC = atoi(CX);
					  printf("CX=%d\n",valC);
					  m=m+9;			 
					}
					else if(karakter[m+9]=='\n'){//iki basamaklı
						CX[0]=karakter[m+7];
						CX[1]=karakter[m+8];
						 valC = atoi(CX);
					  printf("CX=%d\n",valC);
					  m=m+10;	 
					}
						else if(karakter[m+10]=='\n'){//3 basamaklı
						CX[0]=karakter[m+7];
						CX[1]=karakter[m+8];
						CX[2]=karakter[m+9];
						 valC = atoi(CX);
					  printf("CX=%d\n",valC);
					  m=m+11;
					 
					}
						else if(karakter[m+11]=='\n'){//4 basamaklı
						CX[0]=karakter[m+7];
						CX[1]=karakter[m+8];
						CX[2]=karakter[m+9];
						CX[3]=karakter[m+10];
						 valC = atoi(CX);
					  printf("CX=%d\n",valC);
					  m=m+12;
					 
					}		
				}}
				
			}//atama son
			
		
			
			
			//TOPLAMAa
			
		
			if(karakter[m]=='T'){
				if(karakter[m+4]=='A'){
					if(karakter[m+7]=='B'){
						valA=valA+valB;
						printf("AX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valA=valA+valA;
						printf("AX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valA=valA+valC;
						printf("AX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valA=valA+valD;
						printf("AX=%d\n",valA);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valA=valA+valR;
					printf("AX=%d\n",valA);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valA=valA+valR;
					printf("AX=%d\n",valA);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valA=valA+valR;
					printf("AX=%d\n",valA);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valA=valA+a;
					   printf("AX=%d",valA);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valA=valA+a;
					   printf("AX=%d",valA);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valA=valA+a;
					   printf("AX=%d",valA);
					   m=m+12;
					
					}
				
				}
					
				
				else if(karakter[m+4]=='['){
					if(karakter[m+6]==']'){//tek basamk
					valR1=RAM[karakter[m+5]];
					
					  if(karakter[m+8]=='['){
					  	if(karakter[m+10]==']'){//tek basamaklı
				         valR2=atoi(RAM[karakter[m+9]]);
				         valR=valR1+valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+12;
				         
						  }
						else if(karakter[m+11]==']'){//iki basamaklı		
				         valR2=atoi(RAM[karakter[m+9],karakter[m+10]]);
				         valR=valR1+valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+13;		
						}  
						else if(karakter[m+12]==']'){//üç basamaklı
				         valR2=atoi(RAM[karakter[m+9],karakter[m+10],karakter[m+11]]);
				         valR=valR1+valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
							
						} 
					  }
						
					}
					else if(karakter[m+7]==']'){//iki basamak
					valR1=atoi(RAM[karakter[m+5],karakter[m+6]]);
					if(karakter[m+9]=='['){
					 	if(karakter[m+11]==']'){//tek basamaklı	
				         valR2=atoi(RAM[karakter[m+10]]);
				         valR=valR1+valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+13;
					  	
						  }
						else if(karakter[m+12]==']'){//iki basamaklı	
				         valR2=atoi(RAM[karakter[m+10],karakter[m+11]]);
				         valR=valR1+valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
							
						}  
						else if(karakter[m+13]==']'){//üç basamaklı
					
				         valR2=atoi(RAM[karakter[m+10],karakter[m+11],karakter[m+12]]);
				         valR=valR1+valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+15;
						
							
						} 
						
					}}
					else if(karakter[m+8]==']'){//üç basamk
					valR1=atoi(RAM[karakter[m+5],karakter[m+6],karakter[m+7]]);
					if(karakter[m+10]=='['){
					
					 	if(karakter[m+12]==']'){//tek basamaklı
				         valR2=atoi(RAM[karakter[m+11]]);
				         valR=valR1+valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
					  	
						  }
						else if(karakter[m+13]==']'){//iki basamaklı		
				         valR2=atoi(RAM[karakter[m+11],karakter[m+12]]);
				         valR=valR1+valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+15;
							
						}  
						else if(karakter[m+14]==']'){//üç basamaklı
				         valR2=atoi(RAM[karakter[m+11],karakter[m+12],karakter[m+13]]);
				         valR=valR1+valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+16;
						}
						
					}
				}}
				
				
				
				
				
				
				
				
				else if(karakter[m+4]=='B'){
					if(karakter[m+7]=='B'){
						valB=valB+valB;
						printf("BX=%d\n",valB);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valB=valB+valA;
						printf("BX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valB=valB+valC;
						printf("BX=%d\n",valB);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valB=valB+valD;
						printf("BX=%d\n",valB);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valB=valB+valR;
					printf("BX=%d\n",valB);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valB=valB+valR;
					printf("BX=%d\n",valB);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valB=valB+valR;
					printf("BX=%d\n",valB);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valB=valB+a;
					   printf("BX=%d",valB);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valB=valB+a;
					   printf("BX=%d",valB);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valB=valB+a;
					   printf("BX=%d",valB);
					   m=m+12;
					
					}
					
					
				}
				else	if(karakter[m+4]=='C'){
				if(karakter[m+7]=='B'){
						valC=valC+valB;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valC=valC+valA;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valC=valC+valC;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valC=valC+valD;
						printf("CX=%d\n",valC);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valC=valC+valR;
					printf("CX=%d\n",valC);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valC=valC+valR;
					printf("CX=%d\n",valC);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valC=valC+valR;
					printf("CX=%d\n",valC);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valC=valA+a;
					   printf("CX=%d",valC);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valC=valC+a;
					   printf("CX=%d",valC);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valC=valC+a;
					   printf("CX=%d",valC);
					   m=m+12;
					
					}
				}
				
					else	if(karakter[m+4]=='D'){
					
					
						if(karakter[m+7]=='B'){
						valD=valD+valB;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valD=valD+valA;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valD=valD+valC;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valD=valD+valD;
						printf("DX=%d\n",valD);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valD=valD+valR;
					printf("DX=%d\n",valD);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valD=valD+valR;
					printf("DX=%d\n",valD);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valD=valD+valR;
					printf("DX=%d\n",valD);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valD=valD+a;
					   printf("DX=%d",valD);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valD=valD+a;
					   printf("DX=%d",valD);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valD=valD+a;
					   printf("DX=%d",valD);
					   m=m+12;
					
					}
				}
				
			
			
			}//toplama sonu
			
			
				if(karakter[m]=='C'){
					if(karakter[m+1]=='R'){
							if(karakter[m+4]=='A'){
					if(karakter[m+7]=='B'){
						valA=valA*valB;
						printf("AX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valA=valA*valA;
						printf("AX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valA=valA*valC;
						printf("AX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valA=valA*valD;
						printf("AX=%d\n",valA);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valA=valA*valR;
					printf("AX=%d\n",valA);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valA=valA*valR;
					printf("AX=%d\n",valA);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valA=valA*valR;
					printf("AX=%d\n",valA);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valA=valA*a;
					   printf("AX=%d",valA);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valA=valA*a;
					   printf("AX=%d",valA);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valA=valA*a;
					   printf("AX=%d",valA);
					   m=m+12;
					
					}
				
				}
					
				
				else if(karakter[m+4]=='['){
					if(karakter[m+6]==']'){//tek basamk
					valR1=RAM[karakter[m+5]];
					
					  if(karakter[m+8]=='['){
					  	if(karakter[m+10]==']'){//tek basamaklı
				         valR2=atoi(RAM[karakter[m+9]]);
				         valR=valR1*valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+12;
				         
						  }
						else if(karakter[m+11]==']'){//iki basamaklı		
				         valR2=atoi(RAM[karakter[m+9],karakter[m+10]]);
				         valR=valR1*valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+13;		
						}  
						else if(karakter[m+12]==']'){//üç basamaklı
				         valR2=atoi(RAM[karakter[m+9],karakter[m+10],karakter[m+11]]);
				         valR=valR1*valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
							
						} 
					  }
						
					}
					else if(karakter[m+7]==']'){//iki basamak
					valR1=atoi(RAM[karakter[m+5],karakter[m+6]]);
					if(karakter[m+9]=='['){
					 	if(karakter[m+11]==']'){//tek basamaklı	
				         valR2=atoi(RAM[karakter[m+10]]);
				         valR=valR1*valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+13;
					  	
						  }
						else if(karakter[m+12]==']'){//iki basamaklı	
				         valR2=atoi(RAM[karakter[m+10],karakter[m+11]]);
				         valR=valR1*valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
							
						}  
						else if(karakter[m+13]==']'){//üç basamaklı
					
				         valR2=atoi(RAM[karakter[m+10],karakter[m+11],karakter[m+12]]);
				         valR=valR1*valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+15;
						
							
						} 
						
					}}
					else if(karakter[m+8]==']'){//üç basamk
					valR1=atoi(RAM[karakter[m+5],karakter[m+6],karakter[m+7]]);
					if(karakter[m+10]=='['){
					
					 	if(karakter[m+12]==']'){//tek basamaklı
				         valR2=atoi(RAM[karakter[m+11]]);
				         valR=valR1*valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
					  	
						  }
						else if(karakter[m+13]==']'){//iki basamaklı		
				         valR2=atoi(RAM[karakter[m+11],karakter[m+12]]);
				         valR=valR1*valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+15;
							
						}  
						else if(karakter[m+14]==']'){//üç basamaklı
				         valR2=atoi(RAM[karakter[m+11],karakter[m+12],karakter[m+13]]);
				         valR=valR1*valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+16;
						}
						
					}
				}}
			
				
				else if(karakter[m+4]=='B'){
					if(karakter[m+7]=='B'){
						valB=valB*valB;
						printf("BX=%d\n",valB);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valB=valB*valA;
						printf("BX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valB=valB*valC;
						printf("BX=%d\n",valB);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valB=valB*valD;
						printf("BX=%d\n",valB);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valB=valB*valR;
					printf("BX=%d\n",valB);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valB=valB*valR;
					printf("BX=%d\n",valB);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valB=valB*valR;
					printf("BX=%d\n",valB);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valB=valB*a;
					   printf("BX=%d",valB);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valB=valB*a;
					   printf("BX=%d",valB);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valB=valB*a;
					   printf("BX=%d",valB);
					   m=m+12;
					
					}
					
					
				}
				else	if(karakter[m+4]=='C'){
				if(karakter[m+7]=='B'){
						valC=valC*valB;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valC=valC*valA;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valC=valC*valC;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valC=valC*valD;
						printf("CX=%d\n",valC);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valC=valC*valR;
					printf("CX=%d\n",valC);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valC=valC*valR;
					printf("CX=%d\n",valC);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valC=valC*valR;
					printf("CX=%d\n",valC);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valC=valA*a;
					   printf("CX=%d",valC);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valC=valC*a;
					   printf("CX=%d",valC);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valC=valC*a;
					   printf("CX=%d",valC);
					   m=m+12;
					
					}
				}
				
					else	if(karakter[m+4]=='D'){
					
					
						if(karakter[m+7]=='B'){
						valD=valD*valB;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valD=valD*valA;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valD=valD*valC;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valD=valD*valD;
						printf("DX=%d\n",valD);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valD=valD*valR;
					printf("DX=%d\n",valD);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valD=valD*valR;
					printf("DX=%d\n",valD);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valD=valD*valR;
					printf("DX=%d\n",valD);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valD=valD*a;
					   printf("DX=%d",valD);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valD=valD*a;
					   printf("DX=%d",valD);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valD=valD*a;
					   printf("DX=%d",valD);
					   m=m+12;
					
					}
				}
				}
				
			
		
		else	if(karakter[m+1]=='I'){
			
			
			
						if(karakter[m+4]=='A'){
					if(karakter[m+7]=='B'){
						valA=valA-valB;
						printf("AX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valA=valA-valA;
						printf("AX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valA=valA-valC;
						printf("AX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valA=valA-valD;
						printf("AX=%d\n",valA);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valA=valA-valR;
					printf("AX=%d\n",valA);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valA=valA-valR;
					printf("AX=%d\n",valA);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valA=valA-valR;
					printf("AX=%d\n",valA);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valA=valA-a;
					   printf("AX=%d",valA);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valA=valA-a;
					   printf("AX=%d",valA);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valA=valA-a;
					   printf("AX=%d",valA);
					   m=m+12;
					
					}
				
				}
					
				
				else if(karakter[m+4]=='['){
					if(karakter[m+6]==']'){//tek basamk
					valR1=RAM[karakter[m+5]];
					
					  if(karakter[m+8]=='['){
					  	if(karakter[m+10]==']'){//tek basamaklı
				         valR2=atoi(RAM[karakter[m+9]]);
				         valR=valR1-valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+12;
				         
						  }
						else if(karakter[m+11]==']'){//iki basamaklı		
				         valR2=atoi(RAM[karakter[m+9],karakter[m+10]]);
				         valR=valR1-valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+13;		
						}  
						else if(karakter[m+12]==']'){//üç basamaklı
				         valR2=atoi(RAM[karakter[m+9],karakter[m+10],karakter[m+11]]);
				         valR=valR1-valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
							
						} 
					  }
						
					}
					else if(karakter[m+7]==']'){//iki basamak
					valR1=atoi(RAM[karakter[m+5],karakter[m+6]]);
					if(karakter[m+9]=='['){
					 	if(karakter[m+11]==']'){//tek basamaklı	
				         valR2=atoi(RAM[karakter[m+10]]);
				         valR=valR1-valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+13;
					  	
						  }
						else if(karakter[m+12]==']'){//iki basamaklı	
				         valR2=atoi(RAM[karakter[m+10],karakter[m+11]]);
				         valR=valR1-valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
							
						}  
						else if(karakter[m+13]==']'){//üç basamaklı
					
				         valR2=atoi(RAM[karakter[m+10],karakter[m+11],karakter[m+12]]);
				         valR=valR1-valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+15;
						
							
						} 
						
					}}
					else if(karakter[m+8]==']'){//üç basamk
					valR1=atoi(RAM[karakter[m+5],karakter[m+6],karakter[m+7]]);
					if(karakter[m+10]=='['){
					
					 	if(karakter[m+12]==']'){//tek basamaklı
				         valR2=atoi(RAM[karakter[m+11]]);
				         valR=valR1-valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
					  	
						  }
						else if(karakter[m+13]==']'){//iki basamaklı		
				         valR2=atoi(RAM[karakter[m+11],karakter[m+12]]);
				         valR=valR1-valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+15;
							
						}  
						else if(karakter[m+14]==']'){//üç basamaklı
				         valR2=atoi(RAM[karakter[m+11],karakter[m+12],karakter[m+13]]);
				         valR=valR1-valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+16;
						}
						
					}
				}}
			
				
				else if(karakter[m+4]=='B'){
					if(karakter[m+7]=='B'){
						valB=valB-valB;
						printf("BX=%d\n",valB);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valB=valB-valA;
						printf("BX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valB=valB-valC;
						printf("BX=%d\n",valB);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valB=valB-valD;
						printf("BX=%d\n",valB);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valB=valB-valR;
					printf("BX=%d\n",valB);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valB=valB-valR;
					printf("BX=%d\n",valB);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valB=valB-valR;
					printf("BX=%d\n",valB);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valB=valB-a;
					   printf("BX=%d",valB);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valB=valB-a;
					   printf("BX=%d",valB);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valB=valB-a;
					   printf("BX=%d",valB);
					   m=m+12;
					
					}
					
					
				}
				else	if(karakter[m+4]=='C'){
				if(karakter[m+7]=='B'){
						valC=valC-valB;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valC=valC-valA;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valC=valC-valC;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valC=valC-valD;
						printf("CX=%d\n",valC);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valC=valC-valR;
					printf("CX=%d\n",valC);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valC=valC-valR;
					printf("CX=%d\n",valC);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valC=valC-valR;
					printf("CX=%d\n",valC);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valC=valA-a;
					   printf("CX=%d",valC);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valC=valC-a;
					   printf("CX=%d",valC);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valC=valC-a;
					   printf("CX=%d",valC);
					   m=m+12;
					
					}
				}
				
					else	if(karakter[m+4]=='D'){
					
					
						if(karakter[m+7]=='B'){
						valD=valD-valB;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valD=valD-valA;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valD=valD-valC;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valD=valD-valD;
						printf("DX=%d\n",valD);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valD=valD-valR;
					printf("DX=%d\n",valD);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valD=valD-valR;
					printf("DX=%d\n",valD);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valD=valD-valR;
					printf("DX=%d\n",valD);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valD=valD-a;
					   printf("DX=%d",valD);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valD=valD-a;
					   printf("DX=%d",valD);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valD=valD-a;
					   printf("DX=%d",valD);
					   m=m+12;
					
					}
				}
					
			
		
			
				
			
			}//I harfi kontrolü
			
			}
			
			
			
			if(karakter[m]=='B'){
				if(karakter[m+4]=='A'){
					if(karakter[m+7]=='B'){
						valA=valA/valB;
						printf("AX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valA=valA/valA;
						printf("AX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valA=valA/valC;
						printf("AX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valA=valA/valD;
						printf("AX=%d\n",valA);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valA=valA/valR;
					printf("AX=%d\n",valA);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valA=valA/valR;
					printf("AX=%d\n",valA);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valA=valA/valR;
					printf("AX=%d\n",valA);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valA=valA/a;
					   printf("AX=%d",valA);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valA=valA/a;
					   printf("AX=%d",valA);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valA=valA/a;
					   printf("AX=%d",valA);
					   m=m+12;
					
					}
				
				}
					
				
				else if(karakter[m+4]=='['){
					if(karakter[m+6]==']'){//tek basamk
					valR1=RAM[karakter[m+5]];
					
					  if(karakter[m+8]=='['){
					  	if(karakter[m+10]==']'){//tek basamaklı
				         valR2=atoi(RAM[karakter[m+9]]);
				         valR=valR1/valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+12;
				         
						  }
						else if(karakter[m+11]==']'){//iki basamaklı		
				         valR2=atoi(RAM[karakter[m+9],karakter[m+10]]);
				         valR=valR1/valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+13;		
						}  
						else if(karakter[m+12]==']'){//üç basamaklı
				         valR2=atoi(RAM[karakter[m+9],karakter[m+10],karakter[m+11]]);
				         valR=valR1/valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
							
						} 
					  }
						
					}
					else if(karakter[m+7]==']'){//iki basamak
					valR1=atoi(RAM[karakter[m+5],karakter[m+6]]);
					if(karakter[m+9]=='['){
					 	if(karakter[m+11]==']'){//tek basamaklı	
				         valR2=atoi(RAM[karakter[m+10]]);
				         valR=valR1/valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+13;
					  	
						  }
						else if(karakter[m+12]==']'){//iki basamaklı	
				         valR2=atoi(RAM[karakter[m+10],karakter[m+11]]);
				         valR=valR1/valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
							
						}  
						else if(karakter[m+13]==']'){//üç basamaklı
					
				         valR2=atoi(RAM[karakter[m+10],karakter[m+11],karakter[m+12]]);
				         valR=valR1/valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+15;
						
							
						} 
						
					}}
					else if(karakter[m+8]==']'){//üç basamk
					valR1=atoi(RAM[karakter[m+5],karakter[m+6],karakter[m+7]]);
					if(karakter[m+10]=='['){
					
					 	if(karakter[m+12]==']'){//tek basamaklı
				         valR2=atoi(RAM[karakter[m+11]]);
				         valR=valR1/valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
					  	
						  }
						else if(karakter[m+13]==']'){//iki basamaklı		
				         valR2=atoi(RAM[karakter[m+11],karakter[m+12]]);
				         valR=valR1/valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+15;
							
						}  
						else if(karakter[m+14]==']'){//üç basamaklı
				         valR2=atoi(RAM[karakter[m+11],karakter[m+12],karakter[m+13]]);
				         valR=valR1/valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+16;
						}
						
					}
				}}
				
				
			
				
				else if(karakter[m+4]=='B'){
					if(karakter[m+7]=='B'){
						valB=valB/valB;
						printf("BX=%d\n",valB);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valB=valB/valA;
						printf("BX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valB=valB/valC;
						printf("BX=%d\n",valB);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valB=valB/valD;
						printf("BX=%d\n",valB);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valB=valB/valR;
					printf("BX=%d\n",valB);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valB=valB/valR;
					printf("BX=%d\n",valB);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valB=valB/valR;
					printf("BX=%d\n",valB);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valB=valB/a;
					   printf("BX=%d",valB);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valB=valB/a;
					   printf("BX=%d",valB);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valB=valB/a;
					   printf("BX=%d",valB);
					   m=m+12;
					
					}
					
					
				}
				else	if(karakter[m+4]=='C'){
				if(karakter[m+7]=='B'){
						valC=valC/valB;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valC=valC/valA;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valC=valC/valC;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valC=valC/valD;
						printf("CX=%d\n",valC);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valC=valC/valR;
					printf("CX=%d\n",valC);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valC=valC/valR;
					printf("CX=%d\n",valC);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valC=valC/valR;
					printf("CX=%d\n",valC);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valC=valA/a;
					   printf("CX=%d",valC);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valC=valC/a;
					   printf("CX=%d",valC);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valC=valC/a;
					   printf("CX=%d",valC);
					   m=m+12;
					
					}
				}
				
					else	if(karakter[m+4]=='D'){
					
					
						if(karakter[m+7]=='B'){
						valD=valD/valB;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valD=valD/valA;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valD=valD/valC;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valD=valD/valD;
						printf("DX=%d\n",valD);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valD=valD/valR;
					printf("DX=%d\n",valD);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valD=valD/valR;
					printf("DX=%d\n",valD);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valD=valD/valR;
					printf("DX=%d\n",valD);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valD=valD/a;
					   printf("DX=%d",valD);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valD=valD/a;
					   printf("DX=%d",valD);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valD=valD/a;
					   printf("DX=%d",valD);
					   m=m+12;
					
					}
				}
				
			
			
			}
				if(karakter[m]=='V'){
					if(karakter[m+1]=='E'){
							if(karakter[m+3]=='A'){
					if(karakter[m+6]=='B'){
						valA=valA&&valB;
						printf("AX=%d\n",valA);
						m=m+9;
					}
					else if(karakter[m+6]=='A'){
						valA=valA&&valA;
						printf("AX=%d\n",valA);
						m=m+9;
					}
					else if(karakter[m+6]=='C'){
						valA=valA&&valC;
						printf("AX=%d\n",valA);
						m=m+9;
					}
					else if(karakter[m+6]=='D'){
						valA=valA&&valD;
						printf("AX=%d\n",valA);
						m=m+9;
					}
						else if(karakter[m+6]=='['){
							if(karakter[m+8]==']'||karakter[m+8]==93){//tek basamk
							
					valR=(RAM[karakter[m+7]]);
					valA=valA&valR;
					printf("AX=%d\n",valA);
					m=m+10;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valA=valA&valR;
					printf("AX=%d\n",valA);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valA=valA&valR;
					printf("AX=%d\n",valA);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valA=valA&a;
					   printf("AX=%d",valA);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valA=valA&a;
					   printf("AX=%d",valA);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valA=valA&a;
					   printf("AX=%d",valA);
					   m=m+12;
					
					}
				
				}
					
				
				else if(karakter[m+4]=='['){
					if(karakter[m+6]==']'){//tek basamk
					valR1=RAM[karakter[m+5]];
					
					  if(karakter[m+8]=='['){
					  	if(karakter[m+10]==']'){//tek basamaklı
				         valR2=atoi(RAM[karakter[m+9]]);
				         valR=valR1&valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+12;
				         
						  }
						else if(karakter[m+11]==']'){//iki basamaklı		
				         valR2=atoi(RAM[karakter[m+9],karakter[m+10]]);
				         valR=valR1&valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+13;		
						}  
						else if(karakter[m+12]==']'){//üç basamaklı
				         valR2=atoi(RAM[karakter[m+9],karakter[m+10],karakter[m+11]]);
				         valR=valR1&valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
							
						} 
					  }
						
					}
					else if(karakter[m+7]==']'){//iki basamak
					valR1=atoi(RAM[karakter[m+5],karakter[m+6]]);
					if(karakter[m+9]=='['){
					 	if(karakter[m+11]==']'){//tek basamaklı	
				         valR2=atoi(RAM[karakter[m+10]]);
				         valR=valR1&valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+13;
					  	
						  }
						else if(karakter[m+12]==']'){//iki basamaklı	
				         valR2=atoi(RAM[karakter[m+10],karakter[m+11]]);
				         valR=valR1&valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
							
						}  
						else if(karakter[m+13]==']'){//üç basamaklı
					
				         valR2=atoi(RAM[karakter[m+10],karakter[m+11],karakter[m+12]]);
				         valR=valR1&valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+15;
						
							
						} 
						
					}}
					else if(karakter[m+8]==']'){//üç basamk
					valR1=atoi(RAM[karakter[m+5],karakter[m+6],karakter[m+7]]);
					if(karakter[m+10]=='['){
					
					 	if(karakter[m+12]==']'){//tek basamaklı
				         valR2=atoi(RAM[karakter[m+11]]);
				         valR=valR1&valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
					  	
						  }
						else if(karakter[m+13]==']'){//iki basamaklı		
				         valR2=atoi(RAM[karakter[m+11],karakter[m+12]]);
				         valR=valR1&valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+15;
							
						}  
						else if(karakter[m+14]==']'){//üç basamaklı
				         valR2=atoi(RAM[karakter[m+11],karakter[m+12],karakter[m+13]]);
				         valR=valR1&valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+16;
						}
						
					}
				}}
			
				
				else if(karakter[m+4]=='B'){
					if(karakter[m+7]=='B'){
						valB=valB&valB;
						printf("BX=%d\n",valB);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valB=valB&valA;
						printf("BX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valB=valB&valC;
						printf("BX=%d\n",valB);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valB=valB&valD;
						printf("BX=%d\n",valB);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valB=valB&valR;
					printf("BX=%d\n",valB);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valB=valB&valR;
					printf("BX=%d\n",valB);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valB=valB&valR;
					printf("BX=%d\n",valB);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valB=valB&a;
					   printf("BX=%d",valB);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valB=valB&a;
					   printf("BX=%d",valB);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valB=valB&a;
					   printf("BX=%d",valB);
					   m=m+12;
					
					}
					
					
				}
				else	if(karakter[m+4]=='C'){
				if(karakter[m+7]=='B'){
						valC=valC&valB;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valC=valC&valA;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valC=valC&valC;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valC=valC&valD;
						printf("CX=%d\n",valC);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valC=valC&valR;
					printf("CX=%d\n",valC);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valC=valC&valR;
					printf("CX=%d\n",valC);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valC=valC&valR;
					printf("CX=%d\n",valC);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valC=valA&a;
					   printf("CX=%d",valC);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valC=valC&a;
					   printf("CX=%d",valC);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valC=valC&a;
					   printf("CX=%d",valC);
					   m=m+12;
					
					}
				}
				
					else	if(karakter[m+4]=='D'){
					
					
						if(karakter[m+7]=='B'){
						valD=valD&valB;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valD=valD&valA;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valD=valD&valC;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valD=valD&valD;
						printf("DX=%d\n",valD);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valD=valD&valR;
					printf("DX=%d\n",valD);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valD=valD&valR;
					printf("DX=%d\n",valD);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valD=valD&valR;
					printf("DX=%d\n",valD);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valD=valD&a;
					   printf("DX=%d",valD);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valD=valD&a;
					   printf("DX=%d",valD);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valD=valD&a;
					   printf("DX=%d",valD);
					   m=m+12;
					
					}
				}
				}
				
			
		
		else	if(karakter[m+3]=='Y'){
			
			
			
						if(karakter[m+4]=='A'){
					if(karakter[m+7]=='B'){
						valA=valA||valB;
						printf("AX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valA=valA||valA;
						printf("AX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valA=valA||valC;
						printf("AX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valA=valA||valD;
						printf("AX=%d\n",valA);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valA=valA||valR;
					printf("AX=%d\n",valA);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valA=valA||valR;
					printf("AX=%d\n",valA);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valA=valA||valR;
					printf("AX=%d\n",valA);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valA=valA||a;
					   printf("AX=%d",valA);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valA=valA||a;
					   printf("AX=%d",valA);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valA=valA||a;
					   printf("AX=%d",valA);
					   m=m+12;
					
					}
				
				}
					
				
				else if(karakter[m+4]=='['){
					if(karakter[m+6]==']'){//tek basamk
					valR1=RAM[karakter[m+5]];
					
					  if(karakter[m+8]=='['){
					  	if(karakter[m+10]==']'){//tek basamaklı
				         valR2=atoi(RAM[karakter[m+9]]);
				         valR=valR1||valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+12;
				         
						  }
						else if(karakter[m+11]==']'){//iki basamaklı		
				         valR2=atoi(RAM[karakter[m+9],karakter[m+10]]);
				         valR=valR1||valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+13;		
						}  
						else if(karakter[m+12]==']'){//üç basamaklı
				         valR2=atoi(RAM[karakter[m+9],karakter[m+10],karakter[m+11]]);
				         valR=valR1||valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
							
						} 
					  }
						
					}
					else if(karakter[m+7]==']'){//iki basamak
					valR1=atoi(RAM[karakter[m+5],karakter[m+6]]);
					if(karakter[m+9]=='['){
					 	if(karakter[m+11]==']'){//tek basamaklı	
				         valR2=atoi(RAM[karakter[m+10]]);
				         valR=valR1||valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+13;
					  	
						  }
						else if(karakter[m+12]==']'){//iki basamaklı	
				         valR2=atoi(RAM[karakter[m+10],karakter[m+11]]);
				         valR=valR1||valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
							
						}  
						else if(karakter[m+13]==']'){//üç basamaklı
					
				         valR2=atoi(RAM[karakter[m+10],karakter[m+11],karakter[m+12]]);
				         valR=valR1||valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+15;
						
							
						} 
						
					}}
					else if(karakter[m+8]==']'){//üç basamk
					valR1=atoi(RAM[karakter[m+5],karakter[m+6],karakter[m+7]]);
					if(karakter[m+10]=='['){
					
					 	if(karakter[m+12]==']'){//tek basamaklı
				         valR2=atoi(RAM[karakter[m+11]]);
				         valR=valR1||valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+14;
					  	
						  }
						else if(karakter[m+13]==']'){//iki basamaklı		
				         valR2=atoi(RAM[karakter[m+11],karakter[m+12]]);
				         valR=valR1||valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+15;
							
						}  
						else if(karakter[m+14]==']'){//üç basamaklı
				         valR2=atoi(RAM[karakter[m+11],karakter[m+12],karakter[m+13]]);
				         valR=valR1||valR2;
				       	printf("RAM=%d\n",valR);
				       	m=m+16;
						}
						
					}
				}}
			
				
				else if(karakter[m+4]=='B'){
					if(karakter[m+7]=='B'){
						valB=valB||valB;
						printf("BX=%d\n",valB);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valB=valB||valA;
						printf("BX=%d\n",valA);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valB=valB||valC;
						printf("BX=%d\n",valB);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valB=valB||valD;
						printf("BX=%d\n",valB);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valB=valB||valR;
					printf("BX=%d\n",valB);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valB=valB||valR;
					printf("BX=%d\n",valB);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valB=valB||valR;
					printf("BX=%d\n",valB);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valB=valB||a;
					   printf("BX=%d",valB);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valB=valB||a;
					   printf("BX=%d",valB);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valB=valB||a;
					   printf("BX=%d",valB);
					   m=m+12;
					
					}
					
					
				}
				else	if(karakter[m+4]=='C'){
				if(karakter[m+7]=='B'){
						valC=valC||valB;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valC=valC||valA;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valC=valC||valC;
						printf("CX=%d\n",valC);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valC=valC||valD;
						printf("CX=%d\n",valC);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valC=valC||valR;
					printf("CX=%d\n",valC);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valC=valC||valR;
					printf("CX=%d\n",valC);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valC=valC||valR;
					printf("CX=%d\n",valC);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valC=valA||a;
					   printf("CX=%d",valC);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valC=valC||a;
					   printf("CX=%d",valC);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valC=valC||a;
					   printf("CX=%d",valC);
					   m=m+12;
					
					}
				}
				
					else	if(karakter[m+4]=='D'){
					
					
						if(karakter[m+7]=='B'){
						valD=valD||valB;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='A'){
						valD=valD||valA;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='C'){
						valD=valD||valC;
						printf("DX=%d\n",valD);
						m=m+10;
					}
					else if(karakter[m+7]=='D'){
						valD=valD||valD;
						printf("DX=%d\n",valD);
						m=m+10;
					}
						else if(karakter[m+7]=='['){
							if(karakter[m+9]==']'||karakter[m+9]==93){//tek basamk
							
					valR=(RAM[karakter[m+8]]);
					valD=valD||valR;
					printf("DX=%d\n",valD);
					m=m+11;
					}
					else if(karakter[m+10]==']'){//2 basamk
					valR=(RAM[karakter[m+8],karakter[m+9]]);
					valD=valD||valR;
					printf("DX=%d\n",valD);
					m=m+12;
					}
					else if(karakter[m+11]==']'){//3basamk
					valR=(RAM[karakter[m+8],karakter[m+9],karakter[m+10]]);
					valD=valD||valR;
					printf("DX=%d\n",valD);
					m=m+13;
					}
						
					}
					else if(karakter[m+8]=='\0'){//tek basamaklı bir sayıyla toplama
					   a= atoi(karakter[m+7]);
					   valD=valD||a;
					   printf("DX=%d",valD);
					   m=m+10;
					
					}
						else if(karakter[m+9]=='\0'){//iki basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
					   a= atoi(dizi);
					   valD=valD||a;
					   printf("DX=%d",valD);
					   m=m+11;
					
					}
					else if(karakter[m+10]=='\0'){//üç basamaklı bir sayıyla toplama
						dizi[0]=karakter[m+7];
						dizi[1]=karakter[m+8];
							dizi[1]=karakter[m+9];
					   a= atoi(dizi);
					   valD=valD||a;
					   printf("DX=%d",valD);
					   m=m+12;
					
					}
				}
					
			
		
			
				
			
			}
			
			}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
		
			
			
			}//for parantezin sonu
			
			
			
			
	
	
	
			
			
		}}//else ve main parantezi
			
			
			
			
		
	
		

			
			
			
			
		
	
		
