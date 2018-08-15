require "formula"

class Flakechain < Formula
  desc "FlakeChain – Cryptonote v7 Network with Applications Platform and Rich Ecosystem"
  homepage "https://flake.space"

  url "https://github.com/flakechain/flake-core/archive/v0.3.0.0.zip"
  sha256 "e061cbe46776498edd2eb0f83c4d5f5ca97011aea72c05cadc65e2fecdbbf111"

  depends_on "cmake" => :build
  depends_on "pkgconfig" => :build
  depends_on "boost"
  depends_on "libevent"
  depends_on "readline"
  depends_on "zeromq"
  depends_on "unbound"

  resource "cppzmq" do
    url "https://raw.githubusercontent.com/zeromq/cppzmq/7a8cc9d7cf448b8fd654ec4cd24fd48b57a76162/zmq.hpp"
    sha256 "eeccec908d78bc195d093fb05a37271b3f7a62ec65b026b6f0b8d801d9b966da"
  end

  def install
    resource("cppzmq").stage include.to_s

    system "cmake", ".", *std_cmake_args
    system "make", "install"
  end
end