import requests
url="https://www.google.co.in/"
response=requests.get(url) 
f1=open("urlfile.txt","w",encoding='utf-8')
f1.write(response.text)
f1.close()
print("contents copies")





     