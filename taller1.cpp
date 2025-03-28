#include <iostream>
using namespace std;

const int MAX = 100; 

int main() {
    string v[MAX]; 
    string c[MAX]; 
    int numVertices = 0;
    int numCaras = 0;
    
    while(true) {
        cout << "\n1 = Vertices\n2 = Caras\n3 = Imprimir\n4 = Salir\n";
        cout << "Elija una opcion: ";
        
        int opcion;
        cin >> opcion;
        
        if(opcion == 1) {
            cout << "Vertices\n";
            do {
                cout << "Ingrese minimo 3 vertices: ";
                cin >> numVertices;
                if(numVertices < 3) {
                    cout << "Debe ingresar minimo 3 vertices\n";
                }
            } while(numVertices < 3);
            
            for(int i = 0; i < numVertices; i++) {
                string x, y, z;
                cout << "Vertice " << i+1 << " -x ";
                cin >> x;
                cout << "Vertice " << i+1 << " -y ";
                cin >> y;
                cout << "Vertice " << i+1 << " -z ";
                cin >> z;
                v[i] = "v " + x + " " + y + " " + z;
            }
        }
        else if(opcion == 2) {
            if(numVertices == 0) {
                cout << "Primero se necesitan los vertices\n";
                continue;
            }
            
            cout << "\nCaras\n";
            numCaras = 1; 
            
            c[0] = "f";
            for(int i = 0; i < numVertices; i++) {
                c[0] += " " + to_string(i+1);
            }
        }
        else if(opcion == 3) {
            for(int i = 0; i < numVertices; i++) {
                cout << v[i] << endl;
            }
            for(int i = 0; i < numCaras; i++) {
                cout << c[i] << endl;
            }
        }
        else if(opcion == 4) {
            break;
        }
    }
