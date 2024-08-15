
Operation takes T(n) amortized time if any n of those operations take =< n.T(n) time

(Averaging over operation sequence)

Dynamic array insertition at end is ϴ(n), i.e. linear timed in case of resizing but until the size is filled it is constant time, i.e. ϴ(1). So we can assume that the cost of resizing is averaged around into the insertition operations thus it can be called average time amortized, i.e. ϴ(1): amortized
