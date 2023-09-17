import requests

s=requests.Session()  
s.trust_env = False

ports=[4658,4659,4660,4661,4662,4663]


orig=s.get("http://stonk.csaw.io:4657/listCalls").text #4657,
for port in ports:
    url=f"http://stonk.csaw.io:{port}/listCalls"
    r=s.get(url)
    print(r.status_code)
    print(r.text==orig)

    # break