#!/bin/sh
cat /etc/passwd | grep -v "^#" | tail -n +2 | sed 'n;d' | rev  | cut -d: -f7 | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | paste -sd "," - | sed 's/,/, /g' | sed 's/$/./g'
