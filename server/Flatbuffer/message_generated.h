// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_MESSAGE_NETWORKEDPHYSICS_H_
#define FLATBUFFERS_GENERATED_MESSAGE_NETWORKEDPHYSICS_H_

#include "flatbuffers/flatbuffers.h"

namespace NetworkedPhysics {

struct Message;

struct MessageAck;

struct ClientConnectMessage;

struct ClientDisconnectMessage;

struct ResetSimulationMessage;

struct KeepAliveMessage;

struct ClientInputMessage;

struct ServerSnapshotMessage;

struct Entity;

struct Transform;

struct Vec3;

struct Vec4;

enum InputType {
  InputType_NONE = 0,
  InputType_Forward = 1,
  InputType_Backward = 2,
  InputType_Leftward = 3,
  InputType_Rightward = 4,
  InputType_MIN = InputType_NONE,
  InputType_MAX = InputType_Rightward
};

inline const char **EnumNamesInputType() {
  static const char *names[] = { "NONE", "Forward", "Backward", "Leftward", "Rightward", nullptr };
  return names;
}

inline const char *EnumNameInputType(InputType e) { return EnumNamesInputType()[static_cast<int>(e)]; }

enum EntityType {
  EntityType_NONE = 0,
  EntityType_Cube = 1,
  EntityType_Sphere = 2,
  EntityType_MIN = EntityType_NONE,
  EntityType_MAX = EntityType_Sphere
};

inline const char **EnumNamesEntityType() {
  static const char *names[] = { "NONE", "Cube", "Sphere", nullptr };
  return names;
}

inline const char *EnumNameEntityType(EntityType e) { return EnumNamesEntityType()[static_cast<int>(e)]; }

enum MessageType {
  MessageType_NONE = 0,
  MessageType_MessageAck = 1,
  MessageType_ClientConnectMessage = 2,
  MessageType_ClientDisconnectMessage = 3,
  MessageType_ClientInputMessage = 4,
  MessageType_ServerSnapshotMessage = 5,
  MessageType_ResetSimulationMessage = 6,
  MessageType_KeepAliveMessage = 7,
  MessageType_MIN = MessageType_NONE,
  MessageType_MAX = MessageType_KeepAliveMessage
};

inline const char **EnumNamesMessageType() {
  static const char *names[] = { "NONE", "MessageAck", "ClientConnectMessage", "ClientDisconnectMessage", "ClientInputMessage", "ServerSnapshotMessage", "ResetSimulationMessage", "KeepAliveMessage", nullptr };
  return names;
}

inline const char *EnumNameMessageType(MessageType e) { return EnumNamesMessageType()[static_cast<int>(e)]; }

inline bool VerifyMessageType(flatbuffers::Verifier &verifier, const void *union_obj, MessageType type);

struct Message FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4,
    VT_DATA_TYPE = 6,
    VT_DATA = 8
  };
  int32_t id() const { return GetField<int32_t>(VT_ID, 0); }
  MessageType data_type() const { return static_cast<MessageType>(GetField<uint8_t>(VT_DATA_TYPE, 0)); }
  const void *data() const { return GetPointer<const void *>(VT_DATA); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           VerifyField<uint8_t>(verifier, VT_DATA_TYPE) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_DATA) &&
           VerifyMessageType(verifier, data(), data_type()) &&
           verifier.EndTable();
  }
};

struct MessageBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) { fbb_.AddElement<int32_t>(Message::VT_ID, id, 0); }
  void add_data_type(MessageType data_type) { fbb_.AddElement<uint8_t>(Message::VT_DATA_TYPE, static_cast<uint8_t>(data_type), 0); }
  void add_data(flatbuffers::Offset<void> data) { fbb_.AddOffset(Message::VT_DATA, data); }
  MessageBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  MessageBuilder &operator=(const MessageBuilder &);
  flatbuffers::Offset<Message> Finish() {
    auto o = flatbuffers::Offset<Message>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<Message> CreateMessage(flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    MessageType data_type = MessageType_NONE,
    flatbuffers::Offset<void> data = 0) {
  MessageBuilder builder_(_fbb);
  builder_.add_data(data);
  builder_.add_id(id);
  builder_.add_data_type(data_type);
  return builder_.Finish();
}

struct MessageAck FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_MESSAGEID = 4
  };
  int32_t messageId() const { return GetField<int32_t>(VT_MESSAGEID, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_MESSAGEID) &&
           verifier.EndTable();
  }
};

