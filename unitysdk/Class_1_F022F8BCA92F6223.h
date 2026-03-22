#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F022F8BCA92F6223__CTOR_OFFSET UNITYSDK_OFFSET(0xB34CAC0)

inline static constexpr unsigned int Class_1_F022F8BCA92F6223_TypeDefinitionIndex = 50111;

class Class_1_F022F8BCA92F6223 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Action_1<::System::Int32>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F022F8BCA92F6223__CTOR_OFFSET))(this);
	}
};
