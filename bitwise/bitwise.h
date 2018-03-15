#pragma once
#include <stdlib.h>
#include <stdio.h>

int get_bit(int num, int bit_index)
{
	return (num & (1 << bit_index)) != 0;
}

int clear_bit(int num, int bit_index)
{
	int mask = ~(1 << bit_index);
	return num & mask;
}

int set_bit(int num, int bit_index)
{
	return num | (1 << bit_index);
}

int clear_bits_right(int num, int bit_index)
{
	int mask = (-1 >> (bit_index + 1));
	return num & mask;
}

int clear_bits_left(int num, int bit_index)
{
	int mask = (1 << (bit_index + 1)) - 1;
	return num & mask;
}

int update_bit(int num, int bit_index, int val)
{
	int mask = ~(1 << bit_index);
	return (num & mask) | (val << bit_index);
}