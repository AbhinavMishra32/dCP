console.log("Hello");
setTimeout(() => {
    var myDiv = document.getElementById('mydiv');
    if (myDiv) {
        myDiv.style.backgroundColor = "red";
    }
    console.log("World");
}, 5000);

const a = 43;
type s = {
    name: String,
    age: Number
}
const b = {
    name: "John",
    age: 25
}
console.log(a);
console.log(typeof a);
console.log(typeof b);
console.log(b.name);