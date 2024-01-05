function generateGrayCode(n) {

    if (n === 1) {
        return ['0', '1'];
    }

    const prevGrayCode = generateGrayCode(n - 1);

    const grayCode = [];

    for (let i = 0; i < prevGrayCode.length; i++) {
        grayCode[i] = '0' + prevGrayCode[i];
    }

    for (let i = prevGrayCode.length - 1; i >= 0; i--) {
        grayCode.push('1' + prevGrayCode[i]);
    }

    return grayCode;
}


const readline = require('readline')


let q = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})


q.question('', function (a) {

    let n = parseInt(a);
    generateGrayCode(n).forEach(element => {
        console.log(element);
    });
    q.close();
});

