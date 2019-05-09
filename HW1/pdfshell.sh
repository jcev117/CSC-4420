#! /bin/bash
for p in *.PDF; do
	mv "$p" "${p%.PDF}.pdf"
echo "$p" renamed
done
for h in .*.PDF; do
        mv "$h" "${h%.PDF}.pdf"
echo $h renamed
done
