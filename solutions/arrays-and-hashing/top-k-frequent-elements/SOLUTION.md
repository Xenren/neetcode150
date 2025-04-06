# Explanation
My posted solution on LeetCode can be found [here](https://leetcode.com/problems/top-k-frequent-elements/solutions/4929792/beats-97-87-one-liner-explanation-simple-python-trick/). It is copy and pasted below for convenience.

![image.png](https://assets.leetcode.com/users/images/dbdd24ed-c790-4b19-9b7f-e56757515b9c_1711481131.3744843.png)

# Approach
- We can use a frequency map to determine the most common elements
- A frequency map is simply a dictionary where each value is the frequency (number of occurrences) of the corresponding key.
- Python has a frequency map built-in called `Counter` that contains a method called `most_common` for performing this action
- `most_common` returns a `list` of `tuples`formatted as `(item, frequency)`-- (Read more about `Counter` and view an example of `most_common`[here](https://docs.python.org/3/library/collections.html#collections.Counter))
- For this problem, we are only interested in the value itself (not its frequency count) so we create a new list from `tup[0]` which is the first element in each tuple from `most_common`
- We simply call `most_common` with the given value `k` and return a list comprehension of the first value in each tuple

# Code
```
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        return [tup[0] for tup in Counter(nums).most_common(k)]
```