#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLogicRotationRegistry; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6E7DD9BD46826E65_CLASS_1_EEBAC586733D8724_METHOD_1_E881514A9A292E9C_OFFSET UNITYSDK_OFFSET(0x6F8C2F0)
#define CLASS_1_6E7DD9BD46826E65_CLASS_1_EEBAC586733D8724__CTOR_OFFSET UNITYSDK_OFFSET(0x6F8C2E0)

inline static constexpr unsigned int Class_1_6E7DD9BD46826E65_Class_1_EEBAC586733D8724_TypeDefinitionIndex = 61585;

class Class_1_6E7DD9BD46826E65_Class_1_EEBAC586733D8724 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLogicRotationRegistry*>* Field_1_0; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigLogicRotationRegistry*>* Field_1_3; // 0x18
	::System::Action* Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E7DD9BD46826E65_CLASS_1_EEBAC586733D8724__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E881514A9A292E9C(::MoleMole::Config::ConfigLogicRotationRegistry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLogicRotationRegistry*))((::PBYTE)hIl2Cpp + CLASS_1_6E7DD9BD46826E65_CLASS_1_EEBAC586733D8724_METHOD_1_E881514A9A292E9C_OFFSET))(this, a1);
	}
};
