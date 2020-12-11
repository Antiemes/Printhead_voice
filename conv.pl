#!/usr/bin/perl -w

open(IN, "tune.txt");
$t0=0;

print "#include <avr/pgmspace.h>\n";
print "\n";
print "typedef struct\n";
print "{\n";
print "  uint8_t dt;\n";
print "  uint8_t pitch;\n";
print "} event_t;\n";
print "\n";
print "const event_t PROGMEM notes[]=\n";
print "{\n";

$old_p=-1;

while ($row=<IN>)
{
	chomp($row);
	($t, $p)=split(" ", $row);
	$dt=$t-$t0;
	$t0=$t;

	if ($old_p>=0)
	{
		print("{".$dt.", ".$old_p."},\n");
	}
	$old_p=$p;
}

print("{".$dt.", ".$old_p."},\n");
$dt=0;
$old_p=0;
print("{".$dt.", ".$old_p."},\n");

print "};\n";
close(IN);
