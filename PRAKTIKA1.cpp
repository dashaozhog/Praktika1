#define  _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include  <cstdlib>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;


/*task1
int main()
{
    int a,b;
    cout<<"enter a,b: "<<endl;
    cin>>a;
    cin>>b;
    cout<<"Plosha: "<<a*b<<endl<<"Perimetr: "<<2*(a+b);
}
*/

/*task2
int main() {
 const float USD = 41.82;
 const float EUR = 48.79;
 int uah;
 cout<<"enter hryvnas: "<<endl;
 cin>>uah;
 int currency;
 cout<<"convert to?(1-usd,2-eur)"<<endl;
 cin>>currency;
 switch(currency) {
 case 1:
  cout<<uah/USD;
  break;
 case 2:
  cout<<uah/EUR;
  break;
 default:
  cout<<"enter 1 or 2!!";
  break;

 }
}*/

/*task3
int main(){
    int weight;
    float height;
    cout<<"enter weight(kg): "<<endl;
    cin>>weight;
    cout<<"enter height(m): "<<endl;
    cin>>height;
    cout<<weight/(height*height);
}
*/

/*task4
int main(){
    float celsium;
    cout<<"Enter C temp: ";
    cin>>celsium;
    cout<<"F = "<<celsium*9/5 + 32;
}
*/

/*task5
int main() {
    int km, waste, price;
    cout << "enter distance(km): " << endl;
    cin >> km;
    cout << "enter average waste(l/100km)" << endl;
    cin >> waste;
    cout << "enter average patrol price(uah)" << endl;
    cin >> price;
    cout << "Average drive cost: UAH " << price * waste*0.01 * km;

}*/

/*Tema 2 task 1
int main() {
    int x;
    cout << "enter x: ";
    cin >> x;
    if (x == 0) {
        cout << "x = 0!";
        return 0;
    }
    if (x % 2 == 0) {
        cout << "chislo parne!"<<endl;
    }
    else {
        cout << "chislo neparne!" << endl;
    }
    if (abs(x) == x) {
        cout << "chislo dodatnie!" << endl;
    }
    else {
        cout << "chislo vid`yemne!" << endl;

    }

}*/

/*tema 2
int main() {
    int x1, x2, x3;
    int max=0;
    cout << "enter 3 numbers: " << endl;
    cin>> x1>> x2>> x3;
    int arr[3] = { x1,x2,x3 };
    for (int i = 0; i < 3; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout <<"MAX: "<< max;
}
*/
/*task3
int main() {
    int x1=1, x2=1;
    while(true){
    cout << "enter 2 nums(0 TO EXIT): ";
    cin >> x1 >> x2;
    if (x1 == 0) {
        return false;
    }
    int oper;
    cout << "enter operation(1 - add, 2 - minus, 3 - multiply, 4 - divide)" << endl;
    cin >> oper;
    switch (oper) {
    case 1:
        cout << x1 + x2 << endl;
        break;
    case 2:
        cout << x1 - x2 << endl;
        break;
    case 3:
        cout << x1 * x2<<endl;
        break;
    case 4:
        if(x2!=0){
        cout << x1 / x2 << endl;}
        else { cerr << "Zero division!" << endl; }
        break;
    default:
        cout << "NOT FOUND! ENTER 1,2,3 OR 4!" << endl;
    }
  }
}*/

/*task4
int main() {
    int r1 = 10;
    int r2 = 92;
    int x;
    cout << "enter x: ";
    cin >> x;
    if (x >= r1 and x <= r2) {
        cout << "x is in range from " << r1 << " to " << r2;
        return 0;
    }
    else {
        cout << "x is out of range!";
    }
}
*/
/*task5

int main() {
    int age;
    while(true){
    cout << "enter your age!" << endl;
    cin >> age;
    if (age < 0) {
        cout << "EXIT";
        return 0;
    }
    if (age <= 12) {
        cout << "you're a kid!" << endl;
    }
    else if (age <= 19) {
        cout << "you're a teenager!" << endl;
    }
    else {
        if (age <= 60) {
            cout << "you're an adult!" << endl;
        }
        else {
            cout << "you're retired!" << endl;
        }
    }
  }
}*/

/*Tema 3 task1
int main() {
    int x;
    cout << "enter your number";
    cin >> x;
    for (int i = 1; i <= 10; i++) {
        cout << x << " x " << i << " = " << x * i << endl;
    }
}*/

