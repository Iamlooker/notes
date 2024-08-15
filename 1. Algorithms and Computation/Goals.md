- Solve Computational Problem
- Prove correctness
- Argue efficiency

### Correctness
*Induction Hypothesis*: if first k students contains match algorithm returns match before interview interviewing k +1 students

*Base Case*: k=0

*Assume*: Inductive Hypothesis true for k = k'{ if k' contains match,already returned by Inductions  else if k'+1 contains match algorithm checks all students }

### Efficiency
(Asymptotic Analysis) Don't measure time, instead counts __fundamental operations__.
expect performance to depend on size of our input

- O(.): upper bounds
- Ω: lower bounds
- Θ: both

__Higher is better__: (c is constant)
 - ϴ(c)
 - ϴ(logn)
 - ϴ(n)
 - ϴ(n log n)
 - ϴ(n^c)
 - c^(ϴ(n))