// var arr=["raj", "virat", 1000,true,"rahul",999]
// let newarr=arr.forEach(function(element,index){
//     console.log(element+" "+ index)

// })
// console.log(newarr)
// console.log(arr)


// Map()
// var array=[10,20,30,40]
// var newarr=array.map((Element,index)=>{
//     return Element*10
// })
// console.log(newarr)
// console.log(array)


// Filter()
// var array=[101,203,300,400,559]
// var new_arr=array.filter((ele,index)=>{
//     return ele>200
// })
// console.log(new_arr)
// console.log(array)


// sort()
// var arr=["sam","gita","sita","mita"]
// console.log(arr.sort())


// Assending
// var arr=[4,6,7,3,2,1]
// var res=arr.sort((a,b)=>{
//     return a-b
    
// })
// console.log(res)

// Desending
// var arr=[4,6,7,3,2,1]
// var res=arr.sort((a,b)=>{
//     return b-a
    
// })
// console.log(res)

// Reduce()
var arr=[10,20,30,40,50,60,70]
var callback=(prev,cuurent)=>{
    return prev+cuurent
}
var re=arr.reduce(callback,0)
console.log(re)

