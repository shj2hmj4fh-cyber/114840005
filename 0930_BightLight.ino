/*const int buttonPin = 2; // 按鈕連接的接腳
const int RledPin = 3;   // RGB LED 的紅燈接腳
const int GledPin = 4;   // RGB LED 的綠燈接腳
const int BledPin = 5;   // RGB LED 的藍燈接腳

int buttonState = 0;     // 儲存目前按鈕的狀態
int ledcolor = 0;        // 顏色計數器

void setup() {
  // 設定 LED 接腳為輸出模式
  pinMode(RledPin, OUTPUT);
  pinMode(GledPin, OUTPUT);
  pinMode(BledPin, OUTPUT);
  
  // 設定按鈕接腳為輸入模式
  pinMode(buttonPin, INPUT);
}

void loop() {
  // 讀取按鈕的狀態（HIGH 或 LOW）
  buttonState = digitalRead(buttonPin);
  
  // 如果按鈕被按下（偵測到 HIGH）
  if (buttonState == 1) {
    ledcolor = ledcolor + 1; // 切換到下一個顏色狀態
    delay(1000);              // 簡單的小延遲防止彈跳（Debounce）
  }

  // 根據 ledcolor 的數值控制 LED 顏色
  if (ledcolor == 0) {
    // 全滅
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
  }
  else if (ledcolor == 1) {
    // 紅色 (RED)
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
  }
  else if (ledcolor == 2) {
    // 綠色 (GREEN)
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, HIGH);
  }
  else if (ledcolor == 3) {
    // 藍色 (BLUE)
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, LOW);
  }
  else if (ledcolor == 4) {
    // 紫色 (Purple) = 紅 + 藍
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, LOW);
  }
  else if (ledcolor == 5) {
    // 青色 (Cyan) = 綠 + 藍
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, LOW);
  }
  else if (ledcolor == 6) {
    // 黃色 (Yellow) = 紅 + 綠
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, HIGH);
  }
  else if (ledcolor == 7) {
    // 白色 (White) = 紅 + 綠 + 藍
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, LOW);
  }
  else if (ledcolor == 8) {
    // 超過範圍則重設回狀態 0（全滅）
    ledcolor = 0;
  }
}




// --- 請根據實際接線修改腳位 ---
const int RledPin = 9;       // 紅色 LED 接腳
const int GledPin = 10;      // 綠色 LED 接腳
const int BledPin = 11;      // 藍色 LED 接腳
const int buttonPin = 2;     // 按鈕接腳

// --- 圖片中的全域變數 ---
int buttonState = 0;         // 讀取按鈕狀態的變數
int ledcolor = 0;            // 顏色計數器
bool ButtonPressed = false;   // 記錄按鈕是否已被按下
String currentcolor = "led"; // 儲存目前顏色名稱的字串

void setup() {
  // 初始化 LED 腳位為輸出
  pinMode(RledPin, OUTPUT);
  pinMode(GledPin, OUTPUT);
  pinMode(BledPin, OUTPUT);
  
  // 初始化按鈕腳位為輸入
  pinMode(buttonPin, INPUT);
  
  // 鮑率設定
  Serial.begin(9600);
}

void loop() {
  // 讀取按鈕的狀態值
  buttonState = digitalRead(buttonPin);
  
  // 將目前的顏色狀態印出至序列埠
  Serial.print("Current Color: ");
  Serial.println(currentcolor);
  
  // 按鈕按下時的判斷 (正緣觸發)
  if (buttonState == HIGH && !ButtonPressed) {
    ledcolor = ledcolor + 1;
    ButtonPressed = true;
  }
  
  // 按鈕放開時的判斷
  if (buttonState == LOW && ButtonPressed) {
    ButtonPressed = false;
  }
  
  // --- 顏色切換條件分支 ---
  if (ledcolor == 0) {
    currentcolor = "LED off";
    digitalWrite(RledPin, HIGH); // 註：此處輸出 HIGH/LOW 依共陰或共陽燈泡而異
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
  }
  else if (ledcolor == 1) {
    // 紅色 (RED)
    currentcolor = "Red";
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
  }
  else if (ledcolor == 2) {
    // 綠色 (GREEN)
    currentcolor = "Green";
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, HIGH);
  }
  else if (ledcolor == 3) {
    // 藍色 (BLUE)
    currentcolor = "Blue";
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, LOW);
  }
  else if (ledcolor == 4) {
    // 黃色 (YELLOW)
    currentcolor = "Yellow";
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, HIGH);
  }
  else if (ledcolor == 5) {
    // 紫色 (PURPLE)
    currentcolor = "Purple";
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, LOW);
  }
  else if (ledcolor == 6) {
    // 青色 (CYAN)
    currentcolor = "Cyan";
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, LOW);
  }
  else if (ledcolor == 7) {
    // 白色 (WHITE)
    currentcolor = "White";
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, LOW);
  }
  else if (ledcolor == 8) {
    // 計數器歸零循環
    ledcolor = 0;
  }

  delay (100);


}
*/


