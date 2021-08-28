#!/bin/sh
#filename: test_Ch16Ex2.sh
#author:   Aleksandr Kravtsov

while read num_1 num_2 res_val ; do
    res=`./Ch16Ex2 $num_1 $num_2`
    if [ "$res_val" != "$res" ] ; then
        echo TEST $num_1 $num_2 FAILED:
        echo "expected  $res_val,"
        echo "got       $res"
    fi
done << END
1     2     1.333333333333
0     0     0.000000000000
5     99    9.519230769231
50    999   95.233555767398
1     ''    Error: incorrect arguments
""    1     Error: incorrect arguments
1     2e308 Error: incorrect arguments
2e308 1     Error: incorrect arguments
2e308 2e308 Error: incorrect arguments
END
