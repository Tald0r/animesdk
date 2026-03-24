#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigRichtapSound; }
namespace System { class Action; }

#define CLASS_1_FB6C784472088ED7_CLASS_1_B6D496C800AEE347_METHOD_1_AC26F02FECE9696E_OFFSET UNITYSDK_OFFSET(0x8904300)
#define CLASS_1_FB6C784472088ED7_CLASS_1_B6D496C800AEE347__CTOR_OFFSET UNITYSDK_OFFSET(0x89042F0)

inline static constexpr unsigned int Class_1_FB6C784472088ED7_Class_1_B6D496C800AEE347_TypeDefinitionIndex = 48196;

class Class_1_FB6C784472088ED7_Class_1_B6D496C800AEE347 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB6C784472088ED7_CLASS_1_B6D496C800AEE347__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AC26F02FECE9696E(::MoleMole::ConfigRichtapSound* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigRichtapSound*))((::PBYTE)hIl2Cpp + CLASS_1_FB6C784472088ED7_CLASS_1_B6D496C800AEE347_METHOD_1_AC26F02FECE9696E_OFFSET))(this, a1);
	}
};
