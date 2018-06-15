#!/usr/bin/env python
import requests
from bs4 import BeautifulSoup


def main():
    url = "http://106.2.25.10/jia/index.php"
    session = requests.session()
    response = session.get(url)
    doc = response.text
    soup = BeautifulSoup(doc, "lxml")
    expr = soup.find("div", {"name": "my_expr"}).string
    expression = expr.replace("x", "*")
    num = eval(expression)
    print(num)
    url2 = "http://106.2.25.10/jia/index.php?action=check_pass"
    payload = {"pass_key": num}
    result = session.post(url2, data=payload)
    print(result.text)


if __name__ == "__main__":
    main()
