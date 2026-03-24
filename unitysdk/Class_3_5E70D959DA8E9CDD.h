#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_5E70D959DA8E9CDD_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x8531B30)
#define CLASS_3_5E70D959DA8E9CDD_METHOD_3_7A00E552FBB51A60_OFFSET UNITYSDK_OFFSET(0x8531FA0)
#define CLASS_3_5E70D959DA8E9CDD_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8532560)
#define CLASS_3_5E70D959DA8E9CDD__CTOR_OFFSET UNITYSDK_OFFSET(0x8532230)

inline static constexpr unsigned int Class_3_5E70D959DA8E9CDD_TypeDefinitionIndex = 76942;

class Class_3_5E70D959DA8E9CDD : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_3_2; // 0x18
	::Class_4_D0B094D0B900A9F0<::UnityEngine::Vector3>* Field_3_3; // 0x20
	::Class_3_B537A0AA78803363* Field_3_5; // 0x28
	::Class_3_B537A0AA78803363* Field_3_7; // 0x30
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x38
	::Class_4_D0B094D0B900A9F0<::UnityEngine::Vector3>* Field_3_4; // 0x40
	::Class_3_B537A0AA78803363* Field_3_6; // 0x48
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E70D959DA8E9CDD__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E70D959DA8E9CDD_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_3_7A00E552FBB51A60(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_5E70D959DA8E9CDD_METHOD_3_7A00E552FBB51A60_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E70D959DA8E9CDD_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
