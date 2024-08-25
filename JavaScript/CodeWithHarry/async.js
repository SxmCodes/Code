// JavaScript has a blocking nature. It runs on asyncronous arctiture.
// We can use callbacks and promises.
// Ye wali line ko dekhege "Saksham is a great person."
// First ye wali line run karo "Anuj is a good boy."

console.log('Anyone is a good boy.');

setTimeout(() => {
    console.log('Anyone is inside settimeout.');
}, 2000);

console.log('Saksham is a bad boy.');
// Javascript is always in hurry, it will run that line which is faster to run.
