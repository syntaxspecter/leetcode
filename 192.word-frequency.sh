#
# @lc app=leetcode id=192 lang=bash
#
# [192] Word Frequency
#

# @lc code=start
# Read from the file words.txt and output the word frequency list to stdout.
cat words.txt | tr -s ' ' '\n' | sort | uniq -c | sort -r | awk '{ print $2, $1 }'
# @lc code=end

