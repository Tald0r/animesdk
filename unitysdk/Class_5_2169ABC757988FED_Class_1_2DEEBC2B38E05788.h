#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_5_2169ABC757988FED;
namespace MoleMole::Config { class ConfigHollowChessboard_MoveXY; }
namespace System { class Action; }

#define CLASS_5_2169ABC757988FED_CLASS_1_2DEEBC2B38E05788_METHOD_1_6F7271C62F1FE776_OFFSET UNITYSDK_OFFSET(0x8DB0410)
#define CLASS_5_2169ABC757988FED_CLASS_1_2DEEBC2B38E05788_METHOD_1_DFA777394FA7F30D_OFFSET UNITYSDK_OFFSET(0x8DB0400)
#define CLASS_5_2169ABC757988FED_CLASS_1_2DEEBC2B38E05788__CTOR_OFFSET UNITYSDK_OFFSET(0x8DB03F0)

inline static constexpr unsigned int Class_5_2169ABC757988FED_Class_1_2DEEBC2B38E05788_TypeDefinitionIndex = 36781;

class Class_5_2169ABC757988FED_Class_1_2DEEBC2B38E05788 : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::Class_5_2169ABC757988FED* Field_1_1; // 0x18
	::MoleMole::Config::ConfigHollowChessboard_MoveXY* Field_1_0; // 0x20
	::UnityEngine::Vector3 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_CLASS_1_2DEEBC2B38E05788__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DFA777394FA7F30D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_CLASS_1_2DEEBC2B38E05788_METHOD_1_DFA777394FA7F30D_OFFSET))(this);
	}

	::System::Void Method_1_6F7271C62F1FE776(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_CLASS_1_2DEEBC2B38E05788_METHOD_1_6F7271C62F1FE776_OFFSET))(this, a1);
	}
};
