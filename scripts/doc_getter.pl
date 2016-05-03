use strict;
use warnings;
use POSIX;

my $cat = 0;
my $id = 0;
my $n = 0;
my $file = "";
open(my $in, "<", "numbers") or die "Can't open doc list";

while(my $num = <$in>) {
  $cat = floor($num/100);
  $id = $num%100;
  $n = floor($cat*100+$id);
  $file = "../docs/".$n.".pdf";
  system("wget https://uva.onlinejudge.org/external/".$cat."/".$n.".pdf -O ../docs/".$n.".pdf") unless -f $file;
}
