let database = ['hello how are you', 'helloooo how are you', 'hell how are you'];
// brute force algorithm

function searchStrings(arrayOfStrings, searchTerm = ''){
    //iterating through database array and converting each string to non-spaced
    for(let i = 0; i<arrayOfStrings.length; i++){
        sentence = arrayOfStrings[i];
        sentence = sentence.replace(/\s/g, '');
        // foundStatus = false
        // while(foundStatus){

        for(let j = 0 ; j<sentence.length; j++){
            sentenceBlock = sentence.slice(j, j+searchTerm.length);
            //console.log(sentenceBlock);
            if(sentenceBlock === searchTerm){
                console.log("MATCHED!");
                console.log(arrayOfStrings[i]);
                //for stopping the loop
                j = sentence.length;
            }
            else{
                //console.log("NOT MATCHED");
                j = j+searchTerm.length;
            }

            }
        }
        }
    //}


searchStrings(database, 'hel');



