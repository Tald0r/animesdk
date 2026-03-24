#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8FC1A7735F246865;
class Class_3_8F63A57C1693E5AC_14;
namespace System { class Action; }

#define CLASS_2_8FC1A7735F246865_CLASS_1_74E54465A31667CD_METHOD_1_F2FB03460D714C2F_OFFSET UNITYSDK_OFFSET(0x91DED70)
#define CLASS_2_8FC1A7735F246865_CLASS_1_74E54465A31667CD__CTOR_OFFSET UNITYSDK_OFFSET(0x91DED60)

inline static constexpr unsigned int Class_2_8FC1A7735F246865_Class_1_74E54465A31667CD_TypeDefinitionIndex = 46970;

class Class_2_8FC1A7735F246865_Class_1_74E54465A31667CD : public ::System::Object
{
public:
	::Class_2_8FC1A7735F246865* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::UInt32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FC1A7735F246865_CLASS_1_74E54465A31667CD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F2FB03460D714C2F(::Class_3_8F63A57C1693E5AC_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8F63A57C1693E5AC_14*))((::PBYTE)hIl2Cpp + CLASS_2_8FC1A7735F246865_CLASS_1_74E54465A31667CD_METHOD_1_F2FB03460D714C2F_OFFSET))(this, a1);
	}
};
