# Read from the file file.txt and output the tenth line to stdout.
#!/bin/bash
file=$"file.txt"
n=$(wc -l < "$file")
if [[ $n -ge 10 ]]
then
    head -n 10 file.txt | tail -n 1
else
    head -n 10 file.txt | tail -n +10
fi
