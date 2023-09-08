/**
 * Write a function createHelloWorld. It should return a new function that always returns "Hello World".
 * Input: args = []
 * Output: "Hello World"
 * Explanation:
 *   const f = createHelloWorld();
 *   f(); // "Hello World"
 * The function returned by createHelloWorld should always return "Hello World".
 */

var createHelloWorld = function() {
    return ()=> "Hello World";
};
