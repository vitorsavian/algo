pub mod array {
    pub fn new_array(length: i32) -> Vec<i32> {
        let mut vector: Vec<i32> = Vec::new();
        for i in 1..length {
            vector.push(i)
        }
        vector
    }
  
    pub fn search_array(vector: &Vec<i32>, number_to_find: i32) -> bool {
        let mut high = vector.len() - 1;
        let mut guess;
        let mut low = 0;
        let mut tries = 1;
        
        if number_to_find > vector.len() as i32 {
            return false;
        }

        if vector[low] == number_to_find || vector[high] == number_to_find {
            return false;
        }

        loop {
            guess = (high + low) / 2;
    
            if guess == 1 && vector[guess] != number_to_find {
                break;
            }

            if vector[guess] == number_to_find {
                println!("finded your number after some {:?} tries!", tries);
                return true;
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

        false
    }
}

#[cfg(test)]
mod binary_search_tests {
    use crate::algorithms::*;

    #[test]
    fn binary_search_works() {
        let arr = binarysearch::array::new_array(1000);
        assert_eq!(binarysearch::array::search_array(&arr, 100), true);
    }

    #[test]
    fn binary_search_didnt_find() {
        let arr = binarysearch::array::new_array(1000);
        assert_eq!(binarysearch::array::search_array(&arr, 1001), false);
    }

    #[test]
    fn binary_search_with_one_value() {
        let arr = binarysearch::array::new_array(1000);
        assert_eq!(binarysearch::array::search_array(&arr, -1), false);
    }
}

