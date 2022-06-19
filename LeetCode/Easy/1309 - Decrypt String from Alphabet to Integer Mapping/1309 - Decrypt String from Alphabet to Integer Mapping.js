/**
 * @param {string} s
 * @return {string}
 */
 var freqAlphabets = function(s) {
    return (
        s
        .match(/\d{2}(?=#)|\d/g)
        .map(num => String.fromCharCode(96 + +num))
        .join('')
    );
};