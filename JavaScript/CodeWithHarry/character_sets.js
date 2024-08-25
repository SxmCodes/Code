console.log("Welcome to regex character sets file.")

// Functions for character sets.
let regex = /S[a-z]one/ // This means that there would be anything between a to z.
regex = /S[ask]one/; // This means that there would be anything from a, s or k
regex = /S[^ask]two/; // This means that there would not be anything from a, s or k 

const str = "Anyone is amazing."
let result = regex.exec(str)
console.log("The result from exec is ", regex);

if (regex.test(str)) {
    console.log(`The string ${str} matches the expression ${regex.source}`) 
}
else {
    console.log(`The string ${str} does not matches the expression ${regex.source}`) 
}
