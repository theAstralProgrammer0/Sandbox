function* basic_gen_func()
{
    yield "Hello";
    yield "World";
    yield "!";
  }

const gen = basic_gen_func()

gen.next() // returns OBJECT = { value: "Hello", done: false }
gen.next().value // returns STRING = "World"
gen.next().done // returns BOOLEAN = false
gen.next() // returns OBJECT = { value: undefined, done: true }
