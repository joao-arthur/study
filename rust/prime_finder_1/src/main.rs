use std::time::Instant;

fn main() {
    let mut current_analized = 2;
    let size = 50_000;
    let mut index = 0;
    let mut primes = vec![0; size];
    let start_time = Instant::now();
    while index < size {
        let mut is_prime = true;
        let mut i = 2;
        while i < current_analized {
            if current_analized % i == 0 {
                is_prime = false;
                break;
            }
            i += 1;
        }
        if is_prime {
            primes[index] = current_analized;
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
