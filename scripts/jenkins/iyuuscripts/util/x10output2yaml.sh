#!/bin/bash

PREVCLASS=
MSGNUM=0

cat $1 | sed -f ~/util/x10output2yaml.sed | sed -f ~/util/x10output2yaml2.sed | while read -r
do
  if echo "$REPLY" | grep -qe "^- File: " ; then
    if [[ "$REPLY" != "$PREVCLASS" ]] ; then
      echo "$REPLY" | sed -e "s/^- File: //" -e "s/$/:/"
      MSGNUM=0
    fi
    PREVCLASS=$REPLY
    MSGNUM=$(( MSGNUM + 1 ))

    echo "  Message$MSGNUM:"
  else
    echo "  $REPLY"
  fi
done
