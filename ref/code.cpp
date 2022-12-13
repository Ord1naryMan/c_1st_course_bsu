#include <math.h>
#include <iostream>
using namespace std;
int main(){
	int lower_border;
	//cout << "lower_border=";      исходный код
	cout << "enter lower border[MAX=1000]: ";
	cin >> lower_border;
	//UPD begin
	if(lower_border >= 1000 || lower_border <= 1){
		cout << "please enter number lower than 1000 and more than 1\n";
		return 0;
	}
	//UPD end
	const int UPPER_BORDER = 1000;
	bool a[UPPER_BORDER] = { 0 };
	//for (int i = 2; i < UPPER_BORDER; i++)   исходный код
	//  	a[i] = true;
	int n = sqrt(double(UPPER_BORDER));
	for (int i = 2; i <= n; i++)
		if (!a[i])   //UPD array reverse
			for (int j = i * i; j < UPPER_BORDER; j += i) //UPD changed j=i*2 to j=i*i
				a[j] = true;     //UPD  array reverse
	for (int i = 1; i < lower_border; i++)
		if (!a[i])     //UPD array reverse
			a[i] = true;     //UPD array reverse
	int flip =0, clone_i=0;
	//UPD begin     optimisation
	lower_border = lower_border - (!(lower_border%2) ? 1 : 0);
	//UPD end
	for (int i = lower_border; i < UPPER_BORDER -1; i+=2){
		//UPD begin
		if(a[i])
			continue;
		//UPD end
		clone_i = i;
		flip = 0;
		while (clone_i){  //   UPD while(clone_i%10!=0) changed to while(clone_i)  за причинами в текстовый файл
			//if (clone_i == i)
			//  	flip = 0;
			flip = (flip * 10 + (clone_i % 10));
			//clone_i = (clone_i - clone_i % 10) / 10;   //  UPD  смысл?
			clone_i /= 10;
			
			
			//if (clone_i % 10 == 0){
			//	  clone_i = i;                      исходный код
			//	  break;
			//} 
		}
		if (flip != i)
			a[i] = true;    //UPD array reverse
	}
	cout << (lower_border==1 ? "2 " : "");
	for (int i = lower_border; i < UPPER_BORDER; i+=2)   //UPD i++ changed to i+=2
		if (!a[i])    //UPD array reverse
			cout << i << " ";
	cout << endl;
	return 0;
}
