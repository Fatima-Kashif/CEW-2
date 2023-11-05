//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//#include<math.h>
TASK 1
/*int main() {
  int num;
  int sum=0;
  printf("Enter how many no you want to print: ");
  scanf("%d",&num);
  for (int i=0;i<=2*num;i++){
      if(i%2!=0){
          printf("%d\n",i);
          sum+=i;
      }
  }
  printf("sum= %d\n",sum);
    return 0;
}
int main() {
  int num;
  int sum=0;
  int count=0;
  int i=0;
  printf("Enter how many no you want to print: ");
  scanf("%d",&num);
  while(count!=num){
      if(i%2!=0){
          printf("%d\n",i);
          sum+=i;
          count++;
      }
    i++;
  }
  printf("sum= %d\n",sum);
  return 0;
}
int main ()
{
    int n;
    int sum=0;
    printf("Enter the number how many times you want to print: ");
    scanf("%d",&n);
    int i = 0;
    do {
        if(i==(2*n)){
            break;
        }
        else
            {
              if(i%2!=0){
               sum+=i;
               printf("%d\n",i);
            }
        }
        i++;
    }
    while (1);

    printf("sum:%d",sum);
    return 0;
}*/
TASK 2: PRINTING ASTERIKS
/* int main() {
      int n;
     printf("Enter how many line you want to print: ");
     scanf("%d",&n);
     for (int i=1;i<=n;i++){
         for (int j=i; j<n;j++){
             printf(" ");
         }
         for (int k=1; k<=i;k++){
             printf("* ");
         }

         printf("\n");
     }
    return 0;
 }*/
TASK 3: STRINGS COMPARISON
/*int main() {
    char string1[20];
    char string2[20];
    int i=0;
    int j=0;
    printf("Enter string 1: ");
    scanf("%s",string1);
    printf("Enter string 2: ");
    scanf("%s",string2);
    while(string1[i]!='\0'){
        i++;
    }
    while(string2[j]!='\0'){
        j++;
    }
    if (i==j){
        printf("strings are same");
    }
    else{
        printf("strings are not same");
    }
    return 0;
}*/
TASK 4: CHANGING UPPER CASE TO LOWER CASE AND VICE VERSA
/*  int main() {
    char sent[50];
    printf("Type any sentence: ");
    scanf("%s",sent);
    for (int i=0;i<=strlen(sent);i++){
        if (isupper(sent[i])!=0){
            sent[i]=tolower(sent[i]);
        }
         else if (islower(sent[i])!=0){
            sent[i]=toupper(sent[i]);
        }
        }
    printf("Modified sentence: %s",sent);
  return 0;
}*/
TASK 5: PRINTING UNIQUE LETTERS IN AN ARRAY
/*int main()
{
    char word[50];
    char unique[50];
    int count=0;
    int c=0;
    printf("Type any word: ");
    scanf("%s",word);
    for (int i=0;i<strlen(word);i++){
      count=0;
      for (int j=0;j<strlen(word);j++){
            if (word[i]==word[j]&& i!=j){
                count++;
            }
      }
      if (count==0){
        unique[c]=word[i];
        c++;
      }
    }
    unique[c]='\0';
    printf("%s",unique);
    return 0;
}*/
TASK 6: FEET-INCH STRUCT
 /*  struct Dist{
        float inch;
        float feet;
    };
    void addDis(float a,float b,float c,float d){
        if (b+d>12.00){
            float e=12.00;
            float h=(b+d)/12.00;
            float f=fmod(b+d,e);
            printf("Total distance is: %.2f feets %.2f inches ",(a+c)+h,f);
        }
        else{
            printf("Total distance is: %.2f feets %.2f inches ",a+c,b+d);
        }
    }

int main(){
    struct Dist dis1,dis2;
    printf("Enter distance of first obj as feet inch:");
    scanf("%f %f",&dis1.feet,&dis1.inch);
    printf("Enter distance of second obj as feet inch:");
    scanf("%f %f",&dis2.feet,&dis2.inch);
    addDis(dis1.feet,dis1.inch,dis2.feet,dis2.inch);
    return 0;

}*/
