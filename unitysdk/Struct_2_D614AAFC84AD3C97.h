#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_254F54BB98E2C94F.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_191;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_D614AAFC84AD3C97_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x31D610)
#define STRUCT_2_D614AAFC84AD3C97_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x2FC120)
#define STRUCT_2_D614AAFC84AD3C97_METHOD_2_2209773381A72B3E_OFFSET UNITYSDK_OFFSET(0x31D690)
#define STRUCT_2_D614AAFC84AD3C97_METHOD_2_9763C1632AD7B1F4_OFFSET UNITYSDK_OFFSET(0x31D680)

inline static constexpr unsigned int Struct_2_D614AAFC84AD3C97_TypeDefinitionIndex = 42309;

struct alignas(8) Struct_2_D614AAFC84AD3C97
{
	::Struct_2_E147DFD2A4EE8B0B Field_2_0; // 0x10
	::Class_0_16E4307DCC419505_191* Field_2_1; // 0x28
	::Struct_2_254F54BB98E2C94F Field_2_2; // 0x30

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D614AAFC84AD3C97_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_D614AAFC84AD3C97_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9763C1632AD7B1F4(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_D614AAFC84AD3C97_METHOD_2_9763C1632AD7B1F4_OFFSET))(this, a1, a2);
	}

	::SimpleJSON::JSONNode* Method_2_2209773381A72B3E()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D614AAFC84AD3C97_METHOD_2_2209773381A72B3E_OFFSET))(this);
	}
};
