#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigGalGameAvatarShow; }
namespace System { class Action; }

#define CLASS_1_FD6C96CB8C168B19_CLASS_1_26A70E15453EDA35_METHOD_1_0DA6DAF56B21B927_OFFSET UNITYSDK_OFFSET(0x6513B90)
#define CLASS_1_FD6C96CB8C168B19_CLASS_1_26A70E15453EDA35__CTOR_OFFSET UNITYSDK_OFFSET(0x6513B80)

inline static constexpr unsigned int Class_1_FD6C96CB8C168B19_Class_1_26A70E15453EDA35_TypeDefinitionIndex = 41422;

class Class_1_FD6C96CB8C168B19_Class_1_26A70E15453EDA35 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_CLASS_1_26A70E15453EDA35__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0DA6DAF56B21B927(::MoleMole::ConfigGalGameAvatarShow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShow*))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_CLASS_1_26A70E15453EDA35_METHOD_1_0DA6DAF56B21B927_OFFSET))(this, a1);
	}
};
