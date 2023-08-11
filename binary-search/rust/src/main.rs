mod array;

fn main() {
    let mut arr: Vec<i32> = Vec::new();
    for i in 1..10000 {
        arr.push(i);
    }
    
    let number_to_find = 1;
    let mut high = arr.len() - 1;
    let mut guess;
    let mut low = 0;
    let mut tries = 1;
    
    loop {
        guess = (high + low) / 2;

        if arr[guess] == number_to_find {
            println!("finded your number after some {:?} tries!", tries);
            break;
        }

        if arr[guess] < number_to_find {
            low = guess;
            tries += 1;
            continue;
        }

        if arr[guess] > number_to_find {
            high = guess;
            tries += 1;
            continue;
        }
    }

}
