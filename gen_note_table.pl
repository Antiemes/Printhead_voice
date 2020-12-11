#!/usr/bin/perl -w

for($i=0; $i<70; $i++)
{
	$a=301*(2**($i/12));
	printf(int($a+0.5).", ");
}
