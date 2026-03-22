#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigRichtapResource; }
namespace MoleMole { class ConfigRichtapResource_Resource; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FB6C784472088ED7_CLASS_1_852D9D0ECF52E606_METHOD_1_099368EFC3624FEA_OFFSET UNITYSDK_OFFSET(0x9649150)
#define CLASS_1_FB6C784472088ED7_CLASS_1_852D9D0ECF52E606__CTOR_OFFSET UNITYSDK_OFFSET(0x9649140)

inline static constexpr unsigned int Class_1_FB6C784472088ED7_Class_1_852D9D0ECF52E606_TypeDefinitionIndex = 36366;

class Class_1_FB6C784472088ED7_Class_1_852D9D0ECF52E606 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::ConfigRichtapResource_Resource*>* Field_1_0; // 0x10
	::System::Action_1<::MoleMole::ConfigRichtapResource*>* Field_1_3; // 0x18
	::System::Action* Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB6C784472088ED7_CLASS_1_852D9D0ECF52E606__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_099368EFC3624FEA(::MoleMole::ConfigRichtapResource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigRichtapResource*))((::PBYTE)hIl2Cpp + CLASS_1_FB6C784472088ED7_CLASS_1_852D9D0ECF52E606_METHOD_1_099368EFC3624FEA_OFFSET))(this, a1);
	}
};
