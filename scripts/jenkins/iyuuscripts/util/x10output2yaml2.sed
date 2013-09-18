# doublequote
s/\(^\|\n\)\([^:]*:\)\s*\([^\n]*\)\s*/\2 "\3"/

# remove unneeded spaces
s/\s*"$/"/

# reshape indent
s/^\s\s*\(.*\):/  \1:/
