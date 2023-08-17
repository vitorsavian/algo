pub mod arr {
    pub fn new_array() -> Vec<i32> {
        let mut vector: Vec<i32> = Vec::new();
        for i in 1..10000 {
            vector.push(i)
        }
        vector
    }

    pub fn search_array(vector: &Vec<i32>) {
        let number_to_find = 1;
        let mut high = vector.len() - 1;
        let mut guess;
        let mut low = 0;
        let mut tries = 1;
        
        loop {
            guess = (high + low) / 2;

            if vector[guess] == number_to_find {
                println!("finded your number after some {:?} tries!", tries);
                break;
            }

            if vector[guess] < number_to_find {
                low = guess;
                tries += 1;
                continue;
            }

            if vector[guess] > number_to_find {
                high = guess;
                tries += 1;
                continue;
            }
        }
         
    }
}
