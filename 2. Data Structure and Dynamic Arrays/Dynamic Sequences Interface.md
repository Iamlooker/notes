
Dynamic sequences is:
[[Static Sequence Interface]] plus following operations:
- insert_at(i, x): make x the new xi while shifting other parts up, i.e. xi to xi+1 and so on
- delete_at(i): remove xi and moves element down
- insert/delete_first/last(x)/()
- get_first/last()
- set_first/last(x)