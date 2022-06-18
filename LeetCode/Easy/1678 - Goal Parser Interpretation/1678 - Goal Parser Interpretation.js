/**
 * @param {string} command
 * @return {string}
 */
 var interpret = function(command) {
    const n = command.length;
    let ret = "";
    for (let i = 0; i < n; ++i) {
        if (command[i] == '(') continue;
        
        if (command[i] == ')') {
            if (command[i - 1] == '(') ret += 'o';
        }
        else {
            ret += command[i];
        }
    }
    return ret;
};