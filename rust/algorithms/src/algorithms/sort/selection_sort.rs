pub fn selection_sort<T: Ord>(arr: &mut [T]) {
    let n = arr.len();
    for i in 0..n {
        let mut smallest = i;
        for j in (i + 1)..n {
            if arr[j] < arr[smallest] {
                smallest = j;
            }
        }
        arr.swap(smallest, i);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn shuffled() {
        let mut values = vec![6, 5, 40, 3, 40, 99, 2, 1];
        selection_sort(&mut values);
        assert_eq!(values, vec![1, 2, 3, 5, 6, 40, 40, 99]);
    }

    #[test]
    fn descending() {
        let mut values = vec![6, 5, 4, 3, 2, 1];
        selection_sort(&mut values);
        assert_eq!(values, vec![1, 2, 3, 4, 5, 6]);
    }

    #[test]
    fn ascending() {
        let mut values = vec![1, 2, 3, 4, 5, 6];
        selection_sort(&mut values);
        assert_eq!(values, vec![1, 2, 3, 4, 5, 6]);
    }

    #[test]
    fn one_element() {
        let mut values: Vec<usize> = vec![42];
        selection_sort(&mut values);
        assert_eq!(values, vec![42]);
    }

    #[test]
    fn empty() {
        let mut values: Vec<usize> = vec![];
        selection_sort(&mut values);
        assert_eq!(values, vec![]);
    }
}
