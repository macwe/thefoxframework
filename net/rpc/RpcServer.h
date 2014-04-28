#ifndef _THEFOX_RPC_RPCSERVER_H_
#define _THEFOX_RPC_RPCSERVER_H_

#include <base/Types.h>
#include <net/TcpServer.h>
#include <net/rpc/common.h>
#include <net/rpc/rpc.pb.h>
#include <google/protobuf/service.h>

namespace thefox
{

class RpcServiceManager;
typedef std::shared_ptr<RpcServiceManager> ServiceManagerPtr;

class RpcServer
{
public:
	RpcServer(EventLoop *loop);
	~RpcServer();

	void registerService(gpb::Service *service);
	bool start(const InetAddress &listen);

private:
	THEFOX_DISALLOW_EVIL_CONSTRUCTORS(RpcServer);
	void onConnection(const TcpConnectionPtr &conn);
	void onClose(const TcpConnectionPtr &conn);
	void onMessage(const TcpConnectionPtr &conn, Buffer *buf, const Timestamp recvTime);
	// 服务端：处理请求
	void handleCallMessage(const TcpConnectionPtr &conn, const rpc::Call &call, Timestamp recvTime);

	std::shared_ptr<TcpServer> _server;
	ServiceManagerPtr _serviceManager;
};

} // namespace thefox

#endif  // _THEFOX_RPC_RPCSERVER_H_