struct MessageAckBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_messageId(int32_t messageId) { fbb_.AddElement<int32_t>(MessageAck::VT_MESSAGEID, messageId, 0); }
  MessageAckBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  MessageAckBuilder &operator=(const MessageAckBuilder &);
  flatbuffers::Offset<MessageAck> Finish() {
    auto o = flatbuffers::Offset<MessageAck>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<MessageAck> CreateMessageAck(flatbuffers::FlatBufferBuilder &_fbb,
    int32_t messageId = 0) {
  MessageAckBuilder builder_(_fbb);
  builder_.add_messageId(messageId);
  return builder_.Finish();
}

struct ClientConnectMessage FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
};

struct ClientConnectMessageBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  ClientConnectMessageBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  ClientConnectMessageBuilder &operator=(const ClientConnectMessageBuilder &);
  flatbuffers::Offset<ClientConnectMessage> Finish() {
    auto o = flatbuffers::Offset<ClientConnectMessage>(fbb_.EndTable(start_, 0));
    return o;
  }
};

inline flatbuffers::Offset<ClientConnectMessage> CreateClientConnectMessage(flatbuffers::FlatBufferBuilder &_fbb) {
  ClientConnectMessageBuilder builder_(_fbb);
  return builder_.Finish();
}

struct ClientDisconnectMessage FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
};

struct ClientDisconnectMessageBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  ClientDisconnectMessageBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  ClientDisconnectMessageBuilder &operator=(const ClientDisconnectMessageBuilder &);
  flatbuffers::Offset<ClientDisconnectMessage> Finish() {
    auto o = flatbuffers::Offset<ClientDisconnectMessage>(fbb_.EndTable(start_, 0));
    return o;
  }
};

inline flatbuffers::Offset<ClientDisconnectMessage> CreateClientDisconnectMessage(flatbuffers::FlatBufferBuilder &_fbb) {
  ClientDisconnectMessageBuilder builder_(_fbb);
  return builder_.Finish();
}

struct ResetSimulationMessage FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
};

struct ResetSimulationMessageBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  ResetSimulationMessageBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  ResetSimulationMessageBuilder &operator=(const ResetSimulationMessageBuilder &);
  flatbuffers::Offset<ResetSimulationMessage> Finish() {
    auto o = flatbuffers::Offset<ResetSimulationMessage>(fbb_.EndTable(start_, 0));
    return o;
  }
};

inline flatbuffers::Offset<ResetSimulationMessage> CreateResetSimulationMessage(flatbuffers::FlatBufferBuilder &_fbb) {
  ResetSimulationMessageBuilder builder_(_fbb);
  return builder_.Finish();
}

struct KeepAliveMessage FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
};

struct KeepAliveMessageBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  KeepAliveMessageBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  KeepAliveMessageBuilder &operator=(const KeepAliveMessageBuilder &);
  flatbuffers::Offset<KeepAliveMessage> Finish() {
    auto o = flatbuffers::Offset<KeepAliveMessage>(fbb_.EndTable(start_, 0));
    return o;
  }
};

inline flatbuffers::Offset<KeepAliveMessage> CreateKeepAliveMessage(flatbuffers::FlatBufferBuilder &_fbb) {
  KeepAliveMessageBuilder builder_(_fbb);
  return builder_.Finish();
}

struct ClientInputMessage FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_TYPE = 4
  };
  InputType type() const { return static_cast<InputType>(GetField<int8_t>(VT_TYPE, 0)); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_TYPE) &&
           verifier.EndTable();
  }
};

struct ClientInputMessageBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_type(InputType type) { fbb_.AddElement<int8_t>(ClientInputMessage::VT_TYPE, static_cast<int8_t>(type), 0); }
  ClientInputMessageBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  ClientInputMessageBuilder &operator=(const ClientInputMessageBuilder &);
  flatbuffers::Offset<ClientInputMessage> Finish() {
    auto o = flatbuffers::Offset<ClientInputMessage>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<ClientInputMessage> CreateClientInputMessage(flatbuffers::FlatBufferBuilder &_fbb,
    InputType type = InputType_NONE) {
  ClientInputMessageBuilder builder_(_fbb);
  builder_.add_type(type);
  return builder_.Finish();
}

struct ServerSnapshotMessage FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ENTITIES = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<Entity>> *entities() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Entity>> *>(VT_ENTITIES); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ENTITIES) &&
           verifier.Verify(entities()) &&
           verifier.VerifyVectorOfTables(entities()) &&
           verifier.EndTable();
  }
};

