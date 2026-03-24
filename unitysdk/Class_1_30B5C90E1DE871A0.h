#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InLevelOptionsCardSelectItemData.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_30B5C90E1DE871A0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DB9A50)

inline static constexpr unsigned int Class_1_30B5C90E1DE871A0_TypeDefinitionIndex = 66772;

class Class_1_30B5C90E1DE871A0 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::InLevelOptionsCardSelectItemData>* Field_1_0; // 0x18
	::System::Action* Field_1_6; // 0x20
	::System::Int32 Field_1_4; // 0x28
	::System::Boolean Field_1_5; // 0x2C
	::System::Boolean Field_1_3; // 0x2D
	::System::Boolean Field_1_1; // 0x2E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30B5C90E1DE871A0__CTOR_OFFSET))(this);
	}
};
