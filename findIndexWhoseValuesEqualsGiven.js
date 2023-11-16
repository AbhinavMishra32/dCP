// we are given a number, we have to find 2 indexes from an array of integers whose 
// values equal to the given number.

let intArray = [1, 3, 5, 6, 7, 3, 4, 6];
let intArray2 = [3, 2, 4];
let intArray3 = [3, 3];


//should return [1, 4] because 3+7 = 10
console.log(findIndex(intArray2, 6));

function findIndex(arr, value){
    for(let i = 0 ; i<arr.length ; i++){
        let leftAmount = value-arr[i];
        //console.log(leftAmount);
        if(arr.indexOf(leftAmount) !== -1){
            //splicedArr = arr.splice(i, 1);
            let indexOfLeftAmount = arr.indexOf(leftAmount, i+1);
            if((leftAmount + arr[i]) === value){
                return [i, indexOfLeftAmount];
            }
        }
        else{
            continue;
        }
    }

}