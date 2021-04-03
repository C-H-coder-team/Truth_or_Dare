import random
print('''欢迎来到hxrlz弱智到爆的真心话大冒险
选择都十分的disgusting，请广大朋友们注意''')
a=input("是否开始？")
def start():
    global b
    if b==1:
        print("把你敬爱的母亲的微信给删了")
    if b==2:
        print("请揍你的一个朋友")
    if b==3:
        print("跟老师表白")
    if b==4:
        print("无效选项")
    if b==5:
        print("在你的老师面前玩游戏")
    if b==6:
        print("把你最喜欢的人的微信删了")
    if b==7:
        print("在朋友圈里公开发：‘我 没 对 象’")
    if b==8:
        print("无效选项")
    if b==9:
        print("不写作业")
if a=="是":
    b=random.randint(1,9)
    start()

    
    

        
        
