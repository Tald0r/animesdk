#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraLockTargetDatas; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DEBC388222B8D99B_CLASS_1_4CCE8F22C150837C_METHOD_1_DCF2305C1A6A6FD3_OFFSET UNITYSDK_OFFSET(0xC880000)
#define CLASS_1_DEBC388222B8D99B_CLASS_1_4CCE8F22C150837C__CTOR_OFFSET UNITYSDK_OFFSET(0xC87FFF0)

inline static constexpr unsigned int Class_1_DEBC388222B8D99B_Class_1_4CCE8F22C150837C_TypeDefinitionIndex = 68341;

class Class_1_DEBC388222B8D99B_Class_1_4CCE8F22C150837C : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigCameraLockTargetDatas*>* Field_1_3; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraLockTargetDatas*>* Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_4CCE8F22C150837C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DCF2305C1A6A6FD3(::MoleMole::Config::ConfigCameraLockTargetDatas* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraLockTargetDatas*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_4CCE8F22C150837C_METHOD_1_DCF2305C1A6A6FD3_OFFSET))(this, a1);
	}
};
