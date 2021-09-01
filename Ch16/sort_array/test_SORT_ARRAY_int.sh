#!/bin/sh
#filename: test_SORT_ARRAY_int.sh
#author:   Aleksandr Kravtsov

while read ascending numbers result ; do
    res=`./print_sorted_int_array $ascending $numbers`
    if [ "$result" != "$res" ] ; then
        echo TEST $ascending $numbers FAILED:
        echo "expected  $result"
        echo "got       $res"
    fi
done << END
1  3\ 5\ 1\ 0\ 8\ 4\ 6\ 7\ 9\ 2  0\ 1\ 2\ 3\ 4\ 5\ 6\ 7\ 8\ 9
0  3\ 5\ 1\ 0\ 8\ 4\ 6\ 7\ 9\ 2  9\ 8\ 7\ 6\ 5\ 4\ 3\ 2\ 1\ 0
END
