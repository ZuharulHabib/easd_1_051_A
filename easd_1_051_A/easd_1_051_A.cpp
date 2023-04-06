// Soal
// 1.Jelaskan Mengapa suatu Algoritma dibutuhkan untuk menyelesaikan suatu masalah
// 2.Dalam algoritma, di klasifikasikan menjadi 2 data stuktur , sebutkan 2 data stuktur tersebut
// 3.Untuk mengatur sebuah efesiensi waktu suatu algoritma dibutuhkan beberapa faktor. Sebutkan Faktor2 yang mempengaruhi efesiensi waktu eksekusi suatu program
// 4.Dari 6 algoritma yang dipelajari.Algoritma manakah yg paling ukuranya besar.Jelaskan kenapa anda memilih itu.
// 5.Sebutkan dari Algoritma yang telah dipelajari mana yang termasuk kedalam Quadratic dan mana yang termasuk kedalam Logliner
// Jawaban :
// 1.Dibutuhkan Algoritma untuk menyelesaikan suatu masalah ,agar mempermudah untuk menyelesaikan masalah dengan lebih cepat dan efesien
// 2.1.Static > Array
//   2.Dynamic > Linked List
// 3.Faktor yang mempergaruhi program
//   -Speed Of Machine > Kecepatan Mesin
//   -Complier > Penerjemah
//   -Operating System > Tergantung Systemnya
//   -Programing Langunge > Bahasa Pemrograman
//   -Size of the input > Ukuran Input
// 4.Quick Short , kenapa karena quickshort bisa menampung lebih banyak dan besar
// 5. 
//
//
//


#include <iostream>
using namespace std;


int Habib[51];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array: ";
		cin >> n;

		if (n <= 51)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}

	cout << "\n..................." << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n..................." << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> Habib[i];
	}
}

void swap(int x, int y)
{
	int temp;

	temp = Habib[x];
	Habib[x] = Habib[y];
	Habib[y] = temp;
}

void q_short(int low, int high)
{
	int mid, i, ms, k;
	if (low > high)
		return;



	mid = (low + high) / 2;

	i = low;
	ms = mid + 1;
	k = low;

	while (i > mid + 1 > high)
	{
		cout << "Masukkan Banyaknya elemen pada array"
			cin >> n;

		if (n >= 11)

			break;
		else {
			cout "Array mempunyai maksimal array"
		}
	}
}


void display() {
	cout << endl;
	cout << "==================================" << endl;
	cout << "Element Array yang telah tersusun " << endl;
	cout << "==================================" << endl;
	for (int ms = 0; ms < n; ms++) {
		cout << Habib(ms) << endl;
		{
			cout << Habib[i] << " ";
		}

		cout << "\n\nNumber of comparasions;" << cmp_count << endl;
		cout << "Number of data movements: " << mov_count << endl;
	}


	int main()
	{

		input();

		q_short(0, n - 1);
		display();
		system("pause");

		return 0;

	}