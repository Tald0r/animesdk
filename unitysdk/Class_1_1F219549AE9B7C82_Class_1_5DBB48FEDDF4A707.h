#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_1F219549AE9B7C82_CLASS_1_5DBB48FEDDF4A707_METHOD_1_96E4292424C0D3B5_OFFSET UNITYSDK_OFFSET(0x9D9DFC0)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_5DBB48FEDDF4A707__CTOR_OFFSET UNITYSDK_OFFSET(0x9D9DFB0)

inline static constexpr unsigned int Class_1_1F219549AE9B7C82_Class_1_5DBB48FEDDF4A707_TypeDefinitionIndex = 62819;

class Class_1_1F219549AE9B7C82_Class_1_5DBB48FEDDF4A707 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_5DBB48FEDDF4A707__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_96E4292424C0D3B5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_5DBB48FEDDF4A707_METHOD_1_96E4292424C0D3B5_OFFSET))(this, a1);
	}
};
