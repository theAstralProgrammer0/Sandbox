function* fib(n)
{
  if (n < 0)
    console.error("n can not be negative");
  if (!n)
    yield 0
  if (n == 1)
    yield 1
  yield fib(n - 1) + fib(n - 2)
}


const fib_gen = fib(9)

fib_gen.next()
