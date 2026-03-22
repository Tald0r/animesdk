#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_D89177B577188692.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_1_8FBDD7D8E0EE0B49;
class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_6009B6B004FBAD55_METHOD_3_5F94A8349C8486CC_OFFSET UNITYSDK_OFFSET(0xB40E120)
#define CLASS_3_6009B6B004FBAD55_METHOD_3_7A00E552FBB51A60_OFFSET UNITYSDK_OFFSET(0xB40D9B0)
#define CLASS_3_6009B6B004FBAD55_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xB40D5C0)
#define CLASS_3_6009B6B004FBAD55_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB40E1C0)
#define CLASS_3_6009B6B004FBAD55_METHOD_3_E44B3B384EAB8364_OFFSET UNITYSDK_OFFSET(0xB40E220)
#define CLASS_3_6009B6B004FBAD55__CTOR_OFFSET UNITYSDK_OFFSET(0xB40DEA0)

inline static constexpr unsigned int Class_3_6009B6B004FBAD55_TypeDefinitionIndex = 46702;

class Class_3_6009B6B004FBAD55 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_3; // 0x20
	::Class_4_179456445C225AB4<::System::Single>* Field_3_4; // 0x28
	::Class_4_179456445C225AB4<::System::String*>* Field_3_2; // 0x30
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_1; // 0x38
	::Class_3_CF43FA1E89397A1C* Field_3_6; // 0x40
	::Class_3_B537A0AA78803363* Field_3_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6009B6B004FBAD55__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6009B6B004FBAD55_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_7A00E552FBB51A60(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_6009B6B004FBAD55_METHOD_3_7A00E552FBB51A60_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5F94A8349C8486CC(::Class_1_8FBDD7D8E0EE0B49* a1, ::System::Int32 a2, ::Struct_2_D89177B577188692 a3)
	{
		return ((::System::Void(*)(::Class_1_8FBDD7D8E0EE0B49*, ::System::Int32, ::Struct_2_D89177B577188692))((::PBYTE)hIl2Cpp + CLASS_3_6009B6B004FBAD55_METHOD_3_5F94A8349C8486CC_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6009B6B004FBAD55_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_E44B3B384EAB8364(::Struct_2_FE667B282E242C72 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_FE667B282E242C72))((::PBYTE)hIl2Cpp + CLASS_3_6009B6B004FBAD55_METHOD_3_E44B3B384EAB8364_OFFSET))(this, a1);
	}
};
