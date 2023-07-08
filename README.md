# Nova Programming Language
### Novaの考え
Nova言語は、次の３つを目標にしています。  
  
・書きやすい構文  
・初心者でも挫折しない達成感  
・かんたんに作れるGUI  
  
GUIがかんたんに触れることで、  
「なんだ、文字だけしか出ないの。つまんない」  
「もう、やめようかな。」  
ということがないようにしています。  
僕はJavaからやり始めたため、  
「意味がわからない！」  
「文字ばっかりでつまんない！」  
と思い、一時期やめていました。  
（当時小学５年生ということもあったのでしょうが。）  
そのことから、この考えに至ったという経緯があります。
### サンプルプログラム
Hello, world!：
```Nova
func main() {
    print("Hello, world!")
}
```
標準入力：
```Nova
func main() {
    var name = scan("Enter your name: ")
    print("Hello, @<name>")
}
```