struct ServerSnapshotMessageBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_entities(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Entity>>> entities) { fbb_.AddOffset(ServerSnapshotMessage::VT_ENTITIES, entities); }
  ServerSnapshotMessageBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  ServerSnapshotMessageBuilder &operator=(const ServerSnapshotMessageBuilder &);
  flatbuffers::Offset<ServerSnapshotMessage> Finish() {
    auto o = flatbuffers::Offset<ServerSnapshotMessage>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<ServerSnapshotMessage> CreateServerSnapshotMessage(flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Entity>>> entities = 0) {
  ServerSnapshotMessageBuilder builder_(_fbb);
  builder_.add_entities(entities);
  return builder_.Finish();
}

inline flatbuffers::Offset<ServerSnapshotMessage> CreateServerSnapshotMessageDirect(flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<Entity>> *entities = nullptr) {
  return CreateServerSnapshotMessage(_fbb, entities ? _fbb.CreateVector<flatbuffers::Offset<Entity>>(*entities) : 0);
}

struct Entity FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4,
    VT_TYPE = 6,
    VT_INTERACTING = 8,
    VT_TRANSFORM = 10
  };
  int32_t id() const { return GetField<int32_t>(VT_ID, 0); }
  EntityType type() const { return static_cast<EntityType>(GetField<int8_t>(VT_TYPE, 0)); }
  bool interacting() const { return GetField<uint8_t>(VT_INTERACTING, 0) != 0; }
  const Transform *transform() const { return GetPointer<const Transform *>(VT_TRANSFORM); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           VerifyField<int8_t>(verifier, VT_TYPE) &&
           VerifyField<uint8_t>(verifier, VT_INTERACTING) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_TRANSFORM) &&
           verifier.VerifyTable(transform()) &&
           verifier.EndTable();
  }
};

struct EntityBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) { fbb_.AddElement<int32_t>(Entity::VT_ID, id, 0); }
  void add_type(EntityType type) { fbb_.AddElement<int8_t>(Entity::VT_TYPE, static_cast<int8_t>(type), 0); }
  void add_interacting(bool interacting) { fbb_.AddElement<uint8_t>(Entity::VT_INTERACTING, static_cast<uint8_t>(interacting), 0); }
  void add_transform(flatbuffers::Offset<Transform> transform) { fbb_.AddOffset(Entity::VT_TRANSFORM, transform); }
  EntityBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  EntityBuilder &operator=(const EntityBuilder &);
  flatbuffers::Offset<Entity> Finish() {
    auto o = flatbuffers::Offset<Entity>(fbb_.EndTable(start_, 4));
    return o;
  }
};

inline flatbuffers::Offset<Entity> CreateEntity(flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    EntityType type = EntityType_NONE,
    bool interacting = false,
    flatbuffers::Offset<Transform> transform = 0) {
  EntityBuilder builder_(_fbb);
  builder_.add_transform(transform);
  builder_.add_id(id);
  builder_.add_interacting(interacting);
  builder_.add_type(type);
  return builder_.Finish();
}

struct Transform FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_POSITION = 4,
    VT_ROTATION = 6,
    VT_SCALE = 8
  };
  const Vec3 *position() const { return GetPointer<const Vec3 *>(VT_POSITION); }
  const Vec4 *rotation() const { return GetPointer<const Vec4 *>(VT_ROTATION); }
  const Vec3 *scale() const { return GetPointer<const Vec3 *>(VT_SCALE); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_POSITION) &&
           verifier.VerifyTable(position()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ROTATION) &&
           verifier.VerifyTable(rotation()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_SCALE) &&
           verifier.VerifyTable(scale()) &&
           verifier.EndTable();
  }
};

struct TransformBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_position(flatbuffers::Offset<Vec3> position) { fbb_.AddOffset(Transform::VT_POSITION, position); }
  void add_rotation(flatbuffers::Offset<Vec4> rotation) { fbb_.AddOffset(Transform::VT_ROTATION, rotation); }
  void add_scale(flatbuffers::Offset<Vec3> scale) { fbb_.AddOffset(Transform::VT_SCALE, scale); }
  TransformBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  TransformBuilder &operator=(const TransformBuilder &);
  flatbuffers::Offset<Transform> Finish() {
    auto o = flatbuffers::Offset<Transform>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<Transform> CreateTransform(flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<Vec3> position = 0,
    flatbuffers::Offset<Vec4> rotation = 0,
    flatbuffers::Offset<Vec3> scale = 0) {
  TransformBuilder builder_(_fbb);
  builder_.add_scale(scale);
  builder_.add_rotation(rotation);
  builder_.add_position(position);
  return builder_.Finish();
}

struct Vec3 FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_X = 4,
    VT_Y = 6,
    VT_Z = 8
  };
  float x() const { return GetField<float>(VT_X, 0.0f); }
  float y() const { return GetField<float>(VT_Y, 0.0f); }
  float z() const { return GetField<float>(VT_Z, 0.0f); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_X) &&
           VerifyField<float>(verifier, VT_Y) &&
           VerifyField<float>(verifier, VT_Z) &&
           verifier.EndTable();
  }
};

