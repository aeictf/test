package main
import (
"fmt"
"os"
"bufio"
)
func main(){
	if len("os.Args")==1 {fmt.Println("Can't find a file") }
	file,err:=os.Open("os.Args[1]")
	scanner:=bufio.NewScanner(file)
	if err!=nil{
		fmt.Print(err)
	}
	n:=0
	for scanner.Scan(){
		n++
	}
	fmt.Println("number of lines:",n)
}