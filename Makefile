
all:
	#cc -Wall sizes_max_values.c -o sizes_max_values
	cc -Wall ptrs_01.c -o ptrs_01
	cc -Wall ptrs_02.c -o ptrs_02
	cc -Wall ptrs_03.c -o ptrs_03
	cc -Wall ptrs_04.c -o ptrs_04
	cc -Wall ptrs_05.c -o ptrs_05
	cc -Wall ptrs_06.c -o ptrs_06
	cc -Wall ptrs_07.c -o ptrs_07
	cc -Wall ptrs_08.c -o ptrs_08
	cc -Wall ptrs_09.c -o ptrs_09
	cc -Wall ptrs_10.c -o ptrs_10

.PHONY : clean
clean:
	rm -f ptrs_01 ptrs_02 ptrs_03 ptrs_04 ptrs_05 ptrs_06 ptrs_07 ptrs_08 ptrs_09 \
	sizes_max_values ptrs_10