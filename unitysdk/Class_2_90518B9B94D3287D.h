#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3002EE73D986F5EA.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class Action; }

#define CLASS_2_90518B9B94D3287D_METHOD_2_10C53153AEDC81E3_OFFSET UNITYSDK_OFFSET(0x92127B0)
#define CLASS_2_90518B9B94D3287D__CTOR_OFFSET UNITYSDK_OFFSET(0x92127A0)

inline static constexpr unsigned int Class_2_90518B9B94D3287D_TypeDefinitionIndex = 66198;

class Class_2_90518B9B94D3287D : public ::Class_1_3002EE73D986F5EA
{
public:
	::Class_1_0D6706375CDAAE8C* Field_2_0; // 0x18
	::System::Boolean Field_2_1; // 0x20

	::System::Void _ctor(::Class_1_0D6706375CDAAE8C* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_90518B9B94D3287D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_10C53153AEDC81E3(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_90518B9B94D3287D_METHOD_2_10C53153AEDC81E3_OFFSET))(this, a1);
	}
};
