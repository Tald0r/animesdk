#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_2169ABC757988FED;
namespace MoleMole::Config { class ConfigHollowChessboard_Move; }
namespace System { class Action; }

#define CLASS_5_2169ABC757988FED_CLASS_1_9334DBEA1D1E1A6E_METHOD_1_6F7271C62F1FE776_OFFSET UNITYSDK_OFFSET(0x9539B90)
#define CLASS_5_2169ABC757988FED_CLASS_1_9334DBEA1D1E1A6E_METHOD_1_DFA777394FA7F30D_OFFSET UNITYSDK_OFFSET(0x9539D10)
#define CLASS_5_2169ABC757988FED_CLASS_1_9334DBEA1D1E1A6E__CTOR_OFFSET UNITYSDK_OFFSET(0x9539B80)

inline static constexpr unsigned int Class_5_2169ABC757988FED_Class_1_9334DBEA1D1E1A6E_TypeDefinitionIndex = 36763;

class Class_5_2169ABC757988FED_Class_1_9334DBEA1D1E1A6E : public ::System::Object
{
public:
	::Class_5_2169ABC757988FED* Field_1_1; // 0x10
	::System::Action* Field_1_3; // 0x18
	::MoleMole::Config::ConfigHollowChessboard_Move* Field_1_0; // 0x20
	::System::Single Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_CLASS_1_9334DBEA1D1E1A6E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6F7271C62F1FE776(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_CLASS_1_9334DBEA1D1E1A6E_METHOD_1_6F7271C62F1FE776_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFA777394FA7F30D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_CLASS_1_9334DBEA1D1E1A6E_METHOD_1_DFA777394FA7F30D_OFFSET))(this);
	}
};
