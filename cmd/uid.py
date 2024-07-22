#!/usr/bin/env python3

import uuid
import cmd


class IDCMD(cmd.Cmd):
    id = uuid.uuid4().hex

    def do_createid(self, line):
        print(self.id)
    def


if __name__ == '__main__':
    IDCMD().cmdloop()
