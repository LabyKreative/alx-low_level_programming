#!/bin/bash

git add .

read -p "Ënter commit message: " commit_message

git commit -m "$commit_message"

git push origin master
