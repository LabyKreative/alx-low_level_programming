#!/bin/bash

/ Add all files to the Git index
git add .

/ Prompt for a commit message.
read -p "Ënter commit message: " commit_message

/ Commit the changes.
git commit -m "$commit_message"

/Push the changes to GitHub.
git push
