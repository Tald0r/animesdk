#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSurfGameItemData; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A66999A870925AC7_CLASS_1_84312B66B34F620A_METHOD_1_4AEDB2A86456594E_OFFSET UNITYSDK_OFFSET(0xAAEB330)
#define CLASS_1_A66999A870925AC7_CLASS_1_84312B66B34F620A__CTOR_OFFSET UNITYSDK_OFFSET(0xAAEB320)

inline static constexpr unsigned int Class_1_A66999A870925AC7_Class_1_84312B66B34F620A_TypeDefinitionIndex = 78033;

class Class_1_A66999A870925AC7_Class_1_84312B66B34F620A : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigSurfGameItemData*>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSurfGameItemData*>* Field_1_0; // 0x18
	::System::Action* Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66999A870925AC7_CLASS_1_84312B66B34F620A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4AEDB2A86456594E(::MoleMole::Config::ConfigSurfGameItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSurfGameItemData*))((::PBYTE)hIl2Cpp + CLASS_1_A66999A870925AC7_CLASS_1_84312B66B34F620A_METHOD_1_4AEDB2A86456594E_OFFSET))(this, a1);
	}
};
