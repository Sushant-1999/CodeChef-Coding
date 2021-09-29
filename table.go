package main

import (
	"fmt"
	"reflect"
	"time"
)

type FeedBackDetails struct {
	Sentiment       string
	Polarity        int
	Time            time.Time
	Category        string
	BodyDescription string
}

func main() {

	now := time.Now()
	e := FeedBackDetails{
		Sentiment:       "sushant",
		Polarity:        0,
		Time:            now,
		Category:        "Idea",
		BodyDescription: "Make like Netflix",
	}
	e.GetEmailBody()

}

func (e FeedBackDetails) GetEmailBody() {
	v := reflect.ValueOf(e)
	typeOfS := v.Type()
	str := ""
	values := make([]interface{}, v.NumField())
	for i := 0; i < v.NumField(); i++ {
		values[i] = v.Field(i).Interface()
		//fmt.Print(typeOfS.Field(i).Name + "-") // This is key
		//fmt.Println(values[i])                 // this is value
		key := typeOfS.Field(i).Name
		//val := values[i]
		val := fmt.Sprintf("%v", values[i])
		str = str + "<tr><td>" + key + "</td>" + "<td>" + val + "</td></tr>"

	}
	/*
		res := fmt.Sprintf("%v", values)
		fmt.Println(res)
	*/
	fmt.Println("Printing the response in the Tabular Format")
	fmt.Println(str)

}
