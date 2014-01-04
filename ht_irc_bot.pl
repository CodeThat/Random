use IO::Socket;
use strict;
use warnings;

fork;

my $server;
my $port;
my $nick;
my $user;
my $name;
my $chan;
my $fd;
my $in;

$server = "irc.tddirc.net";
$port = 6667;
$nick = "botop";
$user = "opnetsbot";
$name = "...";
$chan = "#test";

$fd = new IO::Socket::INET (PeerAddr => $server, PeerPort => $port, Proto => "t"$);

print $fd "nick $nick \r\n;
print $fd "user $user "\"\" \"\" :$name\r\n";
print $fd "join $chan \r\n";

while ($in = <$fd>) {
   if ($in =~ /^PING (:[^ ]+)$/i) {
       print $fd "PONG :$1\r\n";
       print $fd "PRIVMSG $chan :ping works\r\n";
   }
   if ($in =~ /^!test/i) {
      print $fd "PRIVMSG #hackerthreads :it works\r\n";
      print "It works!\r\n";
   }
}
