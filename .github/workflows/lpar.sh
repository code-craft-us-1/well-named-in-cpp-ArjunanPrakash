#!/bin/bash

# Function to check if a file exceeds the LOC limit
checkloc() {
  while read tok line
  do
    # Check if the token is a number (LOC) and compare it with the limit
    if [[ $tok =~ ^[[:digit:]] ]]
    then
      if [[ $tok -gt $1 ]]
      then
        echo "Error: File '$line' exceeds the $1 LOC limit."
        exit 1
      fi
    else
      echo "File analysis completed without any LOC violations."
      exit 0
    fi
  done
}

# Main loop to process each line of input
while read line
do
  # Look for the keyword indicating the start of a file analysis by lizard
  if [[ "$line" == *"file analyzed"* ]]
  then
    # Skip headers and start checking LOC from subsequent lines
    read heading
    read heading
    read heading
    checkloc $1
  fi
done