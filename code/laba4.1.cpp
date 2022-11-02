#include <bits/stdc++.h>

using namespace std;

int convert(char ch)
{
   int value = 0;

   switch(ch)
   {
      case 'I': return 1;
      case 'V': return 5;
      case 'X': value = 10; break;
      case 'L': value = 50; break;
      case 'C': value = 100; break;
      case 'D': value = 500; break;
      case 'M': value = 1000; break;
      default: value = -1;
   }
   return value;
}

int main (){
   int i = 0, num = 0;
   char romanNumber[100];

   cout << "Enter roman number: ";
   cin >> romanNumber;

   while(romanNumber[i]){
      if(convert(romanNumber[i]) < 0 ){
         printf("\nInvalid Roman Number.\n");
         return 1;
      }

      if((strlen(romanNumber) - i ) > 2){
        bool is_correct = 
            convert(romanNumber[i]) < convert(romanNumber[i + 2]) ||
            ((strlen(romanNumber) - i ) > 3 && 
            convert(romanNumber[i]) == convert(romanNumber[i + 3]) &&
            convert(romanNumber[i]) == convert(romanNumber[i + 2])&&
            convert(romanNumber[i]) == convert(romanNumber[i + 1]));
         
         if(is_correct){
            cout << "Incorrect number!";
            return 0;
         }
      }

      if(convert(romanNumber[ i ]) >= convert(romanNumber[i + 1])) 
         num = num + convert(romanNumber[ i ]);
      else{
         num += (convert(romanNumber[i+1]) - convert(romanNumber[i]));
         i++;
      }
      i++;
   }

   cout << num;
   return 0;
}

