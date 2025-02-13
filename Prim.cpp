# include "iostream"
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

using namespace std;

struct vertice {
       char nod;
       int marca;
       struct vertice *sig;
       struct arco *arc;
};

struct arco {
       struct vertice *ver;
       int marca;
       int suma;
       int clave;
       struct arco *sig;
};


struct vertice *pri, *nue, *aux, *ult, *aux2;
struct arco *nueArc, *auxArc, *arcMen, *auxArc2, *antArc;
char auxNod, auxNod2, ban2, let;
int ban, enlace, ban3, ban4, numVer;


void actualizarCampos ();
void crearVertice();
void enlazarVertices();
void enlazar();
void listarAdyacencia();
void obtenerArcoMenor();
void listarAdyacenciaPrim ();
void sumaCaminos();





void enlazarVertices () {
     system ("cls");
     if (pri != NULL){
        aux = pri;
        while (aux != NULL){
              cout << aux->nod << "\n";
              aux = aux->sig;
        }
        cout << "\nDigite la letra del nodo al cual desea enlazar: ";
        cin >> auxNod;        
        ban = 0;
        while (ban == 0){
              aux = pri;
              while (aux != NULL && ban == 0){
                   if (aux->nod == auxNod){
                      ban = 1;
                   }
                   aux = aux->sig;
              }
              if (ban == 0){
                 cout << "\nEl nodo no existe\nPor favor digite uno de los listados anteriormente: ";
                 cin >> auxNod;
              }
        }
        cout << "\nEstos son los nodos disponibles para hacer el respectivo enlace:\n";
        aux = pri;
        aux2 = pri;
        while (aux2->nod != auxNod){
              aux2 = aux2->sig;
        }
        while (aux != NULL){
              if (aux->nod != auxNod){
                  auxArc = aux2->arc;
                  ban4 = 0;
                  while (auxArc != NULL && ban4 == 0){
                        if (aux->nod == auxArc->ver->nod){
                           ban4 = 1;
                        }
                        auxArc = auxArc->sig;
                  }
                  if (ban4 == 0){
                     cout << aux->nod << "\n";
                  }
              }
              
              aux = aux->sig;
        }
        cout << "\nDigite la letra del nodo al cual desea enlazar el nodo elegido: ";
        cin >> auxNod2;
        ban = 0;
        while (ban == 0){
              aux = pri; 
              while (auxNod2 == auxNod){
                    cout << "\nNo se puede hacer ese enlace\nDigite otro nodo disponible: ";
                    cin >> auxNod2;
              }
              while (aux != NULL && ban == 0){
                   if (aux->nod == auxNod2){
                      ban = 1;
                   }
                   aux = aux->sig;
              }
              if (ban == 0){
                 cout << "\nEl nodo no existe\nPor favor digite uno de los listados anteriormente: ";
                 cin >> auxNod2;
              }
        }        
        aux = pri;
        while (aux->nod != auxNod){
              aux = aux->sig;
        }        
        auxArc = aux->arc;
        ban3 = 0;
        while (auxArc != NULL && ban3 == 0){
              if (auxArc->ver->nod == auxNod2){
                 ban3 = 1;
              }
              auxArc = auxArc->sig;
        }
        if (ban3 == 0){
           enlazar();
           cout << "\nEnlace creado correctamente.";
        }
        else {
             cout << "\nEse enlace ya existe. Compruebe el enlace la proxima vez.";
        }
     }
}



