FROM python:latest

WORKDIR /server

COPY . /server

RUN pip3 install -r requirements.txt

CMD ["python3","client.py"]