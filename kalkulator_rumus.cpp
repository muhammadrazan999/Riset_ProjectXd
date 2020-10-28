#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <unistd.h>

using namespace std;

	int pilih;
	
	int main(void){
	

	int hit_1, hit_2, hit_3, hit_4, hit_5, r;
	int hit_6, hit_7, hit_8, hit_9,hit_10, hit_11;
	float phi;
	
	
	
	system("color A");
	
		printf("______________________________\n");
		printf("| Author : Muhammad Razan .R |\n");
		printf("| Kontak : 0831-9552-1552(WA)|\n");
		printf("| Tools	 : Kalkulator & Rumus|\n");
		printf("|          Bangun datar      |\n");
		printf("------------------------------\n");
	
		cout << "++pilih menu dibawah ini++"<< endl;
		cout << "\n"<<endl;
		cout << "1. mencari rumus luas segitiga "<<"\n"<<
				"2. mencari luas persegi        "<<"\n"<<
				"3. mencari luas lingkaran      "<<"\n"<<
				"4. mencari keliling linkaran   "<<"\n"<<
				"5. mencari luas persegi panjang"<<"\n"<<
				"6. mencari keliling persegi panjang"<< endl;
			cout << "\n";
			cout << "Masukin pilihan mu ==>";
			
				cin >> pilih;
			
		
			switch (pilih){
				
				
				
					
					case 1 :
					
						cout << "masukin panjang alas nya ==>";
							cin >> hit_1;
						cout << "\n";
						cout << "masukin panjang dari tingginya ==>";
							cin >> hit_2;
						cout << "Rumus luas = 1/2 X alas x Tinggi maka\n"<<endl;
						for (int j=1;j<=100;j++){ /* ini namanya perulangan for, perulangan akan diulang */
	system ("cls");				/* selagi hasilnya kurang dari sama dengan 100 */
	cout<<"\n\t\t\trobot razan sedang menghitung.."<<j<<"%"<<endl;
	cout<<"\t";
	
	for (int i=1;i<=j;i++){ /* ini juga perulangan untuk mendeklarasikan jika i itu adalah angka 1 dan jika */
							/* i memang true kurang dari j samadengan j maka, akan eksekusi i++ */
		if (i%2==0){		
			cout<<"|";}
			
			}cout<<endl;		
			usleep (10);
		}
						cout << "hasilnya adalah ==>"<<(hit_1 * hit_2 /2)<<endl;
							cout << "\n";
								cout << main();
					
						break;
					
						
					case 2 :
						
						system("color 4");
					
						cout << "masukan panjang dari sisi nya";
								cin >> hit_3;
							cout << "\n";
							for (int j=1;j<=100;j++){ /* ini namanya perulangan for, perulangan akan diulang */
	system ("cls");				/* selagi hasilnya kurang dari sama dengan 100 */
	cout<<"\n\t\t\trobot razan sedang menghitung.."<<j<<"%"<<endl;
	cout<<"\t";
	
	for (int i=1;i<=j;i++){ /* ini juga perulangan untuk mendeklarasikan jika i itu adalah angka 1 dan jika */
							/* i memang true kurang dari j samadengan j maka, akan eksekusi i++ */
		if (i%2==0){		
			cout<<"|";}
			
			}cout<<endl;		
			usleep (10);
		}
							cout << "hasilnya adalah ==> "<<( hit_3 * hit_3)<< endl;
						    		cout << "\n";
						    cout << main();
					
							break;
							
					case 3 :
						
						system("color D");
						
						cout << " rumus luas lingkaran = Phi X r X r\n";
						cout << " masukkan panjang jari-jari nya : ";
							cin >>r;
						cout << "masukkan phi nya :";
							cin >> phi;
						cout << "maka didapat hasilya ==> "<<(phi * r *r)<<endl;
								cout << "\n";
						cout << main();
					
							break;
							
						
					case 4 :
						
						system("color E");
						
						cout << "rumus keliling lingkaran "<<endl;
						cout << "masukkan diameter lingkarannya :";
							cin >> hit_4;
						cout <<"\n";
						for (int j=1;j<=100;j++){ /* ini namanya perulangan for, perulangan akan diulang */
	system ("cls");				/* selagi hasilnya kurang dari sama dengan 100 */
	cout<<"\n\t\t\trobot razan sedang menghitung.."<<j<<"%"<<endl;
	cout<<"\t";
	
	for (int i=1;i<=j;i++){ /* ini juga perulangan untuk mendeklarasikan jika i itu adalah angka 1 dan jika */
							/* i memang true kurang dari j samadengan j maka, akan eksekusi i++ */
		if (i%2==0){		
			cout<<"|";}
			
			}cout<<endl;		
			usleep (10);
		}
						cout <<"maka didapat hasilnya ==>" << float (hit_4 * 3.14) << "cm"<<endl;
							cout << "\n";
								cout << main();
						
							break;
							
							
					case 5 :
						
						system("color A");
						
						cout << " rumus mencari luas persegi panjang"<< endl;
						cout << " rumus L = p xl "<< endl;
						cout << " masukkan panjang persegi panjang ==>";
							cin >> hit_5;
						cout << " masukkan Lebar persegi panjang ==>";
							cin >> hit_6;
						
						for (int j=1;j<=100;j++){ /* ini namanya perulangan for, perulangan akan diulang */
	system ("cls");				/* selagi hasilnya kurang dari sama dengan 100 */
	cout<<"\n\t\t\trobot razan sedang menghitung.."<<j<<"%"<<endl;
	cout<<"\t";
	
	for (int i=1;i<=j;i++){ /* ini juga perulangan untuk mendeklarasikan jika i itu adalah angka 1 dan jika */
							/* i memang true kurang dari j samadengan j maka, akan eksekusi i++ */
		if (i%2==0){		
			cout<<"|";}
			
			}cout<<endl;		
			usleep (10);
		}
						
						cout << " maka hasilnya adalah ==>" <<(hit_5 * hit_6) <<endl;
						cout << "\n";
							cout << main();
				
						break;
					
							
					case 6 : 
					
						system("color C");
						
						cout << " rumus mencari keliling persegi "<< endl;
						cout << " rumus K = p xl "<< endl;
						cout << " masukkan panjang persegi panjang ==>";
							cin >> hit_7;
						cout << "masukkan Lebar dari persegi panjang";
							cin >> hit_8;
							
							for (int j=1;j<=100;j++){ /* ini namanya perulangan for, perulangan akan diulang */
	system ("cls");				/* selagi hasilnya kurang dari sama dengan 100 */
	cout<<"\n\t\t\trobot razan sedang menghitung.."<<j<<"%"<<endl;
	cout<<"\t";
	
	for (int i=1;i<=j;i++){ /* ini juga perulangan untuk mendeklarasikan jika i itu adalah angka 1 dan jika */
							/* i memang true kurang dari j samadengan j maka, akan eksekusi i++ */
		if (i%2==0){		
			cout<<"|";}
			
			}cout<<endl;		
			usleep (10);
		}
						
						cout << " Didapat hasilnya ==> " << ( 2 * hit_7 + hit_8) << "cm"<<endl;
							cout << main();
						break;
						
					default : 
					
					cout << "Input yang bener Goblok, pake angka"<< endl;
					sleep (5);
					cout << main() << endl;
					break;
					
					return 0;
						
						
								
			}
			
			
}
	

