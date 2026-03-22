#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicObjectRegistry; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_10CDF64C2DBF3F33_CLASS_1_E39ED5154ED84F63_METHOD_1_B1C016D9657940A6_OFFSET UNITYSDK_OFFSET(0xCAF61E0)
#define CLASS_1_10CDF64C2DBF3F33_CLASS_1_E39ED5154ED84F63__CTOR_OFFSET UNITYSDK_OFFSET(0xCAF61D0)

inline static constexpr unsigned int Class_1_10CDF64C2DBF3F33_Class_1_E39ED5154ED84F63_TypeDefinitionIndex = 45056;

class Class_1_10CDF64C2DBF3F33_Class_1_E39ED5154ED84F63 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigDynamicObjectRegistry*>* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicObjectRegistry*>* Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10CDF64C2DBF3F33_CLASS_1_E39ED5154ED84F63__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B1C016D9657940A6(::MoleMole::Config::ConfigDynamicObjectRegistry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDynamicObjectRegistry*))((::PBYTE)hIl2Cpp + CLASS_1_10CDF64C2DBF3F33_CLASS_1_E39ED5154ED84F63_METHOD_1_B1C016D9657940A6_OFFSET))(this, a1);
	}
};
