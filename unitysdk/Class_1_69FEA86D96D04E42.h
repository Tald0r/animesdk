#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_6D1969169CB23895.h"
#include "unitysdk/Struct_2_A12AE614E1EEE2CC.h"
#include "unitysdk/Struct_2_CC86B677214AB654.h"
#include "unitysdk/Struct_2_D614AAFC84AD3C97.h"
#include "unitysdk/Struct_2_E4C60CDDB4985731.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class ListFormatter_1; }

#define CLASS_1_69FEA86D96D04E42_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x8929350)
#define CLASS_1_69FEA86D96D04E42_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x89291D0)
#define CLASS_1_69FEA86D96D04E42__CTOR_OFFSET UNITYSDK_OFFSET(0x9B68D10)

inline static constexpr unsigned int Class_1_69FEA86D96D04E42_TypeDefinitionIndex = 70456;

class Class_1_69FEA86D96D04E42 : public ::System::Object
{
public:
	::MessagePack::Formatters::ListFormatter_1<::Struct_2_A12AE614E1EEE2CC>* Field_1_0; // 0x10
	::MessagePack::Formatters::ListFormatter_1<::Struct_2_6D1969169CB23895>* Field_1_1; // 0x18
	::MessagePack::Formatters::ListFormatter_1<::Struct_2_D614AAFC84AD3C97>* Field_1_2; // 0x20
	::MessagePack::Formatters::ListFormatter_1<::Struct_2_E4C60CDDB4985731>* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69FEA86D96D04E42__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_CC86B677214AB654 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_CC86B677214AB654, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_69FEA86D96D04E42_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_CC86B677214AB654 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_CC86B677214AB654(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_69FEA86D96D04E42_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
