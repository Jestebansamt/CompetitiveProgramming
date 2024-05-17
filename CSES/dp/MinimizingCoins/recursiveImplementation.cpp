// made by Esteban Santacruz (https://github.com/Jestebansamt)
#include <bits/stdc++.h>

using namespace std;

int N = 1e6 + 10, n = 0 , sum = 0; 
vector<int> memo(N, -1), coins(N); 

int count(int amount){
    // Si la suma deseada es cero, no se necesitan monedas.
    if(amount == 0) return 0;

    // Si la suma deseada es negativa, no es posible obtenerla con las denominaciones de monedas disponibles.
    // Retornamos un valor grande para indicar esto, nunca se escogerá este valor si existe al menos una posibilidad.
    if(amount < 0) return 1e9;

    // Buscara sí ya se calculo amount en la recursividad 
    if(memo[amount] != -1) return memo[amount];

    // Se inicializa el valor para cada valor de amount que reciba la funcion.
    // Respecto al memo[amount] de la llamada recursiva calcularemos el memo[amount] actual. 
    memo[amount] = 1e9;
    for(int i = 0 ; i <n; ++i){
        // Por cada llamada recursiva se suma una moneda, el resultado será el minimo de todas las llamadas recursivas
        memo[amount]= min(memo[amount],count(amount-coins[i]) + 1);  
    }
    
    // Despues de que se hayan realizado las llamadas recursivas se almacenaran los valores minimos para cada amount
    return memo[amount];
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif
 
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> sum;
    for(int i = 0 ; i <n; ++i){
        cin >> coins[i];
    }
    int ans = count(sum);
    cout << (ans == 1e9 ? -1 : ans);
 
    return 0;

}
