# 声明宏
声明宏11个常用类型：
- item，比如一个函数、结构体、模块等。
- block，代码块。比如一系列由花括号包裹的表达式和语句。
- stmt，语句。比如一个赋值语句。
- pat，模式。
- expr，表达式。
- ty，类型。比如 Vec。
- ident，标识符。比如一个变量名。
- path，路径。比如：foo、::std::mem::replace、transmute::<_, int>。
- meta，元数据。一般是在 #[...]  和  #![...]  属性内部的数据。
- tt，单个的 token 树。
- vis，可能为空的一个  Visibility  修饰符。比如 pub、pub(crate)。
[例子rule.rs](./examples/rule.rs)

# 过程宏
本质：把输入的 TokenStream 处理成输出的 TokenStream。

Cargo.toml配置,这样编译器才允许你使用` #[proc_macro]` 相关的宏
```toml
[lib]
proc-macro = true
```
过程宏需要单独crate，需要写到[lib.rs](./src/lib.rs)中，使用例子[query.rs](./examples/query.rs)。
