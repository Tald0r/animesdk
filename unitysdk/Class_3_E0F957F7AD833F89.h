#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_E0F957F7AD833F89_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x6615B70)
#define CLASS_3_E0F957F7AD833F89_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x66163B0)
#define CLASS_3_E0F957F7AD833F89_METHOD_3_D37C77CA65DB1760_OFFSET UNITYSDK_OFFSET(0x6615F60)
#define CLASS_3_E0F957F7AD833F89__CTOR_OFFSET UNITYSDK_OFFSET(0x66160C0)

inline static constexpr unsigned int Class_3_E0F957F7AD833F89_TypeDefinitionIndex = 48508;

class Class_3_E0F957F7AD833F89 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_6; // 0x18
	::Class_3_B537A0AA78803363* Field_3_4; // 0x20
	::Class_4_AF61EEC11F34483C<::UnityEngine::Vector3>* Field_3_2; // 0x28
	::Class_4_AF61EEC11F34483C<::UnityEngine::Vector3>* Field_3_3; // 0x30
	::Class_3_B537A0AA78803363* Field_3_5; // 0x38
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x40
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0F957F7AD833F89__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0F957F7AD833F89_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_D37C77CA65DB1760(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_E0F957F7AD833F89_METHOD_3_D37C77CA65DB1760_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0F957F7AD833F89_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