/*task 2
int main() {
    int x1;
    int x2;
    cout << "enter start and end of the range:" << endl;
    cin >> x1 >> x2;
    for (int i = x1+1; i <= x2;i++) {
        x1 += i;
        cout << "+" << i << endl;
    }
    cout << x1;
}
*/

/*task3
bool isDividable(int a) {
    int list[4] = { 2,3,5,7 };
    for (int i = 0; i < 4; i++) {
        if (a % list[i] == 0) {
            return true;
        }

    }
    return false;
}


int main() {
    int x;
    int list[4] = { 2,3,5,7 };
    while(true){
    cout << "enter number(to exit type 0)";
    cin >> x;
    if (x == 0) {
        cout << "EXIT";
        return 0;
    }
    int tempx = x;
    while (isDividable(tempx)) {
        for (int i = 0; i < 4; i++) {
            if (tempx % list[i] == 0) {
                cout << list[i] << "*";
                tempx /= list[i];
            }

        }
    }
    cout << tempx<<endl;
    }
}
*/

/*task4
int main() {
    int height;
    cout << "enter height: ";
    cin >> height;
    for (int i = 1; i <= height; ++i) {
        for (int k = 0; k < (i * 2 - 1); ++k) {
            cout << "*";
        }
        cout << endl;
    }

}*/

/*task5
int main() {
    int n = 0;
    cout << "enter n";
    cin >> n;
    int fac = 1;
    for (int i = n; i > 0; i--) {
        cout << i << "*";
        fac *= i;
    }
    cout << " = " << fac;
}*/


/*tema4 task1

int main() {
    srand(time(0));
    int min_index = 0;
    int max_index = 0;
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 200 - 100;

        cout << arr[i] << endl;
        if (i > 0) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
            else if (arr[i] > arr[max_index]) {
                max_index = i;
            }
        }
    }
    cout << "Max: " << arr[max_index] << endl << "Min: " << arr[min_index];
}*/

/*task2
int main() {
    const int n = 17;
    int arr[n];
    srand(time(0));
    int sum = 0;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 200 - 100;
        cout << arr[i] << endl;
        sum += arr[i];
    }
    cout << "suma: " << sum << endl << "average: " << sum / n;
} */

/*task3
int main() {
    int pos = 0;
    int neg = 0;
    int zero = 0;
    const int n = 23;
    int arr[n];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 200 - 100;
        cout << arr[i] << endl;
        if (arr[i] < 0) {
            neg += 1;
        }
        else if (arr[i] == 0) {
            zero += 1;
        }
        else {
            pos += 1;
        }
    }
    cout << "positives: " << pos << endl << "negatives: " << neg << endl << "zero: " << zero;
}
*/

/*task4 
int main() {
    int arr[3][3] = { {1,6,2},
                      {9,5,2},
                      {4,11,6} };
    int newArr[3][3];
    int temp;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            newArr[i][j] = arr[j][i];
            cout << newArr[i][j] << "  ";
        }
        cout << endl;
    }
}*/

/*task5

int main() {
    const int n = 4;
    int matrix[n][n] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][i];
        cout << matrix[i][i]<<endl;
    }
    cout << "sum: " << sum << endl;
    return 0;
}*/

/* Tema 5 task1 
bool isPrime(int number) {
    int list[4] = { 2,3,5,7 };
    for (int i = 0; i < 4; i++) {
        if (number % list[i] == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    while (true)
    {
        int num;
        cout << "enter ";
        cin >> num;
        if (num == 0) {
            cout << "EXIT";
            return 0;
        }
        bool f = isPrime(num);
        if (f) { cout << "true"<<endl; }
        else { cout << "false" << endl; }
    }
}*/


/*TASK2
int add(int x1, int x2) {
    return x1 + x2;
}
int substract(int x1, int x2) {
    return x1 - x2;
}
int multiply(int x1, int x2) {
    return x1 * x2;
}
int divide(int x1, int x2) {
    if (x2 != 0) {
        return x1 / x2;
    }
    else { cerr << "Zero division!"; }
}

int main() {
    int x1, x2;
    while(true)
    {
        cout << "enter 2 nums: ";
        cin >> x1 >> x2;
        if (x1 == 0) {
            cout << "EXIT";
            return 0;
        }
        int oper;
        cout << "enter operation(1 - add, 2 - minus, 3 - multiply, 4 - divide)" << endl;
        cin >> oper;
        switch (oper) {
        case 1:
            cout << add(x1, x2)<<endl;
            break;
        case 2:
            cout << substract(x1, x2) << endl;
            break;
        case 3:
            cout << multiply(x1, x2) << endl;
            break;
        case 4:
            cout << divide(x1, x2) << endl;
            break;
        default:
            cout << "NOT FOUND! ENTER 1,2,3 OR 4!" << endl;
        }
    }
}*/

