package main

import "fmt"

func main() {
    s := ""
    fmt.Scan(&s)
    
    ans0 := 0
    ans1 := 0
    
    previous := '2'
    
    for _, r := range s { 
        if(previous!=r){ 
            if(r == '1'){
                ans1++
            }
            if(r== '0'){
                ans0++
            }
        }
        
        previous = r
    }
    if(ans0 > ans1){ 
        fmt.Print(ans1)
    }else{
        fmt.Print(ans0)
    }
}