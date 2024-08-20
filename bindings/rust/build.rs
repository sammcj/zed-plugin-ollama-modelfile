use std::path::PathBuf;

fn main() {
    let src_dir = PathBuf::from("src");

    println!("cargo:rerun-if-changed=src/parser.c");
    println!("cargo:rerun-if-changed=src/scanner.c");
    println!("cargo:rerun-if-changed=src/tree_sitter/parser.h");

    let mut c_config = cc::Build::new();
    c_config.include(&src_dir);
    c_config
        .flag_if_supported("-Wno-unused-parameter")
        .flag_if_supported("-Wno-unused-but-set-variable")
        .flag_if_supported("-Wno-trigraphs");
    c_config.file(&src_dir.join("parser.c"));

    if src_dir.join("scanner.c").exists() {
        c_config.file(&src_dir.join("scanner.c"));
    }

    c_config.compile("parser");
}
