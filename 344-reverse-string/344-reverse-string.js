/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function(s) {
   let j= 2;
    
    for(let i = 0; i < s.length; i++){
        s.push(s[s.length - 1 - i]);
        s.splice(s.length - j, 1);
        j++;
    }
    
    return s;
};