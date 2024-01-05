
function dacota(x, a){
    let xl = x.split(" ");
    let al = a.split(" ");

    for(let i = 0; i < al.length; i++){
        if(al[i] == xl[1]){
            return "YES"
        }
    }
    return "NO";
}


const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});


rl.question('', (e) => {
    function hacerPregunta(x) {
        if (x < e) {
            rl.question('', (w) => {
                rl.question('', (a) => {
                    console.log(dacota(w, a));
                    hacerPregunta(x + 1);
                });
            })
        } else {
            rl.close();
        }
    }
    hacerPregunta(0);
});