// 宣告引腳（請依實際電路調整引腳編號）
const int buttonPin = 2;
const int RledPin = 3;   // 紅色引腳 (請依實際接線修改)
const int GledPin = 4;  // 綠色引腳 (請依實際接線修改)
const int BledPin = 5;  // 藍色引腳 (請依實際接線修改)

// 全域變數宣告
int buttonState = 0;     // 讀取按鈕狀態的變數
int ledState = LOW;      // LOW 代表亮燈週期，HIGH 代表滅燈週期
int ledcolor = 0;        // 顏色計數器 (0 ~ 7)
bool ButtonPressed = false;
String currentcolor = "LED off";

unsigned long previousMillis = 0; // 將儲存上次 LED 更新的時間
const long interval = 1000;       // 閃爍間隔（毫秒）

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(RledPin, OUTPUT);
  pinMode(GledPin, OUTPUT);
  pinMode(BledPin, OUTPUT);
  
  Serial.begin(9600);
  Serial.print("Current Color: ");
  Serial.println(currentcolor);
}

void loop() {
  // 1. 讀取按鈕的值
  buttonState = digitalRead(buttonPin);

  // 按下按鈕的邊緣觸發偵測 (切換下一個顏色)
  if (buttonState == HIGH && !ButtonPressed) {
    ledcolor = ledcolor + 1;
    ButtonPressed = true;
  }

  // 放開按鈕的狀態恢復
  if (buttonState == LOW && ButtonPressed) {
    ButtonPressed = false;
  }

  // 2. 非阻塞式 LED 計時閃爍切換
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;   // 儲存上次切換的時間
    
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
  }

  // 3. 核心 RGB 顏色控制與輸出邏輯 (結合圖片邏輯)
  if (ledcolor == 0) {
    currentcolor = "LED off";
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
  } 
  else if (ledcolor == 1) {
    currentcolor = "Red";
    if (ledState == LOW) {
      digitalWrite(RledPin, LOW);
      digitalWrite(GledPin, HIGH);
      digitalWrite(BledPin, HIGH);
    } else {
      digitalWrite(RledPin, HIGH);
      digitalWrite(GledPin, HIGH);
      digitalWrite(BledPin, HIGH);
    }
  } 
  else if (ledcolor == 2) {
    currentcolor = "Green";
    if (ledState == LOW) {
      digitalWrite(RledPin, HIGH);
      digitalWrite(GledPin, LOW);
      digitalWrite(BledPin, HIGH);
    } else {
      digitalWrite(RledPin, HIGH);
      digitalWrite(GledPin, HIGH);
      digitalWrite(BledPin, HIGH);
    }
  } 
  else if (ledcolor == 3) {
    currentcolor = "Blue";
    if (ledState == LOW) {
      digitalWrite(RledPin, HIGH);
      digitalWrite(GledPin, HIGH);
      digitalWrite(BledPin, LOW);
    } else {
      digitalWrite(RledPin, HIGH);
      digitalWrite(GledPin, HIGH);
      digitalWrite(BledPin, HIGH);
    }
  } 
  else if (ledcolor == 4) {
    currentcolor = "Yellow";
    if (ledState == LOW) {
      digitalWrite(RledPin, LOW);
      digitalWrite(GledPin, LOW);
      digitalWrite(BledPin, HIGH);
    } else {
      digitalWrite(RledPin, HIGH);
      digitalWrite(GledPin, HIGH);
      digitalWrite(BledPin, HIGH);
    }
  } 
  else if (ledcolor == 5) {
    currentcolor = "Purple";
    if (ledState == LOW) {
      digitalWrite(RledPin, LOW);
      digitalWrite(GledPin, HIGH);
      digitalWrite(BledPin, LOW);
    } else {
      digitalWrite(RledPin, HIGH);
      digitalWrite(GledPin, HIGH);
      digitalWrite(BledPin, HIGH);
    }
  } 
  else if (ledcolor == 6) {
    currentcolor = "Cyan";
    if (ledState == LOW) {
      digitalWrite(RledPin, HIGH);
      digitalWrite(GledPin, LOW);
      digitalWrite(BledPin, LOW);
    } else {
      digitalWrite(RledPin, HIGH);
      digitalWrite(GledPin, HIGH);
      digitalWrite(BledPin, HIGH);
    }
  } 
  else if (ledcolor == 7) {
    currentcolor = "White";
    if (ledState == LOW) {
      digitalWrite(RledPin, LOW);
      digitalWrite(GledPin, LOW);
      digitalWrite(BledPin, LOW);
    } else {
      digitalWrite(RledPin, HIGH);
      digitalWrite(GledPin, HIGH);
      digitalWrite(BledPin, HIGH);
    }
  } 
  else if (ledcolor == 8) {
    ledcolor = 0; // 超過範圍重設為 0
  }

  // 4. 當顏色改變時，同步輸出到 Serial Monitor
  static String lastColor = "";
  if (currentcolor != lastColor) {
    Serial.print("Current Color: ");
    Serial.println(currentcolor);
    lastColor = currentcolor;
  }
}

