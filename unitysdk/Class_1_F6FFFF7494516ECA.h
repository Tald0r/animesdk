#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_F6FFFF7494516ECA_METHOD_1_05F5847C118CBEAE_OFFSET UNITYSDK_OFFSET(0x9A44790)
#define CLASS_1_F6FFFF7494516ECA_METHOD_1_36A7DFCCA1B36841_OFFSET UNITYSDK_OFFSET(0x9A452B0)
#define CLASS_1_F6FFFF7494516ECA_METHOD_1_AD8691152A36459E_OFFSET UNITYSDK_OFFSET(0x9A45210)
#define CLASS_1_F6FFFF7494516ECA_METHOD_1_D44B679ADCE44DD9_OFFSET UNITYSDK_OFFSET(0x9A44D70)
#define CLASS_1_F6FFFF7494516ECA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A45200)

inline static constexpr unsigned int Class_1_F6FFFF7494516ECA_TypeDefinitionIndex = 58953;

class Class_1_F6FFFF7494516ECA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6FFFF7494516ECA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_05F5847C118CBEAE(::MessagePack::MessagePackWriter& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::System::Object* a3, ::MessagePack::MessagePackSerializerOptions* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_E147DFD2A4EE8B0B&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F6FFFF7494516ECA_METHOD_1_05F5847C118CBEAE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Object* Method_1_D44B679ADCE44DD9(::MessagePack::MessagePackReader& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::Struct_2_E147DFD2A4EE8B0B&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F6FFFF7494516ECA_METHOD_1_D44B679ADCE44DD9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AD8691152A36459E(::MessagePack::MessagePackWriter& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::System::Object* a3, ::MessagePack::MessagePackSerializerOptions* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_E147DFD2A4EE8B0B&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F6FFFF7494516ECA_METHOD_1_AD8691152A36459E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Object* Method_1_36A7DFCCA1B36841(::MessagePack::MessagePackReader& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::Struct_2_E147DFD2A4EE8B0B&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F6FFFF7494516ECA_METHOD_1_36A7DFCCA1B36841_OFFSET))(this, a1, a2, a3);
	}
};
