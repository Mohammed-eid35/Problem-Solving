/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    const map = {};
    for (let str of strs) {
        const word = str.split("").sort().join("");
        if (map.hasOwnProperty(word))
            map[word].push(str)
        else
            map[word] = [str];
    }
    return Object.values(map);
};
