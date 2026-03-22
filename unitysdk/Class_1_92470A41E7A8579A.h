#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_92470A41E7A8579A_METHOD_1_203F33612E75CFC1_OFFSET UNITYSDK_OFFSET(0x6461220)
#define CLASS_1_92470A41E7A8579A_METHOD_1_2C22AC11C9ED38E2_OFFSET UNITYSDK_OFFSET(0x6460730)
#define CLASS_1_92470A41E7A8579A_METHOD_1_4442087D819577FA_OFFSET UNITYSDK_OFFSET(0x64612B0)
#define CLASS_1_92470A41E7A8579A_METHOD_1_C70C5A8F6A0D3518_OFFSET UNITYSDK_OFFSET(0x6460CA0)
#define CLASS_1_92470A41E7A8579A__CTOR_OFFSET UNITYSDK_OFFSET(0x6461210)

inline static constexpr unsigned int Class_1_92470A41E7A8579A_TypeDefinitionIndex = 57440;

class Class_1_92470A41E7A8579A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92470A41E7A8579A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2C22AC11C9ED38E2(::MessagePack::MessagePackWriter& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::System::Object* a3, ::MessagePack::MessagePackSerializerOptions* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_E147DFD2A4EE8B0B&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_92470A41E7A8579A_METHOD_1_2C22AC11C9ED38E2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Object* Method_1_C70C5A8F6A0D3518(::MessagePack::MessagePackReader& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::Struct_2_E147DFD2A4EE8B0B&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_92470A41E7A8579A_METHOD_1_C70C5A8F6A0D3518_OFFSET))(this, a1, a2, a3);
	}

	::System::Object* Method_1_203F33612E75CFC1(::MessagePack::MessagePackReader& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::Struct_2_E147DFD2A4EE8B0B&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_92470A41E7A8579A_METHOD_1_203F33612E75CFC1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4442087D819577FA(::MessagePack::MessagePackWriter& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::System::Object* a3, ::MessagePack::MessagePackSerializerOptions* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_E147DFD2A4EE8B0B&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_92470A41E7A8579A_METHOD_1_4442087D819577FA_OFFSET))(this, a1, a2, a3, a4);
	}
};
