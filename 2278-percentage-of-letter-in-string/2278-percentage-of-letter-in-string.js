/**
 * @param {string} s
 * @param {character} letter
 * @return {number}
 */
var percentageLetter = function(s, letter) {
       let count=0;
    for(let i=0;i<s.length;i++)
        {
            if(letter===s[i])
                {
                    count++;
                }
        }
     let p=count*100;
    return Math.floor(p/s.length);
};