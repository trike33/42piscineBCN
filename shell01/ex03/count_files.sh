files=$(find . -type f|wc -l) && dirs=$(find . -type d|wc -l) && total=$((files + dirs)) && echo "$total"