void enlazar (){
        aux = pri;
        while (aux->nod != auxNod){
              aux = aux->sig;
        }
        aux2 = pri;
        while (aux2->nod != auxNod2){
              aux2 = aux2->sig;
        }
        if (aux->arc == NULL){
           nueArc = new arco;
           nueArc->ver = aux2;
           cout << "\nDigite el valor del enlace: ";
           cin >> enlace;
           while (nueArc->clave < 0){
                 cout << "\nEl valor debe ser positivo\nDigite el valor del enlace: ";
                 cin >> enlace;
           }
           nueArc->clave = enlace;
           nueArc->marca = 0;
           nueArc->suma = 0;
           nueArc->sig = NULL;
           aux->arc = nueArc;
           if (aux2->arc == NULL){
               nueArc = new arco;
               nueArc->ver = aux;           
               nueArc->clave = enlace;
               nueArc->marca = 0;
               nueArc->suma = 0;
               nueArc->sig = NULL;
               aux2->arc = nueArc;
            }
            else {
               nueArc = new arco;
               nueArc->ver = aux;
               nueArc->clave = enlace;
               nueArc->marca = 0;
               nueArc->suma = 0;
               nueArc->sig = NULL;
               auxArc = aux2->arc;
               while (auxArc->sig != NULL){
                     auxArc = auxArc->sig;
               }
               auxArc->sig = nueArc;
            }
        }
        else {
           nueArc = new arco;
           nueArc->ver = aux2;
           cout << "\nDigite el valor del enlace: ";
           cin >> enlace;
           while (enlace < 0){
                 cout << "\nEl valor debe ser positivo\nDigite el valor del enlace: ";
                 cin >> enlace;
           }
           nueArc->clave = enlace;  
           nueArc->marca = 0;
           nueArc->suma = 0;         
           nueArc->sig = NULL;
           auxArc = aux->arc;
           while (auxArc->sig != NULL){
                 auxArc = auxArc->sig;
           }
           auxArc->sig = nueArc;
           if (aux2->arc == NULL){
               nueArc = new arco;
               nueArc->ver = aux;           
               nueArc->clave = enlace;
               nueArc->marca = 0;
               nueArc->suma = 0;
               nueArc->sig = NULL;
               aux2->arc = nueArc;
            }
            else {
               nueArc = new arco;
               nueArc->ver = aux;
               nueArc->clave = enlace;
               nueArc->marca = 0;
               nueArc->suma = 0;
               nueArc->sig = NULL;
               auxArc = aux2->arc;
               while (auxArc->sig != NULL){
                     auxArc = auxArc->sig;
               }
               auxArc->sig = nueArc;
            }
        }
}



void obtenerArcoMenor () {
     aux2 = pri;
     arcMen = NULL;
     while (aux2 != NULL){
           if (aux2->marca == 1){
                      auxArc = aux2->arc;
                      while (auxArc != NULL){
                            if (auxArc->marca == 1){
                                  if (arcMen == NULL){
                                         arcMen = auxArc;
                                  }
                                  else{
                                       if (auxArc->clave < arcMen->clave){
                                              arcMen = auxArc;
                                       }
                                  }
                            }
                            auxArc = auxArc->sig;
                      }
           }
           aux2 = aux2->sig;
     }
     arcMen->marca = 3;
     arcMen->ver->marca = 1;
}

void obtenerSumaMenor () {
     aux2 = pri;
     arcMen = NULL;
     while (aux2 != NULL){
           if (aux2->marca == 1){
                      auxArc = aux2->arc;
                      while (auxArc != NULL){
                            if (auxArc->marca == 1){
                                  if (arcMen == NULL){
                                         arcMen = auxArc;
                                  }
                                  else{
                                       if (auxArc->suma < arcMen->suma){
                                              arcMen = auxArc;
                                       }
                                  }
                            }
                            auxArc = auxArc->sig;
                      }
           }
           aux2 = aux2->sig;
     }
     arcMen->marca = 3;
     arcMen->ver->marca = 1;
     auxArc = arcMen->ver->arc;
     while (auxArc != NULL){
           auxArc->suma = arcMen->suma + auxArc->clave;
           auxArc = auxArc->sig;
     }
}



void paso2 (){
            obtenerArcoMenor();
            cout << "\nEl arco menor es: "<< arcMen->ver->nod << " vale: " << arcMen->clave;
            getch();
            aux = arcMen->ver;
            auxArc = aux->arc;
            while (auxArc != NULL){
                  if (auxArc->ver->marca == 0){
                         aux2 = pri;
                         while (aux2 != NULL){
                               if (aux2 != aux && aux2->marca == 1){
                                     auxArc2 = aux2->arc;
                                     while (auxArc2 != NULL){
                                           if (auxArc->ver->nod == auxArc2->ver->nod){
                                                  if (auxArc->clave < auxArc2->clave){
                                                         auxArc2->marca = 2;
                                                         auxArc->marca = 1;
                                                  }
                                                  else {
                                                       auxArc->marca = 2;
                                                       auxArc2->marca = 1;
                                                  }
                                           }
                                           auxArc2 = auxArc2->sig;
                                     }
                               }
                               aux2 = aux2->sig;
                         }
                         if (auxArc->marca == 0){
                                auxArc->marca = 1;
                         }
                  }
                  else {
                       auxArc->marca = 2;
                  }
                  auxArc = auxArc->sig;
            }
}


