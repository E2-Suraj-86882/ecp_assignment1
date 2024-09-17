//Assingment10.Q1] Write a function to count number of ‘1’ bits into a given number.

unsigned int countSetBits(unsigned int n)
{
	unsigned int count = 0;
	while (n) {
		count += n & 1;
		n >>= 1;
	}
	return count;
}

int main()
{
	int num = 9;
	countSetBits(num);
	printf("%d",num);
	return 0;
}
