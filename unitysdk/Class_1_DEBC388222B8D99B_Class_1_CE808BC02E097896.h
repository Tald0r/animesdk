#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraCutsceneGroups; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DEBC388222B8D99B_CLASS_1_CE808BC02E097896_METHOD_1_5982FFD4F90EF5CC_OFFSET UNITYSDK_OFFSET(0x7FF6380)
#define CLASS_1_DEBC388222B8D99B_CLASS_1_CE808BC02E097896__CTOR_OFFSET UNITYSDK_OFFSET(0x7FF6370)

inline static constexpr unsigned int Class_1_DEBC388222B8D99B_Class_1_CE808BC02E097896_TypeDefinitionIndex = 59258;

class Class_1_DEBC388222B8D99B_Class_1_CE808BC02E097896 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutsceneGroups*>* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Action_1<::MoleMole::Config::ConfigCameraCutsceneGroups*>* Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_CE808BC02E097896__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5982FFD4F90EF5CC(::MoleMole::Config::ConfigCameraCutsceneGroups* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraCutsceneGroups*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_CE808BC02E097896_METHOD_1_5982FFD4F90EF5CC_OFFSET))(this, a1);
	}
};
