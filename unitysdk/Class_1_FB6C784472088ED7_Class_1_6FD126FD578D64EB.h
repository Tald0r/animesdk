#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FB6C784472088ED7_Class_1_61AE483B33052410_23;
namespace MoleMole::Config { class ConfigGlobalSoundAction; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_FB6C784472088ED7_CLASS_1_6FD126FD578D64EB_METHOD_1_1E7E7DEA99ACA11F_OFFSET UNITYSDK_OFFSET(0xAF4FF00)
#define CLASS_1_FB6C784472088ED7_CLASS_1_6FD126FD578D64EB__CTOR_OFFSET UNITYSDK_OFFSET(0xAF4FEF0)

inline static constexpr unsigned int Class_1_FB6C784472088ED7_Class_1_6FD126FD578D64EB_TypeDefinitionIndex = 48199;

class Class_1_FB6C784472088ED7_Class_1_6FD126FD578D64EB : public ::System::Object
{
public:
	::Class_1_FB6C784472088ED7_Class_1_61AE483B33052410_23* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigGlobalSoundAction*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB6C784472088ED7_CLASS_1_6FD126FD578D64EB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1E7E7DEA99ACA11F(::MoleMole::Config::ConfigGlobalSoundAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGlobalSoundAction*))((::PBYTE)hIl2Cpp + CLASS_1_FB6C784472088ED7_CLASS_1_6FD126FD578D64EB_METHOD_1_1E7E7DEA99ACA11F_OFFSET))(this, a1);
	}
};
