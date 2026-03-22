#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_191;
class Class_1_1BDCF298D6EFEE00;
namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_DA21E15AC1DC40CC_METHOD_1_3FCA0652B4B9043B_OFFSET UNITYSDK_OFFSET(0xB52AFA0)
#define CLASS_1_DA21E15AC1DC40CC_METHOD_1_83A96592019C8669_OFFSET UNITYSDK_OFFSET(0xB52B1E0)

inline static constexpr unsigned int Class_1_DA21E15AC1DC40CC_TypeDefinitionIndex = 65809;

class Class_1_DA21E15AC1DC40CC : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_191* Method_1_3FCA0652B4B9043B(::MessagePack::MessagePackReader& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::Class_0_16E4307DCC419505_191*(*)(::MessagePack::MessagePackReader&, ::Struct_2_E147DFD2A4EE8B0B&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_DA21E15AC1DC40CC_METHOD_1_3FCA0652B4B9043B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_83A96592019C8669(::MessagePack::MessagePackWriter& a1, ::Class_1_1BDCF298D6EFEE00* a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::Class_1_1BDCF298D6EFEE00*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_DA21E15AC1DC40CC_METHOD_1_83A96592019C8669_OFFSET))(a1, a2, a3);
	}
};
