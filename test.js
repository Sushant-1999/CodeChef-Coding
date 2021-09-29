

let dataToSend = {
    pol: 1,
    sentiment : "sushat",
    work: 100


}

var str = "";
for (var i in dataToSend) {
    str = str + "<tr><td>" + i + "</td>" + "<td>" + dataToSend[i] + "</td></tr>"
}
console.log(str)
var table = "<table border=1>" + str + "</table>"

