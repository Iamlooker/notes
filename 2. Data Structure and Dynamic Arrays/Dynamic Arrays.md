
![[Pasted image 20240815170648.png]]
# Python List are dynamic arrays

- Relax the constrainst size (array) = n, i.e if we want a array to store n items it can we around n+4.
- enforce size = ϴ(n) and >= n
- If we want to resize the array, we generally reallocate a array of size 2*n
- We store the array, length and size (actual allocatable size)

If n = size:
we allocate new array of size 2*n

So resize cost = ϴ(1 + 2 + 4 + 8+ 16+... + n) = ϴ(sumOf(2^1)) = ϴ 2^(k + 1) -1

approx. = ϴ(2 ^(log n)) = ϴ(n)

Resizing takes ϴ(n) = ϴ(1) amortized
 
 
