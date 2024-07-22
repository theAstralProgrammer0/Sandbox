import cmd
import shlex

class HelloWorld(cmd.Cmd):
    """Simple command processor example."""
    def do_greet(self, line):
        listofargs = line.split()
        for word in listofargs:
            print("Hello", word)


    def do_sum(self, line):
        return sum(list(line))

    def do_EOF(self, line):
        return True

if __name__ == '__main__':
    HelloWorld().cmdloop()
