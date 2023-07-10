#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int boyut = 50;
	int dizi[boyut];

	srand(time(0));

	for(int i=0; i<boyut; i++) {
		dizi[i]=rand()%10000+1;
	}
	cout<<"diziniz: "<<endl;
	for(int i=0; i<boyut; i++) {
		cout<<dizi[i]<<endl;
	}
	int gecici;
	for(int j=0; j<boyut; j++) {

		for(int i=1; i<boyut; i++) {
			if(dizi[i-1]<dizi[i]) {
				gecici=dizi[i-1];
				dizi[i-1]=dizi[i];
				dizi[i]=gecici;
			}
		}
	}
	cout<<"siralanmis dizi: "<<endl;
	for(int i=0; i<boyut; i++) {
		cout<<dizi[i]<<endl;
	}

}