/*task3
int max(int arr[],int size) {
    int max_ind = 0;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
        if (i > 0) {
            if (arr[max_ind] < arr[i]) {

                max_ind = i;
            }
        }
    }
    return arr[max_ind];
}


int main() {
    int arr[11] = { 1,2,6,4,88,453,1,88,56,22,88 };
    cout <<"Max element: "<< max(arr, 11);
    return 0;
}
*/

/*task4
void printRectangle(int width, int height, char symbol) {
    for (int h = 0; h < height; h++) {
        if (h==0 or h==height-1){
            for (int w = 0; w < width; w++) {
                    cout <<symbol<< " ";
            }
        }
        else {
            for (int w = 0; w < width; w++) {
                if (w == 0) {
                    cout<<symbol;
                }
                else if (w == width-1) {
                    cout << " "<<symbol;
                }
                else {
                    cout << "  ";
                }
            }
        }
    cout << endl;
    }
}

int main() {
    printRectangle(5, 9, 'H');
}*/

/*task5
int pOw(int base, int exp) {
if (exp==0){
return 1;}
else{return base*pOw(base, exp-1);}
}

int main() {
    cout << pOw(8, 2);
}
*/

/*Tema 6 task 1


Запис у файл: Написати програму, яка запитує у користувача його ім'я, прізвище та вік, після чого зберігає ці дані у файл user_data.txt.
    Читання з файлу: Створити файл numbers.txt, що містить кілька цілих чисел (кожне з нового рядка). Написати програму, яка читає ці числа та знаходить їх суму.
    Копіювання файлу: Розробити програму, яка створює копію існуючого текстового файлу (наприклад, копіює input.txt у copy.txt).
    Додавання до файлу: Створити програму "Журнал подій", яка дозволяє користувачеві вводити текстові повідомлення, що додаються в кінець файлу log.txt з поточною датою та часом.
    Підрахунок слів у файлі: Написати програму, яка відкриває текстовий файл та підраховує загальну кількість слів у ньому.


int main() {
    ofstream fout("user_data.txt");

    if (!fout.is_open()) {
        cout << "error opening file!!";
        return 1;
    }
    string name;
    string lastname;
    int age;
    cout << "enter your name: ";
    cin >> name;
    cout << "enter your lastname: ";
    cin >> lastname;
    cout << "enter your age: ";
    cin >> age;
    fout << name << endl << lastname<<endl << age << endl;
    fout.close();
    cout << "success. data is written.";
    return 0;
}*/


/*task2

int main(){
    ifstream fin("numbers.txt");
    if (!fin.is_open()){
    return 1;
    }
    int sum = 0;
    string temp;
    while(getline(fin, temp)){
    sum+=stoi(temp);
    cout<<temp<<endl;
    }
    cout<<"Sum: "<<sum;

}*/


/*task3
int main(){
ifstream fin("numbers.txt");
ofstream fout("copy.txt", ios_base::app);
if (!fin.is_open() or !fout.is_open()){
    return 1;
    }
string temp;
while(getline(fin, temp))
{
fout<<temp<<endl;}
fout.close();
}*/

/*task4
int main(){
    time_t timestamp;
    time(&timestamp);
    ofstream fout("logs.txt", ios_base::app);
    if(!fout.is_open()){
    return 1;}
    string temp;
    cout<<"enter whatever you want to save:"<<endl;
    getline(cin, temp);
    fout<<temp<<"   "<<ctime(&timestamp);
    fout.close();

}
*/
/*task5*/
int main(){
    ifstream fin("words.txt");
    if(!fin.is_open()){
    return 1;}
    string word;
    int wordCount = 0;
    while (fin >> word) {
        ++wordCount;
    }
    cout << "Amount of words: " << wordCount;
}


/*INDIVIDUAL
Проста вікторина: Програма для тестування знань.
Функціонал: Завантажує з файлу питання та правильні відповіді.
Вимога: В кінці показує відсоток правильних відповідей.*/
