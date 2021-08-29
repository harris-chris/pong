{ pkgs ? import <nixos> {} }:
pkgs.mkShell {
  packages = [ 
    pkgs.gnumake 
    pkgs.SDL2
    pkgs.gdb
  ];
  inputsFrom = with pkgs; [ hello gnutar ];
}
