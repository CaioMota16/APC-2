{ pkgs }: {
	deps = [
   pkgs.graphviz
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}