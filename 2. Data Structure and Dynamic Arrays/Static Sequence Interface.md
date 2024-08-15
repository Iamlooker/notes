Maintains a sequence of items 1,2,3,....n-1 subject to following operations:

- build(x): Builds DS for items in X
- len(): Returns n
- iter_seqn(): Outputs the sequence
- get_at(i): Returns element at i
- set_at(i, x): Sets element at i to x

## Solution(natural): Static Array

- O(1) per get, set, len
- O(n) per build/iterate

#### Memory Allocation Model
Allocate a array of siz n in O(n) time
Space is O(time)

#### word RAM model of computation
(w is machine word size, currently 64 or 256 for some structures)
- memory = array of w-bit words
- 'array' is a consecutive chunk of memory
- `array\[i] === memory\[address(array) + 1]`
- array access is O(1) time
- Assume: w>= log(n)