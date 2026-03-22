#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLogicMovementRegistry; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B13744EA6D4A8618_CLASS_1_D788B0205F4005F5_METHOD_1_C91EF737AA46E9FD_OFFSET UNITYSDK_OFFSET(0xBCBEB10)
#define CLASS_1_B13744EA6D4A8618_CLASS_1_D788B0205F4005F5__CTOR_OFFSET UNITYSDK_OFFSET(0xBCBEB00)

inline static constexpr unsigned int Class_1_B13744EA6D4A8618_Class_1_D788B0205F4005F5_TypeDefinitionIndex = 53056;

class Class_1_B13744EA6D4A8618_Class_1_D788B0205F4005F5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLogicMovementRegistry*>* Field_1_0; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigLogicMovementRegistry*>* Field_1_3; // 0x18
	::System::Action* Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B13744EA6D4A8618_CLASS_1_D788B0205F4005F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C91EF737AA46E9FD(::MoleMole::Config::ConfigLogicMovementRegistry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLogicMovementRegistry*))((::PBYTE)hIl2Cpp + CLASS_1_B13744EA6D4A8618_CLASS_1_D788B0205F4005F5_METHOD_1_C91EF737AA46E9FD_OFFSET))(this, a1);
	}
};
