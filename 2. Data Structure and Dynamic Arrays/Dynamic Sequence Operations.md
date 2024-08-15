![[Pasted image 20240815170702.png]]
##### Static Array
- insert/delete anywhere costs O(n) time because need shifting if we perform near start and also need reallocation/copying
##### Linked List

Insert and delete at front is really efficient
- insert/delete_first is O(1) time
- get/set_at() need O(i) time <= O(n)
- get/set/insert/delete_last can be improved by adding a tail to the linked list data