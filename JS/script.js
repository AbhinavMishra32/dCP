console.log("Hello");
setTimeout(function () {
    var myDiv = document.getElementById('mydiv');
    if (myDiv) {
        myDiv.style.backgroundColor = "red";
    }
    console.log("World");
}, 5000);
a = 43;
type = {
    name: String,
    age: Number
};
b = {
    name: "John",
    age: 25
};
console.log(a);
console.log(typeof a);
console.log(typeof b);
