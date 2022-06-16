/**
 * @param {number} n
 * @param {number[][]} edges
 * @return {number[]}
 */
 var findSmallestSetOfVertices = function(n, edges) {
    const fr = Array(n);

    for (const [u, v] of edges) fr[v] = true;

    const ret = [];
    for (let i = 0; i < n; ++i) {
        if (!fr[i]) ret.push(i);
    }

    return ret;
};