#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_190E3717882702BE.h"
#include "unitysdk/Enum_3_9BD6D4E5A68CB9EF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_90858D70BEDD91CA__CTOR_OFFSET UNITYSDK_OFFSET(0x91E0210)

inline static constexpr unsigned int Class_1_90858D70BEDD91CA_TypeDefinitionIndex = 42480;

class Class_1_90858D70BEDD91CA : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::System::String*>* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Action* Field_1_10; // 0x20
	::System::Collections::Generic::IList_1<::UnityEngine::Color>* Field_1_2; // 0x28
	::Enum_3_190E3717882702BE Field_1_9; // 0x30
	::System::Boolean Field_1_6; // 0x34
	::System::Boolean Field_1_3; // 0x35
	::System::Boolean Field_1_5; // 0x36
	::System::Boolean Field_1_4; // 0x37
	::Enum_3_9BD6D4E5A68CB9EF Field_1_7; // 0x38
	::System::Int32 Field_1_8; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90858D70BEDD91CA__CTOR_OFFSET))(this);
	}
};
