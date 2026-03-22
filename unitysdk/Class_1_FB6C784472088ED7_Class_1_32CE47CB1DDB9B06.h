#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FB6C784472088ED7_Class_1_61AE483B33052410_4;
namespace MoleMole::Config { class ConfigGlobalSoundAction; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_FB6C784472088ED7_CLASS_1_32CE47CB1DDB9B06_METHOD_1_8CE615DD8802D513_OFFSET UNITYSDK_OFFSET(0x9C4CEF0)
#define CLASS_1_FB6C784472088ED7_CLASS_1_32CE47CB1DDB9B06__CTOR_OFFSET UNITYSDK_OFFSET(0x9C4CEE0)

inline static constexpr unsigned int Class_1_FB6C784472088ED7_Class_1_32CE47CB1DDB9B06_TypeDefinitionIndex = 36367;

class Class_1_FB6C784472088ED7_Class_1_32CE47CB1DDB9B06 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigGlobalSoundAction*>* Field_1_2; // 0x10
	::Class_1_FB6C784472088ED7_Class_1_61AE483B33052410_4* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB6C784472088ED7_CLASS_1_32CE47CB1DDB9B06__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8CE615DD8802D513(::MoleMole::Config::ConfigGlobalSoundAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGlobalSoundAction*))((::PBYTE)hIl2Cpp + CLASS_1_FB6C784472088ED7_CLASS_1_32CE47CB1DDB9B06_METHOD_1_8CE615DD8802D513_OFFSET))(this, a1);
	}
};
