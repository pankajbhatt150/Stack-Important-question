Stock Span

Afzal has been working with an organization called 'Money Traders' for the past few years. The organization is into the money trading business. His manager assigned him a task. For a given array/list of stock's prices for N days, find the stock's span for each day.
The span of the stock's price today is defined as the maximum number of consecutive days(starting from today and going backwards) for which the price of the stock was less than today's price.
For example, if the price of a stock over a period of 7 days are [100, 80, 60, 70, 60, 75, 85], then the stock spans will be [1, 1, 1, 2, 1, 4, 6].
  Input Format:
The first line of input contains an integer N, denoting the total number of days.

The second line of input contains the stock prices of each day. A single space will separate them.
Output Format:
The only line of output will print the span for each day's stock price. A single space will separate them.
Sample Input 1:
4
10 10 10 10
Sample Output 1:
1 1 1 1 
Sample Input 2:
8
60 70 80 100 90 75 80 120
Sample Output 2:
1 2 3 4 1 1 2 8 
  // Solution
  #include <stack>
int* stockSpan(int *price, int size)  {
	int *span=new int[size];
  stack<int> s;
  span[0]=1;
  s.push(0);
  for(int i=1;i<size;i++)
  {
    while(!s.empty() && price[i]>price[s.top()])
    {
      s.pop();
    }
    if(s.empty())
    {
      span[i]=i+1;
    }else
    {
      span[i]=i-s.top();
    }
    s.push(i);
  }
  return span;
}
  
