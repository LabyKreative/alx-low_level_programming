#!/bin/bash

# set the source and destination directories
src_dir="alx-low_level_programming/"
dest_dir="alx-low_level_programming/0x18-dynamic_libraries"

# read the list of file names from a text file
file_list="files_to_copy.txt"

# initialize an array to keep track of copied files
copied_files=()

# loop over each file name in the list
while read file_name; do
	# check if the file has already been copied
	if [[ "${copied_files[*]}" =~ "${file_name}" ]]; then
		echo "Skipping $file_name: file has already been copied"
	else
		# search for the file in subdirectories of src_dir
		found_file=$(find "$src_dir" -name "$file_name" -print -quit)
		if [[ -z "$found_file" ]]; then
			echo "File not found: $file_name"
		else
			# construct the full source and destination file paths
			src_file="$found_file"
			dest_file="$dest_dir/$file_name"

			# copy the file to the destination directory
			cp "$src_file" "$dest_file"

			# add the file name to the copied files array
			copied_files+=("$file_name")
		fi
	fi
done < "$file_list"
