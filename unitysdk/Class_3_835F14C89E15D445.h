#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_835F14C89E15D445_METHOD_3_0C53D5E3AF8561C4_OFFSET UNITYSDK_OFFSET(0x18DE67D0)
#define CLASS_3_835F14C89E15D445_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x18DE63E0)
#define CLASS_3_835F14C89E15D445_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18DE6F90)
#define CLASS_3_835F14C89E15D445__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE6D70)

inline static constexpr unsigned int Class_3_835F14C89E15D445_TypeDefinitionIndex = 49355;

class Class_3_835F14C89E15D445 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_2; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_4_179456445C225AB4<::System::String*>* Field_3_3; // 0x28
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_1; // 0x30
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_4; // 0x38
	::Class_3_B537A0AA78803363* Field_3_6; // 0x40
	::Class_4_179456445C225AB4<::System::String*>* Field_3_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_835F14C89E15D445__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_835F14C89E15D445_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_0C53D5E3AF8561C4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_835F14C89E15D445_METHOD_3_0C53D5E3AF8561C4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_835F14C89E15D445_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
