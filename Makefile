
all:
	#cc -Wall sizes_max_values.c -o sizes_max_values
	cc -Wall ptrs_1.c -o ptrs_1
	cc -Wall ptrs_2.c -o ptrs_2
	cc -Wall ptrs_3.c -o ptrs_3
	cc -Wall ptrs_4.c -o ptrs_4
	cc -Wall ptrs_5.c -o ptrs_5
	cc -Wall ptrs_6.c -o ptrs_6
	cc -Wall ptrs_7.c -o ptrs_7
	cc -Wall ptrs_8.c -o ptrs_8


clean:
	rm -f ptrs_1 ptrs_2 ptrs_3 ptrs_4 ptrs_5 ptrs_6 ptrs_7 ptrs_8
	#rm -f sizes_max_values