void paso2Dijkstra () {
            obtenerSumaMenor();
            cout << "\nLa sumatoria hasta el arco " << arcMen->ver->nod << " es: "<< arcMen->suma;
            getch();
            aux = arcMen->ver;
            auxArc = aux->arc;
            while (auxArc != NULL){
                  if (auxArc->ver->marca == 0){
                         aux2 = pri;
                         while (aux2 != NULL){
                               if (aux2 != aux && aux2->marca == 1){
                                     auxArc2 = aux2->arc;
                                     while (auxArc2 != NULL){
                                           if (auxArc->ver->nod == auxArc2->ver->nod){
                                                  if (auxArc->suma  < auxArc2->suma){
                                                         auxArc2->marca = 2;
                                                         auxArc->marca = 1;
                                                  }
                                                  else {
                                                       auxArc->marca = 2;
                                                       auxArc2->marca = 1;
                                                  }
                                           }
                                           auxArc2 = auxArc2->sig;
                                     }
                               }
                               aux2 = aux2->sig;
                         }
                         if (auxArc->marca == 0){
                                auxArc->marca = 1;
                                auxArc->suma = arcMen->suma + auxArc->clave;
                         }
                  }
                  else {
                       auxArc->marca = 2;
                  }
                  auxArc = auxArc->sig;
            }
}

void algoritmoPrim () {
     system("cls");
     if (pri != NULL){
            actualizarCampos();
            cout << "Digite el vertice inicial: ";
            cin >> auxNod;
            ban = 0;
            while (ban == 0){
                  aux = pri;
                  while (aux != NULL){
                        if (aux->nod == auxNod){
                               ban = 1;
                        }
                        aux = aux->sig;
                  }
                  if (ban == 0){
                         cout << "\nNo existe un nodo con esa letra.";
                         aux = pri;
                         cout << "\n---Lista de Nodos---\n";
                         while (aux != NULL){
                               cout << aux->nod << " ";
                               aux = aux->sig;
                         }
                         cout << "\nDigite uno de los anteriores nodos: ";
                         cin >> auxNod;
                  }
            }
            aux = pri;
            while (aux->nod != auxNod){
                  aux = aux->sig;
            }
            aux->marca = 1;
            auxArc = aux->arc;
            while (auxArc != NULL){
                  auxArc->marca = 1;
                  auxArc = auxArc->sig;
            }
            cout << "\nSe han marcado todos los arcos para el vertice elegido.";
            ban2 = 1;
            while (ban2 == 1){
                  paso2();
                  ban2 = 0;
                  aux = pri;
                  while (aux != NULL){
                        if (aux->marca == 0){
                               ban2 = 1;
                        }
                        aux = aux->sig;
                  }
            }
            listarAdyacenciaPrim ();
            sumaCaminos();
     }
     getch();
}



void listarAdyacencia () {
     system ("cls");
     if (pri != NULL){
        aux = pri;
        cout << "-Lista de Adyacencia-\n";
        while (aux != NULL){
              auxArc = aux->arc;
              cout << "\n|\n" << aux->nod << "->";
              while (auxArc != NULL){
                    cout << auxArc->ver->nod << " ";
                    auxArc = auxArc->sig;
              }
              aux = aux->sig;
        }
        getch();
     }
}



void sumaCaminos () {
     aux = pri;
     int suma = 0;
     while (aux != NULL){
           auxArc = aux->arc;
           while (auxArc != NULL){
                 if (auxArc->marca == 3){
                        suma = suma + auxArc->clave;
                 }
                 auxArc = auxArc->sig;
           }
           aux = aux->sig;
     }
     cout << "\nLa suma de los caminos es: " << suma;
}

void listarAdyacenciaPrim () {
     if (pri != NULL){
        aux = pri;
        cout << "\n-Lista de Adyacencia-\n";
        while (aux != NULL){
              auxArc = aux->arc;
              cout << "\n|\n" << aux->nod << "->";
              while (auxArc != NULL){
                    if (auxArc->marca == 3)
                    cout << auxArc->ver->nod << " ";
                    auxArc = auxArc->sig;
              }
              aux = aux->sig;
        }
     }
}


