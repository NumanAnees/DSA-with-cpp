## Problem

https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=kth-smallest-element

## Solution

- For finding kth smallest use maxHeap which is `priority_queue<int>`.
- Create a k size maxheap of k small elements. As root is largest in maxheap so we can say that kth smallest is at root.

## TC

O(nlogk)

## SC

O(k)
