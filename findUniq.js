function findUniq(arr) {
    arr = arr.sort(function(a,b){
        return a - b
    })
    console.log(arr)
    for(let i = 0; i < arr.length; i++){
        if(arr[i] == arr[i+1]){
            let j = arr[i]
            arr.forEach(element => {
                arr.splice(arr.indexOf(j), 1)
            });
            break
        }
    }
    return arr[0]
}

console.log(findUniq([1, 0, 1]))