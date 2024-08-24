pub fn insertion_sort<T: Ord + Copy>(arr: &mut [T]) {
    let n = arr.len();
    for i in 1..n {
        let mut j = i;
        let cur = arr[i];
        while j > 0 && cur < arr[j - 1] {
            arr[j] = arr[j - 1];
            j -= 1;
        }
        arr[j] = cur;
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn shuffled() {
        let mut values = vec![6, 5, 40, 3, 40, 99, 2, 1];
        insertion_sort(&mut values);
        assert_eq!(values, vec![1, 2, 3, 5, 6, 40, 40, 99]);
    }

    #[test]
    fn descending() {
        let mut values = vec![6, 5, 4, 3, 2, 1];
        insertion_sort(&mut values);
        assert_eq!(values, vec![1, 2, 3, 4, 5, 6]);
    }

    #[test]
    fn ascending() {
        let mut values = vec![1, 2, 3, 4, 5, 6];
        insertion_sort(&mut values);
        assert_eq!(values, vec![1, 2, 3, 4, 5, 6]);
    }

    #[test]
    fn one_element() {
        let mut values: Vec<usize> = vec![42];
        insertion_sort(&mut values);
        assert_eq!(values, vec![42]);
    }

    #[test]
    fn empty() {
        let mut values: Vec<usize> = vec![];
        insertion_sort(&mut values);
        assert_eq!(values, vec![]);
    }
}
