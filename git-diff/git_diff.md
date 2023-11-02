# git diff 
我以前就是 草草得用就好     </br>
後來看到一個人寫的文章      </br>
> 會用比

我最近都在  大力的忙...     </br>
不過就寫寫我最近遇到的一個東西XD        </br>

先來看看這個圖片 這是我最近認真寫git 的心得     </br>
(✿◕‿◕✿)
![](../pic/git_overview.png)
這是我看到別人寫的 我一開始很開心       </br>
想說 我站在巨人的肩膀上(笑) o(\*≧▽≦)ツ┏━┓       </br>

後來當我在寫 git diff 我真的 寫1寫      </br>
發現不對...     </br>
因為我在做 git diff         </br>

有3種
+ git diff --cached
+ git diff
+ git diff HEAD

> 我寫道我都會背了
>> 可見知道我跌的多慘

然後我一開始 看到這個圖 還想說 天啊         </br>
怎麼會這樣呢..      </br>
有問題也        </br>

所以我就改版        </br>
![](../pic/git-diff-v1.png)
因為我再用各種test      </br>

看到這個圖片 就知道     </br>
我用了 1.txt 先 add => commit       </br>
然後 在new file math-1.c math-2.c       </br>
然後 `git add math-1.c`     </br>

後來就像圖片一樣        </br>
![](../pic/git-conflic-confuse.png)
對亞 我做了 兩種 那`diff --cached `     </br>
在哪裡呀..ORZ       </br>
![](../pic/git-diff-v2.png)

後來呢 我就繼續寫測試...        </br>
![](../pic/git-diff-head.png)
![](../pic/git-diff-cached.png)
![](../pic/git-diff.png)

做完後 我就蒙掉了....       </br>
怎麼怪怪的      </br>
對於coding 女神的我來說     </br>
我怎麼會...     </br>
女人的直覺 直接讓我覺得怪怪的       </br>
所以我就把畫一次        </br>

![](../pic/git-diff-v3.png)
我改了 working directory 在中間     </br>

後來我就看到一個人寫的      </br>
![](../pic/git-diff-hope-light.png)
[萬點附上ref](https://stackoverflow.com/questions/3686452/what-are-the-differences-between-these-git-diff-commands)
他是我跌倒的明燈..      </br>
我直接如同 brainstome       </br>
後來我繼續test      </br>
![](../pic/git-diff-v11.png)
我還發現 
![](../pic/git-diff-v12.png)
我就想說 `git diff HEAD`        </br>
是因為 他會先比 workspace and staging 在比 respository      </br>
但是我又覺得哪裡怪怪的      </br>
我真的被自己打敗...     </br>
明明用過diff 卻還是被自己的         </br>
固執化認知錯誤帶錯...       </br>
diff的比較明明是2種compare..        </br>

![](../pic/git-diff-v21-final.png)
所以就改版成這樣了!! finaly....     </br>
![](../pic/git-file-type.png)
因為這個圖片 才引發一切...      </br>
我瘋了...       </br>

###### Fri Nov  3 00:09:01 CST 2023
###### Fri Nov  3 00:30:53 CST 2023
