function solution(number){
    number--;
    let count = 0;
    for(number; number>0; number--){
        if(number % 5 == 0 || number % 3 == 0){
            count += number;
        }
    }
    return count
}

solution(10)