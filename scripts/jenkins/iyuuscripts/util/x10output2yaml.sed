# replace '/' to '.'
#/^\//s/\//./g

# format YAML
/^\//s/^\/\([^:]*\):\([^:]*\):\(.*\)/- File: \1\n  Line: \2\n  Message: \3/

# remove trailing .x10
#s/^\([- ] File: .*\)\.x10\n/\1\n/

# escape backslash
s/\\/\\\\/g

# escape doublequote
s/"/\\"/g
