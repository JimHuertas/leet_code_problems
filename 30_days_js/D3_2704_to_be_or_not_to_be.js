/**
 * Write a function expect that helps developers test their code. 
 * It should take in any value val and return an object with the following two functions.
 *  toBe(val) accepts another value and returns true if the two values === each other. If they are not equal, it should throw an error "Not Equal".
 *  notToBe(val) accepts another value and returns true if the two values !== each other. If they are equal, it should throw an error "Equal".
 * 
 * 
 * Input: func = () => expect(5).toBe(5)
 * Output: {"value": true}
 * Explanation: 5 === 5 so this expression returns true.
 */

var expect = function(val) {
    return {
        toBe: (val2) => {
            if (val2!==val) throw new Error("Not Equal");
            else return true;
        },
        notToBe: (val2) => {
            if (val2===val) throw new Error("Equal");
            else return true;
        },
    }
};

