// Inicializamos constantes y hacemos la primera llamada a la funcion revursiva buscar()
function CreatingStrings(string) {
    const soluciones = [];
    const caso = [];
    const stringL = string.split("").sort();
    buscar(caso, soluciones, stringL);
    const setSoluciones = new Set([...soluciones])
    return setSoluciones;
}
function isCasoValido(caso, string) {
    // Verificar si es una solución válida
    return caso.length === string.length;
}

function getCandidatos(caso, string) {


    if (caso.length === 0) {
        return [...string]
    }

    const candidatos = [...string];
    for (let letra of caso) {
        candidatos.splice(candidatos.indexOf(letra), 1);
    }
    return candidatos;

}

function buscar(caso, soluciones, stringL) {

    if (isCasoValido(caso, stringL)) {
        let casoString = caso.join("")
        soluciones.push(casoString);
        return;
    }

    for (const candidato of getCandidatos(caso, stringL)) {
        caso.push(candidato);
        buscar(caso, soluciones, stringL);
        caso.pop(candidato); // Eliminamos el candidato después de explorar
    }
}

const readline = require('readline')

let n;
let q = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

q.question('', function (n) {

    salida = [...CreatingStrings(n)]
    console.log(salida.length);
    salida.forEach((element) => {
        console.log(element)
    })
    q.close();
})
