#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDynamicCheckTree; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C9DE16E8B48292AA_CLASS_1_998DB946C6820AB2_METHOD_1_392466C7C3CC2564_OFFSET UNITYSDK_OFFSET(0x78365C0)
#define CLASS_1_C9DE16E8B48292AA_CLASS_1_998DB946C6820AB2__CTOR_OFFSET UNITYSDK_OFFSET(0x78365B0)

inline static constexpr unsigned int Class_1_C9DE16E8B48292AA_Class_1_998DB946C6820AB2_TypeDefinitionIndex = 58737;

class Class_1_C9DE16E8B48292AA_Class_1_998DB946C6820AB2 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicCheckTree*>* Field_1_0; // 0x18
	::System::Action_1<::MoleMole::ConfigDynamicCheckTree*>* Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DE16E8B48292AA_CLASS_1_998DB946C6820AB2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_392466C7C3CC2564(::MoleMole::ConfigDynamicCheckTree* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigDynamicCheckTree*))((::PBYTE)hIl2Cpp + CLASS_1_C9DE16E8B48292AA_CLASS_1_998DB946C6820AB2_METHOD_1_392466C7C3CC2564_OFFSET))(this, a1);
	}
};
