#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_4107ECDD60341DBB_CLASS_1_D673D6ED4B46D757_2_METHOD_1_F7F80C1DB6B12DA7_OFFSET UNITYSDK_OFFSET(0xA8A3D70)
#define CLASS_2_4107ECDD60341DBB_CLASS_1_D673D6ED4B46D757_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA8A3D60)

inline static constexpr unsigned int Class_2_4107ECDD60341DBB_Class_1_D673D6ED4B46D757_2_TypeDefinitionIndex = 78484;

class Class_2_4107ECDD60341DBB_Class_1_D673D6ED4B46D757_2 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4107ECDD60341DBB_CLASS_1_D673D6ED4B46D757_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F7F80C1DB6B12DA7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4107ECDD60341DBB_CLASS_1_D673D6ED4B46D757_2_METHOD_1_F7F80C1DB6B12DA7_OFFSET))(this, a1);
	}
};
