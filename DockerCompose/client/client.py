import requests

response = requests.get('http://172.17.0.2:5000')
print(response.text)
