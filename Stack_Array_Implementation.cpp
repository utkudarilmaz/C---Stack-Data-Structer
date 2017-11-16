// Written by Utku Darilmaz
// Contact adress: utkudarilmaz@gmail.com

#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX]; /* Sabit dizi ile oluşturulan stack yapımız */
int TOP=-1; /* Stack'in en üstteki elemanının index numarasını tutan eleman */

void push(int [],int);
void pop(int []);
bool empty();
void top(int []);

int main(){
    cout << "STACK ARRAY IMPLEMENTATİON\n";
    int menu,value;
    bool check;
    cout << "1: Push an object to the stack\n2: Pop an object from the stack\n";
    cout << "3: Check the stack is empty\n4: Get top object of the stack\n";
    while(1){
        cout << "Choose: ";
        cin >> menu;
        cout << '\n';
        switch (menu){ /* Program menusu */
            case 1:
                cout << "Enter the number to send to the stack: ";
                cin >> value;
                push(stack,value);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                check=empty();
                if(check) cout << "Stack is empty!\n\n";
                else cout << "Stack isn't empty!\n\n";
                break;
            case 4:
                top(stack);
                break;
            default :
                break;
        }
    }
    return 0;
}
/* Stack'e değer gönderme fonksiyonu */
void push(int arr[],int value){
    if(TOP==MAX-1){ /* Stack dolu mu? */
        cout << "Stack is full!\n\n";
        return;
    }
    TOP++;
    stack[TOP]=value;
    cout << '\n';
}
/* Stack'in en üstündeki elemanı silme fonksiyonu */
void pop(int arr[]){
    if(empty()){ /* Stack boş mu? */
        cout << "Stack is empty already!\nPop process isn't complete!\n\n";
        return;
    }
    stack[TOP]=NULL;
    TOP--;
}
/* Stack'in boş olup olmadığını kontrol eden fonksiyon */
bool empty(){
    if(TOP==-1) return true;
    else return false;
}
/* Stack'in son elemanını getiren fonksiyon */
void top(int arr[]){
    if(empty()){ /* Stack boşsa çıkışa gidilmesi için yazılan işleç */
        cout << "Stack is empty so top is not exist!\n";
        return;
    }
    cout << stack[TOP];
    cout << "\n\n";
}
