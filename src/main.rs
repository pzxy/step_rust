// 默认会将 prelude 导入到每个包里面。如果要使用以外的库中内容，就需要使用 use将包导入进来。
use std::io;
use rand::Rng;// trait 相当于接口，里面定义了一些方法。

fn main() {
    // 带了一个！，表示这是一个宏不是一个函数。
    println!("Hello, world!");
    // 1～101也是包头不包尾
    let secret_number = rand::thread_rng().gen_range(1, 101);
    println!("神秘数字: {}", secret_number);
    println!("猜一个数");
    // 如果不加mut，则这个变量不能被二次赋值。
    // :: 表示new是String中的一个关联函数，类似java中静态方法。
    let mut guess = String::new();
    // 这里也可以取消上面的use，然后这样调用：
    // std::io::stdin().read_line 等等;
    // &表示引用，引用在rust中也是不可变的，所以要加上mut
    // read_line()返回类型io::Result，这相当于一个枚举类型，
    // 这个类型有两个字段 OK,Err,expect是对结果进行处理，如果返回是Err则中断程序并退出
    io::stdin().read_line(&mut guess).expect("无法读取");
    println!("你猜测的数是:{}", guess)
}
