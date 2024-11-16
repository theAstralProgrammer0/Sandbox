#!/usr/bin/env python3

import uuid
import datetime


class BaseModel():
    id = uuid.uuid4().hex
    created_at = datetime.datetime.now()
    updated_at = created_at
    print(id)
    print(created_at)
    print(updated_at)

    def to_dict(self):
        return self.__dict__


if __name__ == '__main__':
    BaseModel()
