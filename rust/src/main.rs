fn main() {
    for num in 1..100 {
        let txt = if num % 15 == 0 {
            String::from("fizzbuzz")
        } else if num % 5 == 0 {
            String::from("buzz")
        } else if num % 3 == 0 {
            String::from("fizz")
        } else {
            num.to_string()
        };

        println!("{}", txt)
    }
}