struct Vec3Builder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_x(float x) { fbb_.AddElement<float>(Vec3::VT_X, x, 0.0f); }
  void add_y(float y) { fbb_.AddElement<float>(Vec3::VT_Y, y, 0.0f); }
  void add_z(float z) { fbb_.AddElement<float>(Vec3::VT_Z, z, 0.0f); }
  Vec3Builder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  Vec3Builder &operator=(const Vec3Builder &);
  flatbuffers::Offset<Vec3> Finish() {
    auto o = flatbuffers::Offset<Vec3>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<Vec3> CreateVec3(flatbuffers::FlatBufferBuilder &_fbb,
    float x = 0.0f,
    float y = 0.0f,
    float z = 0.0f) {
  Vec3Builder builder_(_fbb);
  builder_.add_z(z);
  builder_.add_y(y);
  builder_.add_x(x);
  return builder_.Finish();
}

struct Vec4 FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_X = 4,
    VT_Y = 6,
    VT_Z = 8,
    VT_W = 10
  };
  float x() const { return GetField<float>(VT_X, 0.0f); }
  float y() const { return GetField<float>(VT_Y, 0.0f); }
  float z() const { return GetField<float>(VT_Z, 0.0f); }
  float w() const { return GetField<float>(VT_W, 0.0f); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_X) &&
           VerifyField<float>(verifier, VT_Y) &&
           VerifyField<float>(verifier, VT_Z) &&
           VerifyField<float>(verifier, VT_W) &&
           verifier.EndTable();
  }
};

struct Vec4Builder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_x(float x) { fbb_.AddElement<float>(Vec4::VT_X, x, 0.0f); }
  void add_y(float y) { fbb_.AddElement<float>(Vec4::VT_Y, y, 0.0f); }
  void add_z(float z) { fbb_.AddElement<float>(Vec4::VT_Z, z, 0.0f); }
  void add_w(float w) { fbb_.AddElement<float>(Vec4::VT_W, w, 0.0f); }
  Vec4Builder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  Vec4Builder &operator=(const Vec4Builder &);
  flatbuffers::Offset<Vec4> Finish() {
    auto o = flatbuffers::Offset<Vec4>(fbb_.EndTable(start_, 4));
    return o;
  }
};

inline flatbuffers::Offset<Vec4> CreateVec4(flatbuffers::FlatBufferBuilder &_fbb,
    float x = 0.0f,
    float y = 0.0f,
    float z = 0.0f,
    float w = 0.0f) {
  Vec4Builder builder_(_fbb);
  builder_.add_w(w);
  builder_.add_z(z);
  builder_.add_y(y);
  builder_.add_x(x);
  return builder_.Finish();
}

inline bool VerifyMessageType(flatbuffers::Verifier &verifier, const void *union_obj, MessageType type) {
  switch (type) {
    case MessageType_NONE: return true;
    case MessageType_MessageAck: return verifier.VerifyTable(reinterpret_cast<const MessageAck *>(union_obj));
    case MessageType_ClientConnectMessage: return verifier.VerifyTable(reinterpret_cast<const ClientConnectMessage *>(union_obj));
    case MessageType_ClientDisconnectMessage: return verifier.VerifyTable(reinterpret_cast<const ClientDisconnectMessage *>(union_obj));
    case MessageType_ClientInputMessage: return verifier.VerifyTable(reinterpret_cast<const ClientInputMessage *>(union_obj));
    case MessageType_ServerSnapshotMessage: return verifier.VerifyTable(reinterpret_cast<const ServerSnapshotMessage *>(union_obj));
    case MessageType_ResetSimulationMessage: return verifier.VerifyTable(reinterpret_cast<const ResetSimulationMessage *>(union_obj));
    case MessageType_KeepAliveMessage: return verifier.VerifyTable(reinterpret_cast<const KeepAliveMessage *>(union_obj));
    default: return false;
  }
}

inline const NetworkedPhysics::Message *GetMessage(const void *buf) { return flatbuffers::GetRoot<NetworkedPhysics::Message>(buf); }

inline bool VerifyMessageBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<NetworkedPhysics::Message>(nullptr); }

inline void FinishMessageBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<NetworkedPhysics::Message> root) { fbb.Finish(root); }

}  // namespace NetworkedPhysics

#endif  // FLATBUFFERS_GENERATED_MESSAGE_NETWORKEDPHYSICS_H_
