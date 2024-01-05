// caso 0 - son iguales y son multiplos de 3 
// organizarlo mayor, menor
// caso 1 - mayor es par se cumple si,  mayor/2 = menor o (meyor/2) + 3  > mayor
// caso 2 - mayor siendo impar y Math.ceil(mayor/2) + 1 = menor
const readline = require('readline');

let q = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

function obtenerDatos(iteraciones) {
  if (iteraciones === 0) {
    q.close();
    return;
  }

  q.question('', function (n1) {
    q.question('', function (n2) {
      // Realizar tus cálculos y lógica aquí...
      let mayor;
      let menor;
      (n1 > n2) ? mayor = n1 : mayor = n2;
      (n1 < n2) ? menor = n1 : menor = n2;

      if ((mayor/2) <= (menor)  && (menor + mayor) % 3 === 0) {
        console.log("YES");
      } else {
        console.log("NO");
      }

      // Continuar con la siguiente iteración
      obtenerDatos(iteraciones - 1);
    });
  });
}


q.question('', (r) => {
  obtenerDatos(r);
})

