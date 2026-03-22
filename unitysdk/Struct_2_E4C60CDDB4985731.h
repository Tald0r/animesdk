#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_254F54BB98E2C94F.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_E4C60CDDB4985731_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x321E40)
#define STRUCT_2_E4C60CDDB4985731_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x2C6220)
#define STRUCT_2_E4C60CDDB4985731_METHOD_2_2F838D596FC9570A_OFFSET UNITYSDK_OFFSET(0x321EB0)
#define STRUCT_2_E4C60CDDB4985731_METHOD_2_56DB112840E3D500_OFFSET UNITYSDK_OFFSET(0x321EC0)

inline static constexpr unsigned int Struct_2_E4C60CDDB4985731_TypeDefinitionIndex = 43187;

struct alignas(8) Struct_2_E4C60CDDB4985731
{
	::Struct_2_E147DFD2A4EE8B0B Field_2_0; // 0x10
	::Struct_2_254F54BB98E2C94F Field_2_1; // 0x28

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E4C60CDDB4985731_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_E4C60CDDB4985731_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2F838D596FC9570A(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_E4C60CDDB4985731_METHOD_2_2F838D596FC9570A_OFFSET))(this, a1, a2);
	}

	::SimpleJSON::JSONNode* Method_2_56DB112840E3D500()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E4C60CDDB4985731_METHOD_2_56DB112840E3D500_OFFSET))(this);
	}
};
