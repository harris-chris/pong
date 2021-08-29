{ pkgs ? import <nixos> {} }:
pkgs.mkShell {
  packages = [ 
    pkgs.bear
    pkgs.gnumake 
    pkgs.SDL2
  ];
  inputsFrom = with pkgs; [ hello gnutar ];
}
