#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_968;
namespace System { class String; }

#define CLASS_1_D025A0889CC98F75_5_METHOD_1_1DB71C1A0D4B7DA7_OFFSET UNITYSDK_OFFSET(0x8D89680)
#define CLASS_1_D025A0889CC98F75_5_METHOD_1_CC4AB6F26A6D319E_OFFSET UNITYSDK_OFFSET(0x8D89710)
#define CLASS_1_D025A0889CC98F75_5__CTOR_OFFSET UNITYSDK_OFFSET(0x8D89820)

inline static constexpr unsigned int Class_1_D025A0889CC98F75_5_TypeDefinitionIndex = 55321;

class Class_1_D025A0889CC98F75_5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D025A0889CC98F75_5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1DB71C1A0D4B7DA7(::Class_2_208CC9941471731A_968* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_968*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_D025A0889CC98F75_5_METHOD_1_1DB71C1A0D4B7DA7_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_CC4AB6F26A6D319E(::Class_2_208CC9941471731A_968* a1, ::System::Int32& a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_968*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_D025A0889CC98F75_5_METHOD_1_CC4AB6F26A6D319E_OFFSET))(this, a1, a2);
	}
};
