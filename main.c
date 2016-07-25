# Copyright (c) 2016-.. #John
#
# Author: #John <pocolab.com@gmail.com>
# URL: http://www.pocolab.com
# Version: 1.0.0

# Commentary:

# Decode 7-bit encoded ascii text 

# License:

# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 3
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with GNU Emacs; see the file COPYING.  If not, write to the
# Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
# Boston, MA 02110-1301, USA.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int str_char_to_bin(char *bin);
int main(){
	int split=7;
	char *bin="101011110011110001110";
	int num;
	char *a=bin;
	char c=split*sizeof(char);
	char *buf=malloc(c);
	do{
		memcpy(buf,a,c);
		num=str_char_to_bin(buf);
		printf("%c", num);
	}while(*(a+=split));
	printf("\n");
	return(0);
}
int str_char_to_bin(char *bin){
	char *a=bin;
	int num=0;
	do{
		int b=*a=='1'?1:0;
		num=(num<<1)|b;
		a++;
	}while(*a);
	return num;
}
