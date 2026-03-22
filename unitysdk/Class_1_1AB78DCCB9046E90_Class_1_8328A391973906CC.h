#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigLevelWeather; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1AB78DCCB9046E90_CLASS_1_8328A391973906CC_METHOD_1_9A5FD70F13583D57_OFFSET UNITYSDK_OFFSET(0xC4FB5D0)
#define CLASS_1_1AB78DCCB9046E90_CLASS_1_8328A391973906CC__CTOR_OFFSET UNITYSDK_OFFSET(0xC4FB5C0)

inline static constexpr unsigned int Class_1_1AB78DCCB9046E90_Class_1_8328A391973906CC_TypeDefinitionIndex = 73788;

class Class_1_1AB78DCCB9046E90_Class_1_8328A391973906CC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::ConfigLevelWeather*>* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Action_1<::MoleMole::ConfigLevelWeather*>* Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB78DCCB9046E90_CLASS_1_8328A391973906CC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9A5FD70F13583D57(::MoleMole::ConfigLevelWeather* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLevelWeather*))((::PBYTE)hIl2Cpp + CLASS_1_1AB78DCCB9046E90_CLASS_1_8328A391973906CC_METHOD_1_9A5FD70F13583D57_OFFSET))(this, a1);
	}
};
