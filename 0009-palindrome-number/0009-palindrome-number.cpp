class Solution {
public:
    bool isPalindrome(int x)
{
  string palindrome = to_string(x);
  int i = 0;
  int j = palindrome.length() - 1;
  while (j > i)
  {
    if (palindrome[i] != palindrome[j])
    {
      return 0;
    }
    i++;
    j--;
  }
  return 1;
}
};