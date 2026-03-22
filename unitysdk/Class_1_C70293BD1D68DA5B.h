#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_A12AE614E1EEE2CC.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_C70293BD1D68DA5B_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x89CF100)
#define CLASS_1_C70293BD1D68DA5B_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x89CF060)
#define CLASS_1_C70293BD1D68DA5B__CTOR_OFFSET UNITYSDK_OFFSET(0x89CF2C0)

inline static constexpr unsigned int Class_1_C70293BD1D68DA5B_TypeDefinitionIndex = 67634;

class Class_1_C70293BD1D68DA5B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C70293BD1D68DA5B__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_A12AE614E1EEE2CC a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_A12AE614E1EEE2CC, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C70293BD1D68DA5B_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_A12AE614E1EEE2CC Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_A12AE614E1EEE2CC(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C70293BD1D68DA5B_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
