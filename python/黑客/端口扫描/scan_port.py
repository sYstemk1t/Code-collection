import socket
import threading
from queue import Queue
import time, sys
def socket_Exec(task):
    que, ip, port = task
    try:
        print("正在运行的ipaddress", (ip, port))
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        s.connect((ip, port))
        s.close()
        que.put("Port {} is open".format(port))
        with open(r'g:\port.txt', 'a+') as f:
            f.write(str(port) + ' is open\n')
    except: pass
def run(ip):
    que = Queue()
    taskList = iter(iter([(que, ip, port) for port in range(65536 // 4 * i, 65536 // 4 * (i + 1))])\
                    if i < 3 else iter([(que, ip, port) for port in range(65536 // 4 * i, 65536)])\
                    for i in range(4))
    thList = []
    for tasks in taskList:
        for task in tasks:
            th = threading.Thread(target=socket_Exec, args=(task, ))
            th.start()
            thList.append(th)
    for th in thList:
        th.join()
    while not que.empty():
        print(que.get())
if __name__ == '__main__':
    start = time.time()
    print ("请输入ip或者域名:")
    a = input()
    run(a)
    print("Program End!", time.time() - start)
