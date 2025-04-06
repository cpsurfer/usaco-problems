require 'set'

# Read input
n = gets.to_i
arr = gets.split.map(&:to_i)

# Use a Set to store distinct values
distinct_count = arr.to_set.size

# Print the result
puts distinct_count
