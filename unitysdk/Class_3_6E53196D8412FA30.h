#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_6E53196D8412FA30_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xA15E830)
#define CLASS_3_6E53196D8412FA30_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA15F120)
#define CLASS_3_6E53196D8412FA30_METHOD_3_F4D4194FB86E4F25_OFFSET UNITYSDK_OFFSET(0xA15EC20)
#define CLASS_3_6E53196D8412FA30__CTOR_OFFSET UNITYSDK_OFFSET(0xA15EE30)

inline static constexpr unsigned int Class_3_6E53196D8412FA30_TypeDefinitionIndex = 69386;

class Class_3_6E53196D8412FA30 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_5; // 0x18
	::Class_3_B537A0AA78803363* Field_3_6; // 0x20
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_1; // 0x28
	::Class_3_B537A0AA78803363* Field_3_4; // 0x30
	::Class_4_D0B094D0B900A9F0<::Foundation::ViewObject::ViewObjectHandle>* Field_3_2; // 0x38
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x40
	::Class_4_D0B094D0B900A9F0<::MoleMole::EntityHandle>* Field_3_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E53196D8412FA30__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E53196D8412FA30_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_F4D4194FB86E4F25(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_6E53196D8412FA30_METHOD_3_F4D4194FB86E4F25_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E53196D8412FA30_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
