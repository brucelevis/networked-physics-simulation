// automatically generated by the FlatBuffers compiler, do not modify

namespace NetworkedPhysics
{

using System;
using FlatBuffers;

public sealed class ClientDisconnectMessage : Table {
  public static ClientDisconnectMessage GetRootAsClientDisconnectMessage(ByteBuffer _bb) { return GetRootAsClientDisconnectMessage(_bb, new ClientDisconnectMessage()); }
  public static ClientDisconnectMessage GetRootAsClientDisconnectMessage(ByteBuffer _bb, ClientDisconnectMessage obj) { return (obj.__init(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public ClientDisconnectMessage __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; return this; }


  public static void StartClientDisconnectMessage(FlatBufferBuilder builder) { builder.StartObject(0); }
  public static Offset<ClientDisconnectMessage> EndClientDisconnectMessage(FlatBufferBuilder builder) {
    int o = builder.EndObject();
    return new Offset<ClientDisconnectMessage>(o);
  }
};


}
