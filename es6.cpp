include <iostream>
using namespace std;


void input_valori(int n1[20]){
    int valore;
    for(int i = 0; i<20; i++){
        cout << "Inserisci valore : ";
        cin >> valore;
        n1[i] = valore;
    }
    
}
void view_vet(int n1[20]){
    cout << "Il vettore contiene: "<< endl;
    for(int i = 0; i<20; i++){
        cout << n1[i] << endl;
    }
}
void numeri_pari(int n1[20]){
    cout << "I numeri pari sono: "<< endl;
    for(int i = 0 ; i <20; i++){
        if(n1[i]%2 == 0) cout << n1[i] << endl;
    }
}
void indici_pari(int n1[20]){
    cout << " I numeri che occupano posizioni pari sono : "<< endl;
    for(int i = 0 ; i <20; i++){
        if(i%2 == 0) cout << n1[i] << endl;
    }
}
void som_sot(int n1[20]){
    for(int i = 0 ; i <20; i++){
        if(n1[i] > 0) n1[i] ++;
        else if(n1[i] < 0) n1[i] --;
    }

}
void index(int n1[20]){
    int indice;
    cout << "Inserisci indice: ";
    cin >> indice;
    if( indice >= 0 && indice < 20) cout << "Il contenuto è " << n1[indice] << endl;
    else cout << "Non esiste"<< endl;
}
void calc_media( int n1[20], int &media){
    for(int i = 0 ; i <20; i++){
        media += n1[i];
    }
    media = media/ 20;
}
void count_val_media(int n1[20], int &media){
    int contatore = 0;
    for(int i = 0 ; i <20; i++){
        if(n1[i] > media) contatore ++;
    }
    cout << "I numeri maggiori alla media sono in tutto : " << contatore<<endl;
}
void view_val_media(int n1[20], int &media){
    cout << " I valori maggiori della media sono : "<< endl;
    for(int i = 0 ; i <20; i++){
        if(n1[i] > media) cout << n1[i] << endl;
    }
}
void max_val(int n1[0], int &max){
    for(int i = 0; i< 20; i++){
        if(n1[i] > max) max = n1[i];
    }
}
void view_ind_max(int n1[20], int &max){
    cout << " Le posizioni occupate dal maggiore sono : "<< endl;
    for(int i = 0; i< 20; i++){
        if(n1[i] == max) cout << i << endl;
    }
}
int main(){
    int vettore[20], media = 0, max =0,  val;
    
    input_valori(vettore);
    
    numeri_pari(vettore);
    
    indici_pari(vettore);
    
    som_sot(vettore);
    
    view_vet(vettore);
    
    index(vettore);
    
    calc_media(vettore, media);
    
    count_val_media(vettore, media);
    
    view_val_media(vettore, media);
    
    val = vettore[0];
    
    vettore[0] = vettore[19];
    
    vettore[19] = val;
    
    max_val(vettore, max);
    
    cout << "Il valore maggiore è " << max << endl;
    
    view_ind_max(vettore, max);

    return 0;
}
