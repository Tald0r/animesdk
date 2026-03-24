#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_195;
namespace SimpleJSON { class JSONNode; }

#define CLASS_1_1BDCF298D6EFEE00_METHOD_1_02E1B524B7086DA2_OFFSET UNITYSDK_OFFSET(0xD04DBB0)
#define CLASS_1_1BDCF298D6EFEE00_METHOD_1_17BBE0541820B3E2_OFFSET UNITYSDK_OFFSET(0xD04D760)
#define CLASS_1_1BDCF298D6EFEE00_METHOD_1_25D21A3F1107DE72_OFFSET UNITYSDK_OFFSET(0xD04D9C0)
#define CLASS_1_1BDCF298D6EFEE00_METHOD_1_4159E7FA36E53247_OFFSET UNITYSDK_OFFSET(0xD04DC90)
#define CLASS_1_1BDCF298D6EFEE00__CTOR_OFFSET UNITYSDK_OFFSET(0xD04DBA0)

inline static constexpr unsigned int Class_1_1BDCF298D6EFEE00_TypeDefinitionIndex = 43330;

class Class_1_1BDCF298D6EFEE00 : public ::System::Object
{
public:
	::Struct_2_E147DFD2A4EE8B0B Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_195* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BDCF298D6EFEE00__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_17BBE0541820B3E2(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_1BDCF298D6EFEE00_METHOD_1_17BBE0541820B3E2_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_1_25D21A3F1107DE72()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BDCF298D6EFEE00_METHOD_1_25D21A3F1107DE72_OFFSET))(this);
	}

	::System::Boolean Method_1_02E1B524B7086DA2(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_1BDCF298D6EFEE00_METHOD_1_02E1B524B7086DA2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4159E7FA36E53247(::Struct_2_E147DFD2A4EE8B0B a1, ::SimpleJSON::JSONNode* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_E147DFD2A4EE8B0B, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_1BDCF298D6EFEE00_METHOD_1_4159E7FA36E53247_OFFSET))(this, a1, a2);
	}
};
