#!/usr/bin/env python3
import cmd
import shlex



class HelloWorld(cmd.Cmd):
    """Simple command processor example."""

    def do_greet(self, line):
        splitted = shlex.shlex(line)
        splitted.whitespace_split = True
        for word in splitted:
            print(f"hello {word}")

    def do_EOF(self, line):
        return True


if __name__ == '__main__':
    HelloWorld().cmdloop()
