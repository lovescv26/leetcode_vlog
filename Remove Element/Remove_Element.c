//[ref](https://leetcode.com/problems/remove-element/?envType=study-plan-v2&envId=top-interview-150)

/*
 *
 Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.

 *
 * 
 *
 */
#include <stdio.h>
void removeElement(int* nums, int numsSize, int val){
	//printf("%d",numsSize);
	//this is test sentence ... just i too long time didnt do work
	int sub_nu=-1, send_a[10],err_nu=0;

	for(int a=0;a<numsSize;a++){
		if(val==nums[a]){
			err_nu++;
		}else{
			sub_nu++;
			send_a[sub_nu]=nums[a];
		}
	}
	send_a[sub_nu];
		printf(" \n\n OK! caculate --------\n\nthe array[]:\n ");
	for(int b=0;b<=sub_nu;b++){
		printf(" [ %d ] ",send_a[b]);
	}
}
int main(int argc,int *argv[]){
	int number=0;
	int remove_nu=0;
	printf(" U need to input the ");	
	scanf("%d",&number);
	int array[number];
	for(int a=0;a<number;a++){
		printf("input [%d] in array",a);
		scanf("%d",&array[a]);
	}
	printf("you want to remove the elements ");
	scanf("%d",&remove_nu);
	removeElement(array,number,remove_nu);
	return 0;
	
}
