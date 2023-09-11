#!/bin/bash

# Get the current directory
current_directory=$(pwd)

# Navigate to the current directory
cd "$current_directory" || exit

# Get the current date and time with AM/PM notation
current_datetime=$(date "+%Y-%m-%d %I:%M:%S %p")

# Create a version based on the current date and time
version="version-$current_datetime"

# args 1 and 2
file_to_add="$1"
additional_message="$2"

# Add the specified file to Git
git add "$file_to_add"

# Combine version and additional message for the commit
commit_message="$version $additional_message"

# Commit with the combined message
git commit -m "$commit_message"

# Push changes to the main branch
git push origin main

echo "Changes added, committed, and pushed with message: $commit_message"
