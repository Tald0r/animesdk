#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigInteractEntry; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1DA734EA3AAF759A_CLASS_1_78C94C2A2718E176__CTOR_OFFSET UNITYSDK_OFFSET(0x83A9740)

inline static constexpr unsigned int Class_1_1DA734EA3AAF759A_Class_1_78C94C2A2718E176_TypeDefinitionIndex = 61080;

class Class_1_1DA734EA3AAF759A_Class_1_78C94C2A2718E176 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractEntry*>* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DA734EA3AAF759A_CLASS_1_78C94C2A2718E176__CTOR_OFFSET))(this);
	}
};
