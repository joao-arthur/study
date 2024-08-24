pub fn bubble_sort<T: Ord>(arr: &mut [T]) {
    if arr.is_empty() {
        return;
    }
    let mut sorted = false;
    let mut n = arr.len();
    while !sorted {
        sorted = true;
        for i in 0..n - 1 {
            if arr[i] > arr[i + 1] {
                arr.swap(i, i + 1);
                sorted = false;
            }
        }
        n -= 1;
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn shuffled() {
        let mut values = vec![6, 5, 40, 3, 40, 99, 2, 1];
        bubble_sort(&mut values);
        assert_eq!(values, vec![1, 2, 3, 5, 6, 40, 40, 99]);
    }

    #[test]
    fn descending() {
        let mut values = vec![6, 5, 4, 3, 2, 1];
        bubble_sort(&mut values);
        assert_eq!(values, vec![1, 2, 3, 4, 5, 6]);
    }

    #[test]
    fn ascending() {
        let mut values = vec![1, 2, 3, 4, 5, 6];
        bubble_sort(&mut values);
        assert_eq!(values, vec![1, 2, 3, 4, 5, 6]);
    }

    #[test]
    fn one_element() {
        let mut values: Vec<usize> = vec![42];
        bubble_sort(&mut values);
        assert_eq!(values, vec![42]);
    }

    #[test]
    fn empty() {
        let mut values: Vec<usize> = vec![];
        bubble_sort(&mut values);
        assert_eq!(values, vec![]);
    }
}
