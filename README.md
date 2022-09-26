# push_swap
Status: Completed </br>
Score: 100/100 </br>
Retries: 0

The goal of the project is to improve the skills of making algorithms. </br>

Through arguments we get a set of numbers of type integer and they need to be sorted using two stacks and do it in a certain number of steps using certain instructions:</br>
sa (swap a): Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.</br>
sb (swap b): Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.</br>
ss : sa and sb at the same time.</br>

pa (push a): Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.</br>
pb (push b): Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.</br>

ra (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.</br>
rb (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.</br>
rr : ra and rb at the same time.

rra (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.</br>
rrb (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.</br>
rrr : rra and rrb at the same time.</br>
