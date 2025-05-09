// const arr = [1, 2, 3, 4, 5]

// const newArr = arr.map((num) => {
//     return num + 1;
// })

// console.log(newArr);

// const newArr1 = arr.filter((num) => {
//     return num % 2 == 0;
// })

// console.log(newArr1);

// const newArr2 = arr.reduce((acc, num) => {
//     return acc + num;
// })

// console.log(newArr2);

function test() {
    return new Promise((resolve) => {
        setTimeout(() => {
            resolve("Hello");
        }, 5000);
    });
}

// test().then((result) => {
//     console.log(result);
// })

async function funcCall() {
    const result = await test();
    console.log(result);
    console.log("This is synchronous");
}

funcCall();
