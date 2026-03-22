#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_191;
namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_DFAD7F06AA320DDD_METHOD_1_81FACFBD3B13B575_OFFSET UNITYSDK_OFFSET(0x9F883E0)
#define CLASS_1_DFAD7F06AA320DDD_METHOD_1_B427F908C0D43F6B_OFFSET UNITYSDK_OFFSET(0x9F87E60)
#define CLASS_1_DFAD7F06AA320DDD_METHOD_1_FCD8BB636A6D5050_OFFSET UNITYSDK_OFFSET(0x9F88950)
#define CLASS_1_DFAD7F06AA320DDD__CTOR_OFFSET UNITYSDK_OFFSET(0x9F88940)

inline static constexpr unsigned int Class_1_DFAD7F06AA320DDD_TypeDefinitionIndex = 63218;

class Class_1_DFAD7F06AA320DDD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAD7F06AA320DDD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B427F908C0D43F6B(::MessagePack::MessagePackWriter& a1, ::Class_0_16E4307DCC419505_191* a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Class_0_16E4307DCC419505_191*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_DFAD7F06AA320DDD_METHOD_1_B427F908C0D43F6B_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_191* Method_1_81FACFBD3B13B575(::Struct_2_E147DFD2A4EE8B0B& a1, ::MessagePack::MessagePackReader& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::Class_0_16E4307DCC419505_191*(*)(::PVOID, ::Struct_2_E147DFD2A4EE8B0B&, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_DFAD7F06AA320DDD_METHOD_1_81FACFBD3B13B575_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_191* Method_1_FCD8BB636A6D5050(::Struct_2_E147DFD2A4EE8B0B& a1, ::MessagePack::MessagePackReader& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::Class_0_16E4307DCC419505_191*(*)(::PVOID, ::Struct_2_E147DFD2A4EE8B0B&, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_DFAD7F06AA320DDD_METHOD_1_FCD8BB636A6D5050_OFFSET))(this, a1, a2, a3);
	}
};
