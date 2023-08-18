pub mod algorithms;

pub fn add(left: usize, right: usize) -> usize {
    left + right
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::algorithms::*;

    #[test]
    fn it_works() {
        let result = add(2, 2);
        assert_eq!(result, 4);
    }

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