void liberarMemoria () {
     if (pri != NULL){
        aux = pri;
        while (aux != NULL){
              auxArc = aux->arc;
              while (auxArc != NULL){
                    aux->arc = aux->arc->sig;
                    delete auxArc;
                    auxArc = aux->arc;
              }
              pri = pri->sig;
              delete aux;
              aux = pri;
        }
     }
     cout << "Memoria Libre";
     getch();
}


void algoritmoDijkstra () {
     system("cls");
     if (pri != NULL){
            actualizarCampos ();
            cout << "Digite el vertice inicial: ";
            cin >> auxNod;
            ban = 0;
            while (ban == 0){
                  aux = pri;
                  while (aux != NULL){
                        if (aux->nod == auxNod){
                               ban = 1;
                        }
                        aux = aux->sig;
                  }
                  if (ban == 0){
                         cout << "\nNo existe un nodo con esa letra.";
                         aux = pri;
                         cout << "\n Lista de Nodos\n";
                         while (aux != NULL){
                               cout << aux->nod << " ";
                               aux = aux->sig;
                         }
                         cout << "\nDigite uno de los anteriores nodos: ";
                         cin >> auxNod;
                  }
            }
            aux = pri;
            while (aux->nod != auxNod){
                  aux = aux->sig;
            }
            aux->marca = 1;
            auxArc = aux->arc;
            while (auxArc != NULL){
                  auxArc->marca = 1;
                  auxArc->suma = auxArc->clave;
                  auxArc = auxArc->sig;
            }
            cout << "\nSe han trazado todos los arcos para el nodo elegido.";
            ban2 = 1;
            while (ban2 == 1){
                  paso2Dijkstra();
                  ban2 = 0;
                  aux = pri;
                  while (aux != NULL){
                        if (aux->marca == 0){
                               ban2 = 1;
                        }
                        aux = aux->sig;
                  }
            }
            listarAdyacenciaPrim ();
     }
     getch();
}




main (){
    int op = 0;
    do{
       system("cls");
       cout<<"\n";
       cout<<"\n1. Crear Vertices.";
       cout<<"\n2. Enlazar Vertices.";
       cout<<"\n3. Listar Vertices con su lista de adyacencia.";
       cout<<"\n4. Algoritmo de Prim.";
       cout<<"\n5. Algoritmo de Dijkstra.";
       cout<<"\n6. Liberar Memoria.";
       cout<<"\n7. Salir";
       cout<<"\n\nDigite la Opcion....:";
       cin>>op;
       while (op>7){
             cout << "Esa opcion no existe digite un numero del 1 al 7: ";
             cin >> op;
       }
       switch(op){
                  case 1: crearVertice(); break;
                  case 2: enlazarVertices(); getch(); break;
                  case 3: listarAdyacencia(); break;
                  case 4: algoritmoPrim(); break;
                  case 5: algoritmoDijkstra(); break;
                  case 6: liberarMemoria (); break;
                  case 7: exit (0);
       }
    }while(op<7);
}


void actualizarCampos () {
     aux = pri;
     while (aux != NULL){
           auxArc = aux->arc;
           while (auxArc != NULL){
                 auxArc->marca = 0;
                 auxArc->suma = 0;
                 auxArc = auxArc->sig;
           }
           aux->marca = 0;
           aux = aux->sig;
     }
}


void crearVertice () {
     system ("cls");
     if (pri == NULL){
        pri = new vertice;
        cout << "El Grafo no tiene vertices\nDigite la letra del Primer Nodo: ";
        cin >> pri->nod;
        pri->marca = 0;
        pri->arc = NULL;
        pri->sig = NULL;
        ult = pri;
        cout << "\nNodo registrado correctamente.";
     }
     else {
          cout << "Digite la letra del vertice: ";
          cin >> let;
          do {
              aux = pri;
              ban = 0;
              while (aux != NULL){
                    if (aux->nod == let){
                          ban = 1;
                    }
                    aux = aux->sig;
              }
              if (ban == 1) {
                     cout << "\nEsa letra clave ya fue usada, igual que las siguientes:\n";
                     aux = pri;
                     while (aux != NULL) {
                           cout << aux->nod << " ";
                           aux = aux->sig;
                     }
                     cout << "\nDigita una letra diferente: ";
                     cin >> let;
              }
          }while (ban == 1);
          nue = new vertice;
          nue->nod = let;
          nue->marca = 0;
          nue->sig = NULL;
          nue->arc = NULL;
          ult->sig = nue;
          ult = nue;
          cout << "\nNodo registrado correctamente.";
          
     }     
     
     getch();         
}

