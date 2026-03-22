#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDynamicOverrideWeather; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9CCB98C808F221F2_CLASS_1_52CD7AD97134F708_METHOD_1_51B52A7AFA9D2A24_OFFSET UNITYSDK_OFFSET(0x7342D40)
#define CLASS_1_9CCB98C808F221F2_CLASS_1_52CD7AD97134F708__CTOR_OFFSET UNITYSDK_OFFSET(0x7342D30)

inline static constexpr unsigned int Class_1_9CCB98C808F221F2_Class_1_52CD7AD97134F708_TypeDefinitionIndex = 39886;

class Class_1_9CCB98C808F221F2_Class_1_52CD7AD97134F708 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Action_1<::MoleMole::ConfigDynamicOverrideWeather*>* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicOverrideWeather*>* Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CCB98C808F221F2_CLASS_1_52CD7AD97134F708__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_51B52A7AFA9D2A24(::MoleMole::ConfigDynamicOverrideWeather* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigDynamicOverrideWeather*))((::PBYTE)hIl2Cpp + CLASS_1_9CCB98C808F221F2_CLASS_1_52CD7AD97134F708_METHOD_1_51B52A7AFA9D2A24_OFFSET))(this, a1);
	}
};
