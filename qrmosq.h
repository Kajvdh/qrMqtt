#ifndef QRMOSQ_H
#define QRMOSQ_H

#include <mosquittopp.h>
using namespace std;
class qrMqtt : public mosqpp::mosquittopp
{
  private:
   const char * host;
   const char * id;
   const char * topic;
   int		port;
   int		keepalive;

   void on_connect(int rc);
   void on_disconnect();
   void on_publish(int mid);

  public:
   qrMqtt(const char *id, const char * _topic, const char *host, int port);
   ~qrMqtt();
   bool send_msg(string m);
   std::string qrcam();

};

#endif
