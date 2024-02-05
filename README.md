# IndependentActorRPCFramework

独立ActorRPC框架

测试版本：***UE5.2.1***

让每一个Actor都能在自身处理RPC逻辑，这个玩意提供了两个接口，供给控制器和Actor使用。控制器必须要实现接口并设置到游戏内，当设置了之后，实现了Actor接口的将能够自己发送RPC给服务器。这实际上就是靠控制器代理了RPC，但是简化了操作并解除了RPC逻辑耦合。
