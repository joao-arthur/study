use std::time::Instant;

fn main() {
    let verified_multiples = [
        true, false, false, false, false, false, true, false, false, false, true, false, true,
        false, false, false, true, false, true, false, false, false, true, false, false, false,
        false, false, true, false,
    ];
    let size = 10_000_000;
    let mut primes = Vec::with_capacity(size);
    primes.extend_from_slice(&[2, 3, 5, 7, 11, 13, 17, 19, 23, 29]);
    let mut index = 10;
    let mut verified_multiple_index = 29;
    let mut current_analized = 31;
    let start_time = Instant::now();
    while index < size {
        verified_multiple_index += 1;
        if verified_multiple_index > 29 {
            verified_multiple_index = 0;
        }
        if !verified_multiples[verified_multiple_index] {
            current_analized += 1;
            continue;
        }
        let mut is_prime = true;
        let mut i = 3;
        let sqrt_of_current = (current_analized as f64).sqrt() as usize + 1;
        while primes[i] < sqrt_of_current {
            if current_analized % primes[i] == 0 {
                is_prime = false;
                break;
            }
            i += 1;
        }
        if is_prime {
            primes.push(current_analized);
            index += 1;
        }
        current_analized += 1;
    }
    let elapsed_time = start_time.elapsed();
    println!(
        "{:?} to find the {}th prime number, {}",
        elapsed_time,
        size,
        primes[size - 1]
    );
}
