#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_97909E1FF0FBBA4E_METHOD_3_25666B778FEDA7B2_OFFSET UNITYSDK_OFFSET(0x90C50C0)
#define CLASS_3_97909E1FF0FBBA4E_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x90C4CD0)
#define CLASS_3_97909E1FF0FBBA4E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x90C5680)
#define CLASS_3_97909E1FF0FBBA4E__CTOR_OFFSET UNITYSDK_OFFSET(0x90C5400)

inline static constexpr unsigned int Class_3_97909E1FF0FBBA4E_TypeDefinitionIndex = 75770;

class Class_3_97909E1FF0FBBA4E : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_5; // 0x18
	::Class_3_B537A0AA78803363* Field_3_6; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28
	::Class_4_179456445C225AB4<::System::String*>* Field_3_3; // 0x30
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_2; // 0x38
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_1; // 0x40
	::Class_4_D0B094D0B900A9F0<::System::Single>* Field_3_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97909E1FF0FBBA4E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97909E1FF0FBBA4E_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_25666B778FEDA7B2(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_97909E1FF0FBBA4E_METHOD_3_25666B778FEDA7B2_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97909E1FF0FBBA4E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
