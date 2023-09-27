FROM python:3


ENV PYTHONUNBUFFERED 1

WORKDIR /okyesco/hello-python

COPY . /okyesco/hello-python/

CMD ["python3", "new.py"]

