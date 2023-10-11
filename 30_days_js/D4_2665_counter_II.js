/**
 * Write a function createCounter. It should accept an initial integer init. It should return an object with three functions.
 * 
 * The three functions are:
 * increment() increases the current value by 1 and then returns it.
 * decrement() reduces the current value by 1 and then returns it.
 * reset() sets the current value to init and then returns it.
 * 
 * Input: init = 5, calls = ["increment","reset","decrement"]
 * Output: [6,5,4]
 * Explanation:
 * const counter = createCounter(5);
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */


var createCounter = function(init) {
    let original = init
    return{
        increment: () => ++init,
        decrement: () => --init,
        reset: () => init=original, init
    };
};

const xd = createCounter(5);
console.log(xd.increment());
console.log(xd.increment());
console.log(xd.reset());
console.log(xd.decrement());







