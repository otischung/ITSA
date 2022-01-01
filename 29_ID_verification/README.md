題目25. 字串之編碼數值總和

## 問題描述

設計一個程式可以檢查身分證字號的正確性 ( 應檢查性別欄及檢查碼是否正確 ) 。

身分證字號共有十個碼，且有一定的編碼規則，其中檢查碼的計算方法如下：

Step 1: 根據下表查出第一碼的英文字母對應到的兩位數代號。

| 字母   | A      | B      | C      | D      | E      | F      | G      | H      | J      | K      | L      | M      | N      | P      | Q      | R      | S      | T      | U      | V      | X      | Y      | W      | Z      | I      | O      |
| ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ |
| 代號   | 10     | 11     | 12     | 13     | 14     | 15     | 16     | 17     | 18     | 19     | 20     | 21     | 22     | 23     | 24     | 25     | 26     | 27     | 28     | 29     | 30     | 31     | 32     | 33     | 34     | 35     |
| 縣市   | 台北市 | 台中市 | 基隆市 | 台南市 | 高雄市 | 新北市 | 宜蘭縣 | 桃園市 | 新竹縣 | 苗栗縣 | 台中縣 | 南投縣 | 彰化縣 | 雲林縣 | 嘉義縣 | 台南縣 | 高雄縣 | 屏東縣 | 花蓮縣 | 台東縣 | 澎湖縣 | 陽明山 | 金門縣 | 連江縣 | 嘉義市 | 新竹市 |
| 使用中 | Y      | Y      | Y      | Y      | Y      | Y      | Y      | Y      | Y      | Y      | N      | Y      | Y      | Y      | Y      | N      | N      | Y      | Y      | Y      | Y      | N      | Y      | Y      | Y      | Y      |

- 因容易和數字「1」和「0」混淆，原英文字首的編號並無使用「**I**」和「**O**」。1982年嘉義市及新竹市升格為省轄市後，才開始使用該兩個英文代碼。

- 1974年初陽明山管理局虛位化後，**Y **字頭的身分證字號也停止賦配。故往後於臺北市[士林區](https://zh.wikipedia.org/wiki/士林區)、[北投區](https://zh.wikipedia.org/wiki/北投區)兩區配賦國民身分證統一編號者，改發與臺北市相同 **A** 字頭的身分證字號。

- 2010年12月25日，[部分縣市改制直轄市](https://zh.wikipedia.org/wiki/2010年中華民國縣市改制直轄市)。[臺中縣](https://zh.wikipedia.org/wiki/臺中縣)、[臺南縣](https://zh.wikipedia.org/wiki/臺南縣)、[高雄縣](https://zh.wikipedia.org/wiki/高雄縣)於縣市合併之後裁撤，其代碼 **L**、**R**、**S** 停止賦配。改制後配賦國民身分證統一編號者，改發[臺中市](https://zh.wikipedia.org/wiki/臺中市)（**B**）、[臺南市](https://zh.wikipedia.org/wiki/臺南市)（**D**）、[高雄市](https://zh.wikipedia.org/wiki/高雄市)（**E**）之代碼。

- 第3碼原為流水號的一部分，自2003年7月1日起變更為身分碼，以6、7、8、9區別在臺灣居留及定居之外國人、[無戶籍國民](https://zh.wikipedia.org/wiki/無戶籍國民)、港澳居民、及大陸地區人民[[46\]](https://zh.wikipedia.org/wiki/中華民國國民身分證#cite_note-46)。

  |  代碼   |                          含義                          |
  | :-----: | :----------------------------------------------------: |
  |  **6**  |                    取得國籍之外國人                    |
  |  **7**  | [無戶籍國民](https://zh.wikipedia.org/wiki/無戶籍國民) |
  |  **8**  |                        港澳居民                        |
  |  **9**  |                      大陸地區人民                      |
  | **0~5** |                          其他                          |

Step 2: 令此代號之十位數為 X1 ，個位數為 X2 。例如 Y 的代號 31 ，則 X1=3 ； X2=1 。

Step 3: 運用下面的公式計算之。如果 P 可以被 10 整除，則此組身份證號碼是對的，反之則是錯的。
$$
P=X_1+(9X_2)+(8N_1)+(7N_2)+(6N_3)+(5N_4)+(4N_5)+(3N_6)+(2N_7)+N_8+N_9
$$


**輸入格式**

輸入身分證字號，第一碼為英文大寫。



**輸出格式**

若身分證字號正確，印出「CORRECT!!!」；不正確則印出「WRONG!!!」。



**輸入範例**

| **輸入範例** | **輸出範例** |
| ------------ | ------------ |
| A123456789   | CORRECT!!!   |
| L163690274   | WRONG!!!     |