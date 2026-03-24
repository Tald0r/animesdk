#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_5_0B648F1F8F6AC84A;
namespace MoleMole::Config { class ConfigHollowChessboard_Rotate; }
namespace System { class Action; }

#define CLASS_5_0B648F1F8F6AC84A_CLASS_1_2454548B01649C98_METHOD_1_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0xB546F90)
#define CLASS_5_0B648F1F8F6AC84A_CLASS_1_2454548B01649C98_METHOD_1_DFA777394FA7F30D_OFFSET UNITYSDK_OFFSET(0xB5471B0)
#define CLASS_5_0B648F1F8F6AC84A_CLASS_1_2454548B01649C98__CTOR_OFFSET UNITYSDK_OFFSET(0xB546F80)

inline static constexpr unsigned int Class_5_0B648F1F8F6AC84A_Class_1_2454548B01649C98_TypeDefinitionIndex = 46155;

class Class_5_0B648F1F8F6AC84A_Class_1_2454548B01649C98 : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::MoleMole::Config::ConfigHollowChessboard_Rotate* Field_1_0; // 0x18
	::Class_5_0B648F1F8F6AC84A* Field_1_1; // 0x20
	::UnityEngine::Quaternion Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0B648F1F8F6AC84A_CLASS_1_2454548B01649C98__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_0B648F1F8F6AC84A_CLASS_1_2454548B01649C98_METHOD_1_A5ADA4706DA592FA_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFA777394FA7F30D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0B648F1F8F6AC84A_CLASS_1_2454548B01649C98_METHOD_1_DFA777394FA7F30D_OFFSET))(this);
	}
};
