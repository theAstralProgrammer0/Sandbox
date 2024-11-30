function* fibGenerator(): Generator<number, any, number> {
  function fib(n: number): number {
    if (n < 0) {
      console.error(`${n} is not a valid fibonacci number`);
      return 0;
    }
    if (!n) return 0;
    if (n == 1) return 1;

    return fib(n - 1) + fib(n - 2);
  }

  let i: number = 0;
  while(true) {
    yield fib(i);
    i += 1;
  }
};
